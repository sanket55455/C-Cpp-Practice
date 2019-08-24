//print table of any number.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num,sum,r; 

    printf("enter any no : \n");
    scanf("%d",&num);

    for(i=1; i<=10; i++)
    {     
        r=num*i;
    
        printf("%d * %d = %d\n",num,i,r);   //(num*i)   %d * %d
    }
    return 0;
}