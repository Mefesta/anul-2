#include <windows.h> 
//conține declarații pentru toate funcțiile din API-ul Windows, toate macrocomenzile comune utilizate in windows
#include <tchar.h> //operate matematice de bază
#define IDM_EXIT 1
#define IDM_CLEAR 4
#define IDM_BEZ1 100
bool bezier1 = false;
HINSTANCE hInst;
POINT Pt[4] = { { 100, 48 }, { 88, 246 }, { 364, 192 }, { 250, 48 } };
int varvar = 0;
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);//este un indicator de funcție care este apelat de 
//fiecare dată când este îndeplinită o anumită condiție
void mybezier(HDC hdc, const POINT* Pt) {
	mybezier(hdc, Pt);
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR szCmdLine, int iCmdShow)
	// este convenția de apelare . O convenție de apelare definește modul în 
	//care o funcție primește parametrii de la apelant.
{
	static char szAppName[] = "HelloWin"; // setează numele
	HWND hwndMain; // parametru manerul ferestrei este null
	MSG msg;
	WNDCLASSEX wndclass;
	wndclass.cbSize = sizeof(wndclass);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	// Indicator la procedura ferestrei pentru această clasă de ferestre
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;// Handle la instanța aplicației (pe care am 
	//primit - o în primul parametru al WinMain()
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);// Pictogramă 
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);//culoarea fundalului 
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = L"MyWindowClass";// numele care identifica clasa 
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	RegisterClassEx(&wndclass);
	hwndMain = CreateWindowEx(
			WS_EX_CLIENTEDGE, // este stilul ferestre extinse,
			L"MyWindowClass",
			L"Lab3",
			WS_OVERLAPPEDWINDOW, // stilul ferestrei
			CW_USEDEFAULT, CW_USEDEFAULT, 800, 500,
			NULL, NULL, hInstance, NULL);  // mânerul instanței aplicației și un 
	//pointer către datele de creare a ferestrei.
	ShowWindow(hwndMain, iCmdShow);
	UpdateWindow(hwndMain);
	while (GetMessage(&msg, NULL, 0, 0))
		// GetMessage()primește un mesaj din coada de mesaje a aplicației 
	{
		TranslateMessage(&msg); // face unele procesări suplimentare pe tastatură
		DispatchMessage(&msg); ; // trimite mesajul către fereastră că mesajul a fost trimis 
	}
	return msg.wParam; //bucla de mesaj
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
// este un indicator de funcție care este apelat de fiecare dată când este îndeplinită o anumită condiție
{
	int wmId, wmEvent;
	HDC hdc;
	PAINTSTRUCT ps;
	//Structura PAINTSTRUCT conține informații pentru o  aplicație.Aceste informații pot 
	//fi folosite pentru a picta zona client a unei ferestre deținute de acea aplicație.
	RECT rect;  //Rect reprezintă un dreptunghi abstract și poate fi folosit într-o  varietate de situații
	HMENU hMenubar = CreateMenu();
	HMENU hFile = CreateMenu();
	HMENU hOptions = CreateMenu();
	switch (iMsg)
	{
	case WM_CREATE: {
		// este un mesaj trimis atunci când o aplicație solicită
		//crearea unei ferestre prin apelarea funcției CreateWindowEx
		HMENU hMenubar = CreateMenu();
		HMENU hFile = CreateMenu();
		HMENU hOptions = CreateMenu();
		AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hFile, L"File");
		AppendMenu(hMenubar, MF_POPUP, NULL, L"Edit");
		AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hOptions, L"Bezier");
		AppendMenu(hFile, MF_STRING, IDM_EXIT, L"Exit");
		AppendMenu(hOptions, MF_STRING, IDM_BEZ1, L"BEZ_1");
		AppendMenu(hOptions, MF_STRING, IDM_CLEAR, L"CLEAR");
		SetMenu(hwnd, hMenubar);
		break;
	}
	case WM_COMMAND:
		wmId = LOWORD(wParam); // lățimea spațiului de lucru
		wmEvent = HIWORD(wParam);  // inaltimea spațiului de lucru
		// Analizați selecția meniului: 
		switch (LOWORD(wParam))
		{
		case IDM_EXIT:
			DestroyWindow(hwnd);
			break;
		case IDM_BEZ1:
			bezier1 = true;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		
		case IDM_CLEAR:
			bezier1 = false;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		default:
			return DefWindowProc(hwnd, iMsg, wParam, lParam);
		}
		break;
	case WM_PAINT:
	// este trimis atunci când sistemul sau o altă aplicație 
		//solicită să picteze o porțiune din fereastra unei aplicații.
		hdc = BeginPaint(hwnd, &ps);
		if (bezier1)
			PolyBezier(hdc, Pt, 4); //functia de desenare a polybenzier
		
		return 0;
	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_NUMPAD8:
			Pt[3].y--;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case VK_NUMPAD2:
			Pt[3].y++;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case VK_NUMPAD6:
			Pt[3].x++;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case VK_NUMPAD4:
			Pt[3].x--;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case VK_UP:
			Pt[0].y--;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case VK_DOWN:
			Pt[0].y++;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case VK_RIGHT:
			Pt[0].x++;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		case VK_LEFT:
			Pt[0].x--;
			InvalidateRect(hwnd, NULL, TRUE);
			break;
		default:
			break;
		}
		break;
	case WM_MOUSEMOVE:
		if (GetKeyState(MK_LBUTTON))
		{
			Pt[varvar].x = LOWORD(lParam);
			Pt[varvar].y = HIWORD(lParam);
			InvalidateRect(hwnd, NULL, TRUE);
		}
		break;
	case WM_LBUTTONDOWN:
		if (varvar == 3) varvar = -1;
		varvar++;
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd, iMsg, wParam, lParam);
}
