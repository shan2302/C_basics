#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(){
    system("cls");
    int a,b;
    printf("Enter two Numbers");
    scanf("%d %d",&a,&b);
    printf("Greater number is %d",a>b?a:b);
}