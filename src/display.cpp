#include "headers.hpp"

/*
Pixel Color:
5 r (4)
5 g (4)
5 b (4)
1 transparency
*/

pixel screen[width][height];

u_int16_t* pixelToCoords(u_int16_t x, u_int16_t y)
{
    u_int16_t toReturn[] = {static_cast<u_int16_t>(x * pixelSize), static_cast<u_int16_t>(y * pixelSize)};
    return toReturn;
}

void DrawRendered()
{
    ClearBackground(BLACK);
    BeginDrawing();
    for (u_int8_t y = 0; y < height; y++)
    {
        for (u_int8_t x = 0; x < width; x++)
        {
            u_int16_t startingColor = screen[x][y];
            if ((screen[x][y] & 1) == 0)
            {
                continue;
            }
            u_int16_t* position = pixelToCoords(x, y);
            u_int8_t r = (startingColor>>11) * 8;
            u_int8_t g = (startingColor>>6 & 31) * 8;
            u_int8_t b = (startingColor>>1 & 31) * 8;

            Color color = {r, g, b, 255};

            DrawRectangle(position[0], position[1], pixelSize, pixelSize, color);
        }
    }
    EndDrawing();
}