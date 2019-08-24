#include <stdio.h>

int main() {

int num,row,i,space;

printf("Enter the no of rows");
scanf("%d",&num);

for(row = 1; row <= num; row++){
    for(i = 1; i<=row; i++){
        printf("%d",i);
    }
        printf("\n");

}


}

// #include <stdio.h>
 
// int main()
// {
//   int row, c, n, s;
 
//   printf("Enter the number of rows in pyramid of stars you wish to see\n");
//   scanf("%d", &n);
 
//   s = n;
 
//   for (row = 1; row <= n; row++)  // Loop to print rows
//   {
//     for (c = 1; c < s; c++)  // Loop to print spaces in a row
//       printf(" ");
 
//     s--;
 
//     for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
//       printf("*");
 
//     printf("\n");
//   }
 
//   return 0;
// }