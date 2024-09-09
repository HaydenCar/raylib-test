#include <raylib.h>
#include "Engine.h"

int main()
{
    InitWindow(1280, 720, "Title");
    SetTargetFPS(60);
    
    DisableCursor(); 

    while (WindowShouldClose() == false)
    {
        engineRun();
    }

    CloseWindow();
    return 0;
}