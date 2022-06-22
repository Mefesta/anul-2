// WindowsProject5.cpp : Defines the entry point for the application.
//

#include "framework.h"
#include "WindowsProject5.h"
#include"Resource.h"
#include "winuser.h"


#define ID_BLUE 2
#define ID_GREEN 3
#define ID_ORANGE 4
#define ID_ANKARA 5
#define ID_CAIRO 6
#define ID_CANBERRA 7
#define ID_DONE 8
#define ID_QUIT 9
#define ID_SASE 10
#define ID_OPT 11
#define ID_CO2 12
#define ID_H2O 13
#define ID_CAC2 14

#define ID_COLOMBIA 15
#define ID_PANAMA 16
#define ID_ARGENTINA 17
#define ID_PORTUGAL 18


 



UINT_PTR WINAPI SetTimer(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse,
	TIMERPROC lpTimerFunc);
VOID CALLBACK TimerProc(
	HWND hWnd, // fereastra
	UINT uMsg, // WM_TIMER mesajul
	UINT_PTR idEvent, // Numarul Timerului
	DWORD dwTime // ora actuala
);




LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
HWND hButton;
HINSTANCE hinst;
void LoadMyImage(void);
HBITMAP hBitmap;

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPWSTR lpCmdLine, int nCmdShow) {

	HWND hwnd;
	MSG	msg;
	WNDCLASSW wc = { 0 };
	wc.lpszClassName = L"Quiz";
	wc.hInstance = hInstance;
	wc.hbrBackground = GetSysColorBrush(COLOR_3DFACE); 
	wc.lpfnWndProc = WndProc;
	wc.hCursor = LoadCursor(0, IDC_ARROW);

	hinst = hInstance;

	RegisterClass(&wc);

	hwnd = CreateWindowW(wc.lpszClassName, L"Quiz",
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		200, 100, 700, 400, 0, 0, hInstance, 0);

	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int)msg.wParam;
}




LRESULT CALLBACK WndProc(HWND hwnd, UINT msg,

	WPARAM wParam, LPARAM lParam) {

	HWND histi;
	HDC hdc;
	PAINTSTRUCT ps;

	static int t = 0 ;
	TCHAR s[10], str[20] = _T("Seconds: ");

	switch (msg) {

	case WM_CREATE:
		LoadMyImage();
		histi = CreateWindowW(L"Static", L"",
			WS_CHILD | WS_VISIBLE | SS_BITMAP,
			480, 70, 300, 300, hwnd, (HMENU)1, NULL, NULL);

		SendMessage(histi, STM_SETIMAGE,

			(WPARAM)IMAGE_BITMAP, (LPARAM)hBitmap);


		SetTimer(hwnd, 1, 1000, NULL);

		CreateWindowW(L"Button", L"What color is the apple?",
			WS_CHILD | WS_VISIBLE | BS_GROUPBOX,
			10, 10, 120, 110, hwnd, (HMENU)0, hinst, NULL); 
		       
		       CreateWindowW(L"Button", L"Blue",
				WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
				20, 30, 100, 30, hwnd, (HMENU)ID_BLUE, hinst, NULL); 
				     
				   CreateWindowW(L"Button", L"Green",
					WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
					20, 55, 100, 30, hwnd, (HMENU)ID_GREEN, hinst, NULL); 
				   
				   CreateWindowW(L"Button", L"Orange",
						WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
						20, 80, 100, 30, hwnd, (HMENU)ID_ORANGE, hinst, NULL);
				   //--------------------------------------------------------------------

		CreateWindowW(L"Button", L"The capital of Turkey",
			WS_CHILD | WS_VISIBLE | BS_GROUPBOX,

			230, 10, 120, 110, hwnd, (HMENU)0, hinst, NULL); 
		        
		        CreateWindowW(L"Button", L"Ankara",
				WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
				240, 30, 100, 30, hwnd, (HMENU)ID_ANKARA, hinst, NULL); 
				
				    CreateWindowW(L"Button", L"Cairo",
					WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
					240, 55, 100, 30, hwnd, (HMENU)ID_CAIRO, hinst, NULL);
					
					CreateWindowW(L"Button", L"Canberra",
						WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
						240, 80, 100, 30, hwnd, (HMENU)ID_CANBERRA, hinst, NULL); 
					//--------------------------------------------------------------------------

		CreateWindowW(L"Button" , L"DONE", WS_VISIBLE | WS_CHILD,
			450, 330, 80, 25, hwnd, (HMENU)ID_DONE, NULL, NULL);
		CreateWindowW(L"Button", L"QUIT", WS_VISIBLE | WS_CHILD,
			550, 330, 80, 25, hwnd, (HMENU)ID_QUIT, NULL, NULL);

		CreateWindowW(L"Button", L"2+2*2 = ?",
			WS_CHILD | WS_VISIBLE | BS_GROUPBOX,

			10, 150, 120, 110, hwnd, (HMENU)0, hinst, NULL);
		CreateWindowW(L"Button", L"6 (six)",
				WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,

				20, 180, 100, 30, hwnd, (HMENU)ID_SASE, hinst, NULL); 
		CreateWindowW(L"Button", L"8 (eight)",
					WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,

					20, 200, 100, 30, hwnd, (HMENU)ID_OPT, hinst, NULL); //-------------------------------------------------------------------
		CreateWindowW(L"Button", L"Carbide formula?",
			WS_CHILD | WS_VISIBLE | BS_GROUPBOX,

			230, 150, 120, 110, hwnd, (HMENU)0, hinst, NULL); 
		CreateWindowW(L"Button", L"CO2",
				WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,

				240, 180, 100, 30, hwnd, (HMENU)ID_CO2, hinst, NULL); 
		CreateWindowW(L"Button", L"H2O",
					WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,

					240, 200, 100, 30, hwnd, (HMENU)ID_H2O, hinst, NULL); 
		CreateWindowW(L"Button", L"CaC2",
						WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,

						240, 220, 100, 30, hwnd, (HMENU)ID_CAC2, hinst, NULL); 
		//--------------------------------------------------------------------------
		
		hButton = CreateWindowW(L"Button", L"Colombia",
			WS_VISIBLE | WS_CHILD | BS_AUTOCHECKBOX,
			450, 170, 80, 25, hwnd, (HMENU)ID_COLOMBIA, NULL, NULL);
		
		CreateWindowW(L"Button", L"Panama",
			WS_VISIBLE | WS_CHILD | BS_AUTOCHECKBOX,
			550, 170, 80, 25, hwnd, (HMENU)ID_PANAMA, NULL, NULL);

		CreateWindowW(L"Button", L"Argentina",
			WS_VISIBLE | WS_CHILD | BS_AUTOCHECKBOX,
			450, 200, 80, 25, hwnd, (HMENU)ID_ARGENTINA, NULL, NULL);

		CreateWindowW(L"Button", L"Portugal",
			WS_VISIBLE | WS_CHILD | BS_AUTOCHECKBOX,
			550, 200, 80, 25, hwnd, (HMENU)ID_PORTUGAL, NULL, NULL);
		break;

	case WM_COMMAND:

		if (LOWORD(wParam) == ID_DONE) {
			KillTimer(hwnd, 1);
			MessageBox(hwnd, L"Congratulations! You finished the test", L"",
				NULL);
		}
		if (LOWORD(wParam) == ID_QUIT) {
			PostQuitMessage(0);
		}

		if (HIWORD(wParam) == BN_CLICKED) {

			switch (LOWORD(wParam)) {

			case ID_BLUE:
				MessageBox(hwnd, L"False", L"", MB_ICONHAND);
				CheckDlgButton(hwnd, ID_BLUE, BST_UNCHECKED);
				break;

			case ID_GREEN:
				MessageBox(hwnd, L"Correct", L"", MB_ICONINFORMATION); 
				break; 

			case ID_ORANGE:
				MessageBox(hwnd, L"False", L"", MB_ICONHAND);
				CheckDlgButton(hwnd, ID_ORANGE, BST_UNCHECKED);
			
				break;
				//-----------------------------------------------------------	break;

			case ID_CAIRO:
				MessageBox(hwnd, L"False", L"", MB_ICONHAND);
				CheckDlgButton(hwnd, ID_CAIRO, BST_UNCHECKED);
				break;
			case ID_ANKARA:
				MessageBox(hwnd, L"Correct", L"", MB_ICONINFORMATION);
				break;
			case ID_CANBERRA:
				MessageBox(hwnd, L"False", L"", MB_ICONHAND);
				CheckDlgButton(hwnd, ID_CANBERRA, BST_UNCHECKED);
				break;
				//----------------------------------------------------------------------
			case ID_ARGENTINA:
				MessageBox(hwnd, L"False", L"", MB_ICONHAND);
				break;
			case ID_COLOMBIA:
				MessageBox(hwnd, L"Correct", L"", MB_ICONINFORMATION);
				EnableWindow(hButton, FALSE);
				break;
			case ID_PANAMA:
				MessageBox(hwnd, L"False", L"", MB_ICONHAND);
				break;
			case ID_PORTUGAL:
				MessageBox(hwnd, L"False", L"", MB_ICONHAND);
				break;
			
			case ID_SASE:
			MessageBox(hwnd, L"Correct", L"", MB_ICONINFORMATION);
			break;
			case ID_OPT:
			MessageBox(hwnd, L"False", L"", MB_ICONHAND);
			CheckDlgButton(hwnd, ID_OPT, BST_UNCHECKED);
			break;
			case ID_H2O:
			MessageBox(hwnd, L"False", L"", MB_ICONHAND);
			CheckDlgButton(hwnd, ID_H2O, BST_UNCHECKED);
			break;
			case ID_CO2:
			MessageBox(hwnd, L"False", L"", MB_ICONHAND);
			CheckDlgButton(hwnd, ID_CO2, BST_UNCHECKED);
			break;
			case ID_CAC2:
			MessageBox(hwnd, L"Correct", L"", MB_ICONINFORMATION);
			break;

		}
		InvalidateRect(hwnd, NULL, TRUE);
		}
		break;

		case WM_TIMER  :
			t++;
			InvalidateRect(hwnd, NULL, TRUE);
			break;

	
	case WM_PAINT:

		hdc = BeginPaint(hwnd, &ps);
		_tcscat(str + 9, _itot(t, str, 10));
		TextOut(hdc, 600, 10, str, _tcsclen(str));
		TextOut(hdc, 460, 140, L"Which country is this flag", 26);
		EndPaint(hwnd, &ps);
		break;

	case WM_DESTROY:

		DeleteObject(hBitmap);
		PostQuitMessage(0);
		break;

	}
	return DefWindowProcW(hwnd, msg, wParam, lParam);

}

void LoadMyImage(void) {

	hBitmap = (HBITMAP)LoadImage(NULL, L"C:\\Users\\gabyb\\Desktop\\ppe\\vs\\lab 4-5\\1234.bmp",
		IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

}

