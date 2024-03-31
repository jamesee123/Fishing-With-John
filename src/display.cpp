#include "headers.hpp"

/*
Pixel Group:
3 r (4)
3 g (4)
3 b (4)
1 color value = 36 brightness
1 transparency
6 repeats
*/

void DrawRendered(vector<pixelLine> screen)
{
    BeginDrawing();
    ClearBackground(BLACK);
    DrawRectangle(0, 0, pixelSize, pixelSize, RED);
    EndDrawing();
}