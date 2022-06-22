#include <windows.h> //conține declarații pentru toate funcțiile din API-ul  
//Windows, toate macrocomenzile comune utilizate in window
#include <math.h> /// operate matematice de bază
#define NUM	1000
#define TWOPI	(2 * 3.14159)
int a[3][6] = { { 123, 343, 100, 163, 232, 166 }, { 128, 15, 129, 74, 234, 255 }, { 1, 2,3,4,1,4} };
int circle(HWND hwnd, HDC hdc, int i, int j, int dir, RECT rect, int nr) {
	HPEN hYellowPen; HBRUSH hRedBrush;
	//Pictează interiorul poligoanelor, elipselor și căilor.
	hYellowPen = CreatePen(PS_SOLID, 1, RGB(255, 255, 0)); 
	hRedBrush = CreateSolidBrush(RGB(255, 0, 0)); if (j + 150 > rect.bottom)
		 
	{
		if (dir == 1)a[2][nr] = 2; else a[2][nr] = 3;
	}
	if (i + 150 > rect.right)
	{
		if (dir == 2)a[2][nr] = 3; else a[2][nr] = 4;
	}
	if (j + 50 < rect.top)
	{
		if (dir == 3)a[2][nr] = 4; else a[2][nr] = 1;
	}
	if (i + 50 < rect.left)
	{
		if (dir == 4)a[2][nr] = 1; else a[2][nr] = 2;
	}
	switch (a[2][nr])
	{
	case 1: {
		a[0][nr]++; a[1][nr]++; break;
	}
	case 2: {
		a[0][nr]++; a[1][nr]--; break;
	}
	case 3: {
		a[0][nr]--; a[1][nr]--; break;
	}
	case 4: {
		a[0][nr]--; a[1][nr]++; break;
	} }
	switch (nr)
	{
	case 0: {SelectObject(hdc, hYellowPen); SelectObject(hdc, hRedBrush); break; }
	}
	Rectangle(hdc, a[0][nr] + 50, a[1][nr] + 50, a[0][nr] + 150, a[1][nr] + 150);
	DeleteObject(hYellowPen); DeleteObject(hRedBrush);
	// stergerea obiectelor create
	return dir;
}
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
// este un indicator de funcție care este apelat de fiecare dată când este îndeplinită oanumită condiție
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
// este convenția de apelare . O convenție de apelare definește modul în care o funcție primește parametrii de la apelant.
{
	static char szAppName[] = "SineWave"; // setează numele
	HWND	hwnd; // parametru manerul ferestrei este null
	MSG	msg;
	WNDCLASSEX	wndclass;
	wndclass.cbSize = sizeof(wndclass);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL; wndclass.lpszClassName = (LPCWSTR)szAppName; wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION); RegisterClassEx(&wndclass);
	hwnd = CreateWindow((LPCWSTR)szAppName, L"Interfata GDI/Bunescu Gabriel Gr.TI-207",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,
		CW_USEDEFAULT, CW_USEDEFAULT,
		NULL, NULL, hInstance, NULL); ShowWindow(hwnd, iCmdShow); UpdateWindow(hwnd);
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg); DispatchMessage(&msg);//  face unele procesări suplimentare pe tastatură
	}
	return msg.wParam;//bucla de mesaj 
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
//este un indicator de funcție care este apelat de fiecare dată când este îndeplinită o anumită condiție
{
	static int	cxClient, cyClient;
	HDC	hdc, hCompatibleDC; //Un mâner pentru afișaj DC pentru a fi folosit pentru vopsire.
	int i; PAINTSTRUCT ps; //Structura PAINTSTRUCT conține informații pentru o aplicație.
	//Aceste informații pot fi folosite pentru a picta zona client a unei ferestre deținute de acea aplicație.
	POINT	pt[NUM];
	PAINTSTRUCT PaintStruct;
	HANDLE hBitmap, hOldBitmap;
	RECT Rect;
	BITMAP Bitmap;
	switch (iMsg)
	{
	case WM_SIZE:
		cxClient = LOWORD(lParam);
		cyClient = HIWORD(lParam); return 0;
	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps); // Desenam linii dreapte
		hBitmap = LoadImage(NULL, L"asd.BMP", //gestionați un bitmap GDI. 
			IMAGE_BITMAP, 700, 430, LR_LOADFROMFILE);/// Obtinem marimea imaginii bitmap
		GetObject(hBitmap, sizeof(BITMAP), &Bitmap); hCompatibleDC = CreateCompatibleDC(hdc); hOldBitmap = SelectObject(hCompatibleDC, hBitmap); GetClientRect(hwnd, &Rect);
		//Cream o noua variabila handle a contextului de dispozitiv apoi Pastram imaginea veche bitmap, 
		//Copiem imaginea bitmap si o deplasam
		StretchBlt(hdc, 0, 0, cxClient, cyClient, hCompatibleDC, 0, 0, Bitmap.bmWidth, Bitmap.bmHeight, SRCCOPY);
		// Restauram obiectul anterior
		SelectObject(hCompatibleDC, hOldBitmap);
		//Stergem imaginea bitmap incarcata
		DeleteObject(hBitmap);
		//Stergem variabila handle a contextului de dispozitiv
		DeleteDC(hCompatibleDC);
		DrawText(hdc, L"Lucrare de laborator Nr2 ", -1, &Rect,
			DT_SINGLELINE | DT_CENTER | DT_VCENTER);
		for (i = 0; i < NUM; i++) {
			pt[i].x = i * cxClient / NUM;
			pt[i].y = (int)(cyClient / 2 *
				(1 - sin(TWOPI * i / NUM)));
		}
		Polyline(hdc, pt, NUM);
		InvalidateRect(hwnd, NULL, TRUE);
		circle(hwnd, hdc, a[0][0], a[1][0], a[2][0], Rect, 0); Sleep(50);
		EndPaint(hwnd, &PaintStruct); return 0;
	case WM_DESTROY: PostQuitMessage(0); return 0;
	}
	return DefWindowProc(hwnd, iMsg, wParam, lParam);
}

