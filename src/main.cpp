#include "headers.hpp"

int main()
{
    InitWindow(width * pixelSize, height * pixelSize, "Draw Square Example");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        DrawRendered({});
    }
    CloseWindow();

    return 0;
}