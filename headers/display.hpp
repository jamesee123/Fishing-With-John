#include <headers.hpp>

/*
Pixel Group:
3 r (4)
3 g (4)
3 b (4)
1 color value = 36 brightness
1 transparency
6 repeats
*/

#define pixelSize 20
#define width 64
#define height 36

typedef uint16_t pixelGroup;
typedef vector<pixelGroup> pixelLine;

void DrawRendered(vector<pixelLine>);