#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");

    // Draw a line
    line(100, 100, 250, 100);

    // Draw a circle
    circle(400, 120, 50);

    // Draw a rectangle
    rectangle(100, 200, 250, 320);

    // Draw a triangle
    line(400, 200, 330, 320);
    line(330, 320, 470, 320);
    line(470, 320, 400, 200);

    getch();
    closegraph();

    return 0;
}
