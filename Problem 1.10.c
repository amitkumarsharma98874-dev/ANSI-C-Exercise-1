#include <stdio.h>
#include <math.h>

int main()

{
    float a,b,c;
    float S;
    float Area;

    a=2.00;
    b=3.00;
    c=4.00;

    S = (a+b+c)/2;
    Area = sqrt(S*(S-a)*(S-b)*(S-c)); 

    printf("Area of Triangle = %0.2f  ",Area);

    return 0;
}