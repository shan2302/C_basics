#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int fun(){
    return(5>4?5:4);
    // 5>4?return(5):return(4);   Not allowed
}
int main(){
    system("cls");
    int x;
    x = fun();
    printf("%d",x);
}