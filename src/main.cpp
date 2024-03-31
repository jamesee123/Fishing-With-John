#include "headers.hpp"

int main()
{
    InitWindow(width * pixelSize, height * pixelSize, "Apple Musescore Obsidian Skin VRAM 16.667!");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        DrawRendered();
    }
    CloseWindow();

    return 0;
}