#include "raylib.h"

int main()
{
    InitWindow(1920, 1080, "Title");
    SetTargetFPS(144);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(BLACK);
            DrawFPS(20, 20);
        }
        EndDrawing();
    }
    CloseWindow();
}