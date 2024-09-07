#include <stdio.h>
#include <stdlib.h>
// int main(){
//     int a=4,b=5;
//     printf("%d \n",a); 
//     printf("%d \n",b);
//     printf("Value of A is %d and B is %d",a,b);
// }

/*
Format Specifier
%d int
%f float
%c char
%lf double
*/


int main(){
    int x;
    system("cls");
    printf("Enter a Number \t");
    scanf("%d",&x);
    printf("Value of X is %d \n",x);
    printf("square of %d is %d",x,x*x);
}
