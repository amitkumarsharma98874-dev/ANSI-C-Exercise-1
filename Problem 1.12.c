#include <stdio.h>
#include <math.h>
#define pie 3.14

int main()

{
    float x1,y1;
    float x2,y2;
    float Radius;
    float Area;
    float Peramater;
    x1 = 0.000;
    x2 = 4.000;
    y1 = 0.000;
    y2 = 5.000;

    Radius = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    Area = pie*Radius*Radius ;

    Peramater = 2*pie*Radius ;

    printf("Area of Circle = %0.3f    \n",Area);
    printf("Peramater of Circle = %0.3f  \n\n",Peramater);

    return 0;
}