#include <windows.h>

typedef int b32;
#define true 1
#define false 0
#define global_variable static
#define internal static

global_variable b32 running = true;

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


  while(running){
    MSG message;
    while(PeekMessageA(&message, window, 0, 0, PM_REMOVE)){
      if(message.message == WM_QUIT){
        running = false;
      }
      TranslateMessage(&message);
      DispatchMessageA(&message);
    }
  }

return 0;
}