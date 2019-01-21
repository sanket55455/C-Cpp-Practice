#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,last,first;

      printf("enter the no : \n");
      scanf("%d",&num);


        last = num % 10;
       
       printf("last digit : %d\n",last);
    // first=num;
     first=num;
      while(first >= 10)
      {
          first=first /10;
      }
      printf("first digit is %d \n",first);
     

          

       return 0;
}




/*  while(num !=0)

    first=num % 10;
    num = num / 10;




     first=num;
      while(first >= 10)
      {
          first=first /10;
      }

    */