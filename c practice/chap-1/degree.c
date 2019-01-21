#include<stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
    float fahrenheit,celcius;
 

    printf("Enter the temperature in fahrenheit:\n");
    scanf("%f",&fahrenheit);

   celcius=(fahrenheit-32)*5/9 ;
   printf("Temperature in celcius is :%f\n",celcius);

}