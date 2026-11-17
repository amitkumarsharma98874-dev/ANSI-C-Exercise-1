#include <stdio.h>
#include <math.h>
#define pie 3.14

int main()

{
    float x1,y1;
    float x2,y2;
    float Radius;
    float Area;
    float Diameter;
    x1 = 2.000;
    x2 = 5.000;
    y1 = 2.000;
    y2 = 6.000;

    Diameter = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    Radius = Diameter/2;

    Area = pie*Radius*Radius;

    printf("Area of Circle = %0.3f  \n\n",Area);

    return 0;
}