#include <raylib.h>
#include "PlayerInfo.h"
#include <iostream>

int main()
{
    player PLAYER;
    InitWindow(1280, 720, "Title");
    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        handleInput(&PLAYER);

        BeginDrawing();
        ClearBackground(BLANK);
        DrawCircle(PLAYER.x, PLAYER.y, PLAYER.radius, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}