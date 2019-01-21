#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,sum,count;
     
        printf("enter the no :\n");
        scanf("%d",&num);
       //3456

       for(count=0; count<=num;count++ )
       {
           sum=num%10;
           num=num/10;

         //printf(" %d\n",count);

        
       }
        printf(" %d\n",count);


       /* for(sum=0; sum<=count; sum++)
         {
             count=sum+count;
         }
             printf("sum is %d\n",sum);*/
 
      //      sum=sum+count;
      // printf("sum of no : %d",sum);



return 0;
}