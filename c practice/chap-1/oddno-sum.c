//print sum of odd numbers.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num,sum=0;

    printf("enter expected no :\n");
    scanf("%d",&num);

    for(i=1; i<=num; i=i+2)
    {
        sum=sum+i;
    }
    printf("sum of odd no is : %d\n",sum);
    return 0;
}