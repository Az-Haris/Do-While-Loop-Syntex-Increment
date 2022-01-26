#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    a=1;
    do
    {
        printf("%d Az Haris \n",a);
        a++;
    }
    while(a<=100);


    return 0;
}


/*  Syntex ::

    Initialization
    do
    {
        statement 1;
        statement 2;
        ............
        ............
        statement n;

        increment / decrement;
    }
    while(condition); [';' must be used here]
*/
