#include<stdio.h>
#include<stdlib.h>



int main()
{
    float basics,hra,da,gross_salary;
    
    printf("Enter the salary\n");
    scanf("%f",&basics);
    
    if(basics<1500)
    {
        hra=(basics*10.0)/100;
        da=(basics*90.0)/100;
    }
   
    else(basics >= 1500);
    {         
        hra=500;
        da=(basics*98.0)/100;
    }
   
    gross_salary=basics+hra+da;
    printf("Gross salary=Rs.%f\n",gross_salary);
    return 0;
}