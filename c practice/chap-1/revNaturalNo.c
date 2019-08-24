// Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include<stdio.h>
int main(){
        int n,i;
    printf("enter the no:");
    scanf("%d",&n);

    i=n;

    while(i>0){
    printf("\n%d\n",i);
    i--;
}


    }