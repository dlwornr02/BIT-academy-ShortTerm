////3번 크기 글꼴 색 바꾸기
//#include <windows.h>
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg,
//	WPARAM wParam, LPARAM lParam);
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
//	LPSTR lpszCmdLine, int nCmdShow)
//{
//	HWND 	 hwnd;
//	MSG 	 msg;
//	WNDCLASS WndClass;
//	WndClass.style = CS_HREDRAW | CS_VREDRAW;
//	WndClass.lpfnWndProc = WndProc;
//	WndClass.cbClsExtra = 0;
//	WndClass.cbWndExtra = 0;
//	WndClass.hInstance = hInstance;
//	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
//	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
//	WndClass.lpszMenuName = NULL;
//	WndClass.lpszClassName = "Window Class Name";
//	RegisterClass(&WndClass);
//	hwnd = CreateWindow("Window Class Name",
//		"Window Title Name",
//		WS_OVERLAPPEDWINDOW,
//		CW_USEDEFAULT,
//		CW_USEDEFAULT,
//		CW_USEDEFAULT,
//		CW_USEDEFAULT,
//		NULL,
//		NULL,
//		hInstance,
//		NULL
//		);
//	ShowWindow(hwnd, nCmdShow);
//	UpdateWindow(hwnd);
//	while (GetMessage(&msg, NULL, 0, 0))
//	{
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//	return (int)msg.wParam;
//}
//
//void DrawX(HDC hdc, int cx, int cy)
//{
//	HPEN hNewPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
//	HPEN hOldPen = (HPEN)SelectObject(hdc, hNewPen);
//
//	MoveToEx(hdc, 0, 0, NULL);
//	LineTo(hdc, cx, cy);
//	MoveToEx(hdc, cx, 0, NULL);
//	LineTo(hdc, 0, cy);
//
//	SelectObject(hdc, hOldPen);
//	DeleteObject(hNewPen);
//}
//void DrawRect(HDC hdc, RECT rt)
//{
//	HPEN hNewPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 255));
//	HPEN hOldPen = (HPEN)SelectObject(hdc, hNewPen);
//	HBRUSH hNewBrush = CreateSolidBrush(RGB(255, 255, 0));
//	HBRUSH hOldBrush = (HBRUSH)SelectObject(hdc, hNewBrush);
//
//	Rectangle(hdc, rt.left, rt.top, rt.right, rt.bottom);
//
//	SelectObject(hdc, hOldPen);
//	SelectObject(hdc, hOldBrush);
//	DeleteObject(hNewPen);
//	DeleteObject(hOldBrush);
//}
//void Draw_Text(HDC hdc, RECT rt)
//{
//	HFONT hNewFont = CreateFont(40, 0, 0, 0, NULL , 0, 0, 0, NULL, NULL, NULL, NULL, NULL, "MS Sans Serif");
//	//높이//넓이(0넣으면 비례)//기울기//출력각도//베이스 라인각도//이텔릭//밑줄//가운데선//문자세트//정밀도//클리핑정밀도//정밀도//글자의 피치//글꼴
//	HFONT hOldFont = (HFONT)SelectObject(hdc, hNewFont);
//	SetTextColor(hdc, RGB(255, 255, 255));
//	SetBkColor(hdc, RGB(0, 0, 0));
//	DrawText(hdc, "Hello!", -1, &rt, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
//	
//	SelectObject(hdc, hOldFont);
//	DeleteObject(hNewFont);
//}
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg,
//	WPARAM wParam, LPARAM lParam)
//{
//	HDC         hdc;
//	PAINTSTRUCT ps;
//	static int cx, cy;
//	static RECT rt;
//
//	switch (iMsg)
//	{
//	case WM_CREATE:
//		break;
//	case WM_SIZE:
//		cx = LOWORD(lParam);
//		cy = HIWORD(lParam);
//		rt.left = cx / 4;
//		rt.top = cy / 4;
//		rt.right = cx / 4 * 3;
//		rt.bottom = cy / 4 * 3;
//		break;
//	case WM_PAINT:
//	{
//					 hdc = BeginPaint(hwnd, &ps);
//
//					 DrawX(hdc, cx, cy);
//					 DrawRect(hdc, rt);
//					 Draw_Text(hdc, rt);
//
//					 EndPaint(hwnd, &ps);
//	}
//		break;
//	case WM_DESTROY:
//		PostQuitMessage(0);
//		break;
//	}
//	return DefWindowProc(hwnd, iMsg, wParam, lParam);
//}










//2번과제 : 현재 증가량이 1이찍힐 경우가 있는데 이때는 느리다는게 문제 /////////////////////////////////////////////////////////////////////////
#include <windows.h>
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, 
						 WPARAM wParam, LPARAM lParam);
void CALLBACK TimerProc(HWND hwnd, UINT msg, UINT id, DWORD time);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
				   LPSTR lpszCmdLine, int nCmdShow)
{
	HWND 	 hwnd;
	MSG 	 msg;
	WNDCLASS WndClass;   
	WndClass.style = CS_HREDRAW | CS_VREDRAW;
	WndClass.lpfnWndProc = WndProc;		
	WndClass.cbClsExtra	= 0;		
	WndClass.cbWndExtra	= 0;		
	WndClass.hInstance = hInstance;		
	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);	
	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);	
	WndClass.lpszMenuName = NULL;		
	WndClass.lpszClassName = "Window Class Name";	
	RegisterClass(&WndClass);	
	hwnd = CreateWindow("Window Class Name",
		"Window Title Name",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,	
		CW_USEDEFAULT,	
		CW_USEDEFAULT,	
		CW_USEDEFAULT,	
		NULL,	
		NULL,	
		hInstance,	
		NULL	 
	);
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);	
		DispatchMessage(&msg);	
	}   
	return (int)msg.wParam;
}

void DrawCircle(HDC hdc, POINT pt)
{
	Ellipse(hdc, pt.x - 20 , pt.y - 20, pt.x+20, pt.y+20);
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg,
                         WPARAM wParam, LPARAM lParam) 
{
	HDC         hdc;
	PAINTSTRUCT ps; 
	static bool bTimer = false;
	static RECT client_rect;
	static POINT circle;
	static int x_increase;
	static int y_increase;

	switch (iMsg)
	{
	case WM_CREATE:
		srand(GetTickCount());
		break;
	case WM_TIMER:
	{
		circle.x += x_increase;
		circle.y += y_increase;
		if (circle.x <= 0 || circle.x >= client_rect.right)
			x_increase = -x_increase;
		if (circle.y <= 0 || circle.y >= client_rect.bottom)
			y_increase = -y_increase;
		InvalidateRect(hwnd, NULL, TRUE);
	}
		break;
	case WM_SIZE:
		GetClientRect(hwnd, &client_rect);
		circle.x = LOWORD(lParam) / 2;
		circle.y = HIWORD(lParam) / 2;
		break;
	case WM_LBUTTONDOWN:
	{
						   if (bTimer == false)
						   {
							   if (rand() % 2)//렌드가 홀수면 양수
							   {
								   x_increase = rand() % 10;
							   }
							   else//렌드가 짝수면 음수
							   {
								   x_increase = -rand() % 10;
							   }

							   if (rand() % 2)//렌드가 홀수면 양수
							   {
								   y_increase = rand() % 10;
							   }
							   else//렌드가 짝수면 음수
							   {
								   y_increase = -rand() % 10;
							   }
							   SetTimer(hwnd, 1, 1, NULL);
						   }
						   else
						   {

							   KillTimer(hwnd,1);
						   }
						   bTimer ^= true;

	}
		break;
    case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		DrawCircle(hdc, circle);
		EndPaint(hwnd, &ps);
		break; 
    case WM_DESTROY:

		PostQuitMessage(0);
		break; 
	}
	return DefWindowProc(hwnd, iMsg, wParam, lParam);
}













//////1번///////////////////////////////////////////////////////////////////////////////////////////////

////////////3개하고나서 움직이기/////////////////////////////////////////////////////////////////////////
//#include <windows.h>
//#include <list>
//using namespace std;
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, 
//						 WPARAM wParam, LPARAM lParam);
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
//				   LPSTR lpszCmdLine, int nCmdShow)
//{
//	HWND 	 hwnd;
//	MSG 	 msg;
//	WNDCLASS WndClass;   
//	WndClass.style = CS_HREDRAW | CS_VREDRAW;
//	WndClass.lpfnWndProc = WndProc;		
//	WndClass.cbClsExtra	= 0;		
//	WndClass.cbWndExtra	= 0;		
//	WndClass.hInstance = hInstance;		
//	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);	
//	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);	
//	WndClass.lpszMenuName = NULL;		
//	WndClass.lpszClassName = "Window Class Name";	
//	RegisterClass(&WndClass);	
//	hwnd = CreateWindow("Window Class Name",
//		"Window Title Name",
//		WS_OVERLAPPEDWINDOW,
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		NULL,	
//		NULL,	
//		hInstance,	
//		NULL	 
//	);
//	ShowWindow(hwnd, nCmdShow);
//	UpdateWindow(hwnd);
//	while (GetMessage(&msg, NULL, 0, 0))
//	{
//		TranslateMessage(&msg);	
//		DispatchMessage(&msg);	
//	}   
//	return (int)msg.wParam;
//}
//void MoveRectangle(list<RECT>& rtList, int dx, int dy)
//{
//	for(list<RECT>::iterator iter= rtList.begin(); iter != rtList.end();
//		++iter)
//	{
//		iter->left += dx;
//		iter->right += dx;
//		iter->top += dy;
//		iter->bottom += dy;
//	}
//}
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg,
//	WPARAM wParam, LPARAM lParam)
//{
//	HDC         hdc;
//	PAINTSTRUCT ps;
//	static RECT rt;
//	static list<RECT> rtList;
//	static POINT prev;
//	static bool drag;
//
//	switch (iMsg)
//	{
//	case WM_LBUTTONDOWN:
//		if (rtList.size() < 3)
//		{
//		SetCapture(hwnd);
//		rt.left = (short)LOWORD(lParam);
//		rt.top = (short)HIWORD(lParam);
//		}
//		else
//		{
//			prev.x = (short)LOWORD(lParam);
//			prev.y = (short)HIWORD(lParam);
//			drag = true;
//		}
//		break;
//	case WM_LBUTTONUP:
//		ReleaseCapture();
//		if(rtList.size() < 3)
//		{
//			rt.right = (short)LOWORD(lParam);
//			rt.bottom = (short)HIWORD(lParam);
//			rtList.push_back(rt);
//			hdc = GetDC(hwnd);
//			Rectangle(hdc, rt.left, rt.top, rt.right, rt.bottom);
//			ReleaseDC(hwnd, hdc);
//		}
//		else
//		{
//			drag = false;
//		}
//		break;
//	case WM_MOUSEMOVE:
//		if ( drag == true)
//		{
//			POINT pt;
//			pt.x = (short)LOWORD(lParam);
//			pt.y = (short)HIWORD(lParam);
//			MoveRectangle(rtList, pt.x - prev.x , pt.y - prev.y);
//			InvalidateRect(hwnd, NULL, TRUE);
//			prev.x = pt.x;
//			prev.y = pt.y;
//		}
//		break;
//    case WM_PAINT:
//		hdc = BeginPaint(hwnd, &ps);
//		for(list<RECT>::iterator iter=rtList.begin(); iter!= rtList.end(); ++iter)
//		{
//			const RECT& rt = *iter;
//			Rectangle(hdc,rt.left,rt.top,rt.right,rt.bottom);
//		}
//		EndPaint(hwnd, &ps);
//		break; 
//    case WM_DESTROY:
//		PostQuitMessage(0);
//		break; 
//	}
//	return DefWindowProc(hwnd, iMsg, wParam, lParam);
//}
//











///////////왼쪽버튼 누를때만 그리고 평소엔 걍 드래그로 이동
//#include <windows.h>
//#include <list>
//using namespace std;
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, 
//						 WPARAM wParam, LPARAM lParam);
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
//				   LPSTR lpszCmdLine, int nCmdShow)
//{
//	HWND 	 hwnd;
//	MSG 	 msg;
//	WNDCLASS WndClass;   
//	WndClass.style = CS_HREDRAW | CS_VREDRAW;
//	WndClass.lpfnWndProc = WndProc;		
//	WndClass.cbClsExtra	= 0;		
//	WndClass.cbWndExtra	= 0;		
//	WndClass.hInstance = hInstance;		
//	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);	
//	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);	
//	WndClass.lpszMenuName = NULL;		
//	WndClass.lpszClassName = "Window Class Name";	
//	RegisterClass(&WndClass);	
//	hwnd = CreateWindow("Window Class Name",
//		"Window Title Name",
//		WS_OVERLAPPEDWINDOW,
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		NULL,	
//		NULL,	
//		hInstance,	
//		NULL	 
//	);
//	ShowWindow(hwnd, nCmdShow);
//	UpdateWindow(hwnd);
//	while (GetMessage(&msg, NULL, 0, 0))
//	{
//		TranslateMessage(&msg);	
//		DispatchMessage(&msg);	
//	}   
//	return (int)msg.wParam;
//}
//void MoveRectangle(list<RECT>& rtList, int dx, int dy)
//{
//	for(list<RECT>::iterator iter= rtList.begin(); iter != rtList.end();
//		++iter)
//	{
//		iter->left += dx;
//		iter->right += dx;
//		iter->top += dy;
//		iter->bottom += dy;
//	}
//}
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg,
//                         WPARAM wParam, LPARAM lParam) 
//{
//	HDC         hdc;
//	PAINTSTRUCT ps; 
//	static RECT rt;
//	static list<RECT> rtList;
//	static POINT st;
//	static POINT ed;
//	static POINT prev;
//	static bool drag;
//	
//	switch (iMsg)
//	{
//	case WM_CREATE:
//		break;
//	case WM_LBUTTONDOWN:
//		SetCapture(hwnd);
//		drag = false;
//		rt.left = (short)LOWORD(lParam);
//		rt.top = (short)HIWORD(lParam);
//		break;
//	case WM_LBUTTONUP:
//		ReleaseCapture();
//			rt.right = (short)LOWORD(lParam);
//			rt.bottom = (short)HIWORD(lParam);
//			rtList.push_back(rt);
//			MoveRectangle(rtList, ed.x - st.x, ed.y - st.y);
//
//			hdc = GetDC(hwnd);
//			Rectangle(hdc, rt.left, rt.top, rt.right, rt.bottom);
//			ReleaseDC(hwnd, hdc);
//			InvalidateRect(hwnd, NULL, TRUE);
//			drag = true;
//		break;
//			case WM_MOUSEMOVE:
//				if ( drag == true)
//				{
//					POINT pt;
//					pt.x = (short)LOWORD(lParam);
//					pt.y = (short)HIWORD(lParam);
//					MoveRectangle(rtList, pt.x - prev.x , pt.y - prev.y);
//					InvalidateRect(hwnd, NULL, TRUE);
//					prev.x = pt.x;
//					prev.y = pt.y;
//				}
//				break;
//    case WM_PAINT:
//		hdc = BeginPaint(hwnd, &ps);
//		for(list<RECT>::iterator iter=rtList.begin(); iter!= rtList.end(); ++iter)
//		{
//			const RECT& rt = *iter;
//			Rectangle(hdc,rt.left,rt.top,rt.right,rt.bottom);
//		}
//		EndPaint(hwnd, &ps);
//		break; 
//    case WM_DESTROY:
//		PostQuitMessage(0);
//		break; 
//	}
//	return DefWindowProc(hwnd, iMsg, wParam, lParam);
//}












/////////////////컨트롤눌르고 마우스 움직이면 표현
//#include <windows.h>
//#include <list>
//using namespace std;
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, 
//						 WPARAM wParam, LPARAM lParam);
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
//				   LPSTR lpszCmdLine, int nCmdShow)
//{
//	HWND 	 hwnd;
//	MSG 	 msg;
//	WNDCLASS WndClass;   
//	WndClass.style = CS_HREDRAW | CS_VREDRAW;
//	WndClass.lpfnWndProc = WndProc;		
//	WndClass.cbClsExtra	= 0;		
//	WndClass.cbWndExtra	= 0;		
//	WndClass.hInstance = hInstance;		
//	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);	
//	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);	
//	WndClass.lpszMenuName = NULL;		
//	WndClass.lpszClassName = "Window Class Name";	
//	RegisterClass(&WndClass);	
//	hwnd = CreateWindow("Window Class Name",
//		"Window Title Name",
//		WS_OVERLAPPEDWINDOW,
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		CW_USEDEFAULT,	
//		NULL,	
//		NULL,	
//		hInstance,	
//		NULL	 
//	);
//	ShowWindow(hwnd, nCmdShow);
//	UpdateWindow(hwnd);
//	while (GetMessage(&msg, NULL, 0, 0))
//	{
//		TranslateMessage(&msg);	
//		DispatchMessage(&msg);	
//	}   
//	return (int)msg.wParam;
//}
//void MoveRectangle(list<RECT>& rtList, int dx, int dy)
//{
//	for(list<RECT>::iterator iter= rtList.begin(); iter != rtList.end();
//		++iter)
//	{
//		iter->left += dx;
//		iter->right += dx;
//		iter->top += dy;
//		iter->bottom += dy;
//	}
//}
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg,
//                         WPARAM wParam, LPARAM lParam) 
//{
//	HDC         hdc;
//	PAINTSTRUCT ps; 
//	static RECT rt;
//	static list<RECT> rtList;
//	static POINT prev;
//	
//	switch (iMsg)
//	{
//    case WM_CREATE:
//		break; 
//	case WM_MOUSEMOVE:
//		if (wParam & MK_CONTROL)
//		{
//							POINT pt;
//							pt.x = (short)LOWORD(lParam);
//							pt.y = (short)HIWORD(lParam);
//							MoveRectangle(rtList, pt.x - prev.x , pt.y - prev.y);
//							InvalidateRect(hwnd, NULL, TRUE);
//							prev.x = pt.x;
//							prev.y = pt.y;
//						}
//						break;
//	case WM_LBUTTONDOWN:
//		SetCapture(hwnd);
//			rt.left = (short)LOWORD(lParam);
//			rt.top = (short)HIWORD(lParam);
//			prev.x = rt.left;
//			prev.y = rt.top;
//
//		break;
//	case WM_LBUTTONUP:
//		ReleaseCapture();
//			rt.right = (short)LOWORD(lParam);
//			rt.bottom = (short)HIWORD(lParam);
//			rtList.push_back(rt);
//
//			hdc = GetDC(hwnd);
//			Rectangle(hdc, rt.left, rt.top, rt.right, rt.bottom);
//			ReleaseDC(hwnd, hdc);
//			prev.x = rt.right;
//			prev.y = rt.bottom;
//
//		break;
//    case WM_PAINT:
//		hdc = BeginPaint(hwnd, &ps);
//		for(list<RECT>::iterator iter=rtList.begin(); iter!= rtList.end(); ++iter)
//		{
//			const RECT& rt = *iter;
//			Rectangle(hdc,rt.left,rt.top,rt.right,rt.bottom);
//		}
//		EndPaint(hwnd, &ps);
//		break; 
//    case WM_DESTROY:
//		PostQuitMessage(0);
//		break; 
//	}
//	return DefWindowProc(hwnd, iMsg, wParam, lParam);
//}