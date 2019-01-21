#include<stdio.h>
int main()
{     float h,c,t;

    printf("Enter the Hardness,Carbon content and tensile strenght\n");
    scanf("%f%f%f",&h,&c,&t);

    if(h>50 && c<0.7 && t>5600)
    {
        printf("Grade of Steel is : 10\n");
    }
    else if (h>50 && c<0.7)
    {
        printf("Grade of Steel is : 9\n");
    }

    else if (c<0.7 && t>5600)
    {
        printf("Grade of Steel is : 8\n");
    }

    else if (h>50 && t>5600)
    {
        printf("Grade of Steel is : 7\n");
    }

      else if (h>50 || c<0.7 || t>5600)
    {
        printf("Grade of Steel is : 6\n");
    }

  else
    {
        printf("None\n");
    }
    return 0;
}
