//print the number of digits. 122344

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,sum,count;

    printf("enter the digits \n");
    scanf("%d",&num);

    for(count=0 ;count<=num; count++ )
    {
        sum=num%10;
        num=num/10;
    }
     
          printf("total digits : %d\n",count);

       return 0;
}