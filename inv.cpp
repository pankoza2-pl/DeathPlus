




#include <windows.h>


int main()
{
    FreeConsole();
    HDC hdc = GetDC(HWND_DESKTOP);

    for (;;) {
            BitBlt(hdc, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN), hdc, NULL, NULL, NOTSRCCOPY);
            Sleep(2100);
            BitBlt(hdc, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN), hdc, 0, 0, NOTSRCCOPY);
            Sleep(2100);
        
    }
}
