#include <headers.hpp>

/*
Pixel Group:
2 r (4)
2 g (4)
2 b (4)
1 transparency
6 repeats

15
If transparency is 0 but rgb isn't black, than increase r,g,&b by 1/8 of 256
*/

typedef uint16_t pixelGroup;
typedef vector<pixelGroup> pixelLine;

void DrawRendered(vector<pixelLine>);