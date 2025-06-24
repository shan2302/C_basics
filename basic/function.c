#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void add(void);
void isEven(void); //Function declared here
int main(){
    system("cls"); /* pre-defined functions */
    add();        //Function Call
    isEven();   /* user-definded functions*/
}
void add(void){         /*function */
int a,b,c;
printf("\nEnter two numbers \n");
scanf("%d %d",&a,&b);
c=a+b;
printf("Sum is %d",c);
}

void isEven(void){  //function defined here
int a;
printf("\nEnter a number\n");
scanf("%d",&a);
if(a%2==0)
    printf("Even");
else
    printf("Odd");
}