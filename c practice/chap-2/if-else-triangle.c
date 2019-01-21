#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,total;
    printf("Enter angles\n");
    scanf("%f%f%f",&a,&b,&c);
    total=a+b+c;

    if(total==180)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
   return 0;
} 