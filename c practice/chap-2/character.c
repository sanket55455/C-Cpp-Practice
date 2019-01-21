#include<stdio.h>
#include<stdlib.h>
int main()
{
   char c;
   printf("Enter character\n");
   scanf("%c",&c);

  if(c>='A' && c<='Z')
   {
       printf("It is in Upper case\n");
   }

     else if(c>='a' && c <='z')
    {
        printf("It is in Lower case\n");
    }

    else if(c>'0' && c<'9')
    {
        printf("It is in digit\n");
    }

    else 
    {
        printf("It is in special symbol\n");
    }
    return 0;
}