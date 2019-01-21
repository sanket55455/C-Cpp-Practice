#include<stdio.h>
#include <stdlib.h>

void main()
{
    float km,meter,feet,inches,centimeters;
 

    printf("Enter the distance (km) \n");
    scanf("%f",&km);

    meter=(km*1000);
    
    feet=(km*3280.84);
    
    inches=(km*39370.1);
    
    centimeters=(km*100000);

    printf("meter  : %f\n",meter);
    
    printf("feet  : %f\n",feet);
    
    printf("inches  : %f\n",inches);
    
    printf("centimeters  : %f\n",centimeters);
}