#include<stdio.h>
#include <stdlib.h>

void main()
{
    float a=0 ,b; 
    float science,account,history,math,marathi;
  
   printf("enter the marks\n");
   scanf("%f%f%f%f%f",&science , &account, &history, &math, &marathi);
      
       a=science+account+history+math+marathi;
       
       printf("aggregate of all subject is :%f\n",a);
    
       b=a/5;
    
       printf("percentages : %f\n",b);
  
}