#include <windows.h>


LRESULT window_callback(HWND hWnd,  UINT Msg, WPARAM wParam, LPARAM lParam){

    return DefWindowProcA(hWnd, Msg, wParam, lParam);
}

int WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR     lpCmdLine,
  int       nShowCmd
){

 WNDCLASSA window_class= {0};
 window_class.style = CS_HREDRAW | CS_VREDRAW;
 window_class.lpszClassName = "Game Window";
 window_class.lpfnWndProc = (WNDPROC)window_callback;

  RegisterClassA(
    &window_class
  );


  HWND window = CreateWindowExA(
  0,
  window_class.lpszClassName,
  "Breakout",
  WS_VISIBLE | WS_OVERLAPPEDWINDOW,
  CW_USEDEFAULT,CW_USEDEFAULT,
  1280, 720, 0, 0, 0, 0);
return 0;
}