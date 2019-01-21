//print sum of 1 to 10 natural numbers.

#include<stdio.h>
#include<stdlib.h>

int main()
{  
     int num,sum;

    for(num=0; num<=10; num++)
    {
      sum += num;  
    } 
      printf("sum of natural no is :%d\n",sum);

      return 0;
}