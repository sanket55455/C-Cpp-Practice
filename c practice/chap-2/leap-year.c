#include<stdio.h>
#include<stdlib.h>
int main()
{
    int yr;
    printf("Enter the year\n");
    scanf("%d",&yr);

//    if(yr/4==0)
   if(yr%4==0)


{
    printf("leap year.\n");
}
else
{
    printf("it is not leap year\n");
}
return 0;
}