#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,reverse,digit=0;

      printf("enter the no : \n");
      scanf("%d",&num);

      while(num>0)
      {
          reverse=num%10;
         
          num=num/10;
         
          digit=(digit*10)+reverse;
      }
      printf("reverse no: %d\n",digit);



      return 0;
}