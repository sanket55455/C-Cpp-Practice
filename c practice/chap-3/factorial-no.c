#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i,fact=1;
    printf("Enter the number\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("The factorial is:%d\n",fact);

return 0;
}