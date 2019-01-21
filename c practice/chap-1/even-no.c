// Printing all 1 to 100 evev numbers using while loop.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0;

    while(i<=100)
    {
        printf("even no : %d\n",i);

        i=i+2;
    }
    return 0;
}