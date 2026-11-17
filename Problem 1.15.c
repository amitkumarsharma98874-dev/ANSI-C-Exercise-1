#include <stdio.h>
#include <math.h>

int main()

{
    float x,y,Sum,Difference,Product,Division;

    x = 10;
    y= 5;

    Sum = x+y;

    if (x>y)
    {
        Difference = x-y;
    }

    else
    {
        Difference = y-x;
    }

    Product = x*y;

    Division = x/y;

    printf("    +---------+         +---------+\n");
    printf("x = |  %0.2f  |     y = |  %0.2f  |\n",x,y);
    printf("    +---------+         +---------+\n\n");

    printf("      +---------+                  +---------+\n");
    printf("Sum = |  %0.2f  |     Difference = |  %0.2f  |\n",Sum,Difference);
    printf("      +---------+                  +---------+\n\n");

    printf("          +---------+                +---------+\n");
    printf("Product = |  %0.2f  |     Division = |  %0.2f  |\n",Product,Division);
    printf("          +---------+                +---------+   \n\n");


    return 0;
}