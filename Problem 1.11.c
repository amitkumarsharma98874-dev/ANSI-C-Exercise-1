#include <stdio.h>
#include <math.h>

int main()

{
    float x1,y1;
    float x2,y2;
    x1 = 2.000;
    x2 = 3.000;
    y1=5.000;
    y2=7.000;

    float Distance;

    Distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("Distance between two point's = %0.3f    ",Distance );

    return 0;
}