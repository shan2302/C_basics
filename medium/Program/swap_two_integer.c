#include <stdio.h>
#include <Windows.h>
void swap(int*,int*);
void main(){
    int a,b;
    system("cls");
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}