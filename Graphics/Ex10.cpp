#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void flood(int, int, int, int);

int main() // Jayant Patidar 0901IT201028

{
    int gd, gm = DETECT;

    detectgraph(&gd, &gm);

    initgraph(&gd, &gm, (char *)"");

    rectangle(50, 50, 100, 100);

    flood(55, 55, 15, 0);

    getch();
    return 0;
}

void flood(int x, int y, int fill_col, int old_col)

{

    if (getpixel(x, y) == old_col)

    {

        delay(3);

        putpixel(x, y, fill_col);

        flood(x + 1, y, fill_col, old_col);

        flood(x - 1, y, fill_col, old_col);

        flood(x, y + 1, fill_col, old_col);

        flood(x, y - 1, fill_col, old_col);
    }
}