#include<stdio.h>
int main()
{
    int qty,dis=0;
    float rate,tot;

    printf("Enter the quantity and rate\n");
    scanf("%d%f",&qty,&rate);
{
    if(qty>1000)
    dis=10;
    tot=(qty*rate)-(qty*rate*dis/100);
    printf("Total expense=Rs.%f\n",tot);
}
    return 0;

}