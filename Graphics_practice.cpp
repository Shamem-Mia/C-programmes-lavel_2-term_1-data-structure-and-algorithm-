#include<graphics.h>
#include<conio.h>

int main()
{


    int gd=DETECT, gm;
    initgraph(&gd , &gm ,(char*) "" );
    circle(320 , 324 , 200);
    getch();
    closegraph();
    return 0;
}
