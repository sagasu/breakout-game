#include <windows.h>


LRESULT CALLBACK DefWindowProcA(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam){
    return DefWindowProcA();
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
 window_class.lpfnWndProc = DefWindowProcA;

//   RegisterClassA(
//   [in] const WNDCLASSA *lpWndClass
// );

//   HWND window = HWND CreateWindowExA(
//   0,
//   LPCSTR    lpClassName,
//   LPCSTR    lpWindowName,
//   DWORD     dwStyle,
//   int       X,
//   int       Y,
//   int       nWidth,
//   int       nHeight,
//   HWND      hWndParent,
//   HMENU     hMenu,
//   HINSTANCE hInstance,
//   LPVOID    lpParam
// );
  return 0;
}