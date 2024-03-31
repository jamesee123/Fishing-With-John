/*
Pixel Color:
5 r (4)
5 g (4)
5 b (4)
1 transparency
*/
#define pixelSize 20
#define width 64
#define height 36

typedef uint_fast16_t pixel;
extern pixel screen[width][height];

u_int16_t* pixelToCoords(u_int16_t, u_int16_t);
void DrawRendered();