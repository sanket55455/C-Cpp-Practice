//print sum of even numbers.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num,sum=0;

    printf("enter the expected no.\n");
    scanf("%d",&num);

    for(i=0; i<=num; i=i+2)
    {
        sum= sum+i;
    }
    printf("total of even no :%d\n",sum);

    return 0;
}