#include<stdio.h>
#include<stdlib.h>


int main()
{
    float area,length,breadth,perimeter;
    
    printf("Enter the length and breadth of rectangle\n");
    scanf("%f%f",&length,&breadth);
    area=length * breadth;
    
    perimeter=2*(length+breadth);
    printf("Area of rectangle is %f\n",area);
    printf("Perimeter of rectangle is %f\n",perimeter);

    if(area>perimeter)
    {
        printf("Area of rectangle is greater\n");
    }
    else
    {
        printf("Perimeter of rectangle is greater\n");

    }
  return 0;
} 