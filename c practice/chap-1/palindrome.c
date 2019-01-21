#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,pal,c=0,rev;

    printf("enter any no :\n");
    scanf("%d",&num);

    pal = num;
   
     while(num>0)
     {
         rev=num%10;
         num=num/10;
         c=(c*10)+rev;

     }
     printf("%d\n",c);

     if(c==pal)
     {
         printf("the no is palindrome\n");
     }
     else
     {
         printf("The no is not palindrome\n");
     }

     return 0;
}