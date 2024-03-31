#include "headers.hpp"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Draw Square Example");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        DrawRendered({});
    }
    CloseWindow();

    return 0;
}