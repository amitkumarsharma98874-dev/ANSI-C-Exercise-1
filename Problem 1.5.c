#include <stdio.h>
#include <math.h>
#define a  3.14

int main()

{
    int radius;
    float area;

    printf("Enter the Radius of Circle:  ");
    scanf("%d",&radius);
    area = a * radius * radius ;
    printf("Area of Circle: %f" ,area);

    return 0;
}