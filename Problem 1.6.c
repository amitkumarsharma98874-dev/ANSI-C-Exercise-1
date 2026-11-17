#include <stdio.h>
#include <math.h>
#define num 5

int main()



{
    int a,table;

   for (a=1; a<=10;)

    { table = num*a;

    printf("%d * %d = %d\n",num,a,table);

    a++; }

    return 0;
}