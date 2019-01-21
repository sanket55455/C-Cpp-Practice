#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
{
    printf("A is greatest\n");
}

else if(b>a && b>c)
{
    printf("B is greatest\n");
}    

else if(c>a && c>b)
{
    printf("C is greatest\n");
}
return 0;
}