#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,absolute;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    

    if(b>a)
    {
        absolute=b-a;
        printf("Absolute value is %d\n",absolute);
    }

    else
    {
        absolute=a-b;
        printf("Absolute value is %d\n",absolute);
    }
   
   return 0;
} 