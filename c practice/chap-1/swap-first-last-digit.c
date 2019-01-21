#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,last,first,swap;

      printf("enter the no : \n");
      scanf("%d",&num);


        last = num % 10;
       
       printf("last digit : %d\n",last);
    // first=num;
     while(num !=0)
    {
        first=num%10;
        num = num/10;
    }
      printf("first digit is %d \n",first);


      swap=first;
      first=last;
      last=swap;

      printf("swapping first and last digit : %d %d\n",first,swap);
     

          

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