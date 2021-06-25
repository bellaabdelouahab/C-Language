#include<graphics.h>
#include<conio.h>
main()
{
    int gd = DETECT,gm;
    intgraph(&gd, &gm, "c:\\TC\\BGI");

    setbcolor (GREEN);
    getch();
    closegraph();
    return 0;
}
