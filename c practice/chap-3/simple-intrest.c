#include<stdio.h>
#include<stdlib.h>

int main()
{
    int p,n,count;
    float r,si;

    for(count=1;count<=3;count=count++)//logic.
    {
        printf("Enter values of p,n,r\n");

        scanf("%d%d%f",&p,&n,&r);

        si=p*n*r/100;

        printf("Simple Interest =Rs.%f\n",si);
         break;
    }
   
   return 0; 
}