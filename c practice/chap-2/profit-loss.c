#include<stdio.h>
#include<stdlib.h>


int main()
{
    int cp,sp,amount;
    printf("Eneter cost price and selling price\n");
    scanf("%d%d",&cp,&sp);

    if(sp>cp)
    {
        amount=sp-cp;
        printf("Profit = %d\n", amount);
    }
    else
    {
        amount=cp-sp;
        printf("loss = %d\n", amount);
    }
    return 0;
} 