// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include<stdio.h>
int main(){

    int chem,bio,phy,math,comp;
    int max,max1;

    printf("enter the marks of sub: \n");
    scanf("%d%d%d%d%d",&chem,&bio,&phy,&math,&comp);

    max1=chem+bio+phy+math+comp;

    printf("total marks %d\n",max1);

    max=(max1/5);
    
     printf("percentage %d\n",max);

    if(max >= 90 ){
        printf("Gread A \n");
    }
    else if(max >=80 && max < 90){
        printf("Gread B \n");
    }
     else if(max >=70 && max < 80){
        printf("Gread C \n");
    }
     else if(max >=60 && max < 70){
        printf("Gread D \n");
    }
     else if(max >=40 && max < 60){
        printf("Gread E \n");
    }
     else{
        printf("Gread F");
    }
return 0;
}
