#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    float x1 = 100, y1 = 100;
    float x2 = 300, y2 = 200;

    float dx = x2 - x1;
    float dy = y2 - y1;

    int steps = abs(dx);

    if (abs(dy) > steps)
        steps = abs(dy);

    float xinc = dx / steps;
    float yinc = dy / steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x = x + xinc;
        y = y + yinc;
    }

    getch();
    closegraph();

    return 0;
}
