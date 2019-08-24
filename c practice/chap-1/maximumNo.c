#include <stdio.h>

int main(){

    int num1,num2,num3;

    printf("enter three no.\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        printf("%d is Greatest number \n",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is Greatest number \n",num2);
    }
    else{
         printf("%d is Greatest number \n",num3);
    }

}