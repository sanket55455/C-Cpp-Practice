#include <stdio.h>

int main() {

int num,row,i,space;

printf("Enter the no of rows");
scanf("%d",&num);

space=num;

for(row=1; row<=num; row++){
    for(i=1; i<space; i++){
printf(" ");
space--;
    }
for(i=1;i<=2*row-1;i++){
    printf("%d",i);

}
printf("\n");
}

}

// #include <stdio.h>
// int main()
// {
//     int i, space, rows, k=0;
//     printf("Enter number of rows: ");
//     scanf("%d",&rows);
//     for(i=1; i<=rows; ++i, k=0)
//     {
//         for(space=1; space<=rows-i; ++space)
//         {
//             printf("  ");
//         }
//         while(k != 2*i-1)
//         {
//             printf("* ");
//             ++k;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }