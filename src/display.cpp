#include "headers.hpp"

void DrawRendered(vector<pixelLine> screen)
{
    BeginDrawing();
    ClearBackground(RAYWHITE);

        // Draw a white square at position (200, 200) with size 100x100
    DrawRectangle(200, 200, 100, 100, WHITE);

    EndDrawing();
}