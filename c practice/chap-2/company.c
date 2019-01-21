
#include<stdio.h>
int main()
{
    int curry,joyy,totaly,bonus;
    printf("Enter the current year and the year of joining\n");
    scanf("%d%d",&curry,&joyy);
    totaly=curry-joyy;
    if(totaly>3)
    {
        bonus=2500;
        printf("bonus=Rs.%d\n",bonus);
    }
    return 0;

}