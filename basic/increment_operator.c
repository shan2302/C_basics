#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(){
    int x=3;
    system("cls");
    x++;   //x=x+1 Post Increment
    printf("%d",x);
    ++x;  //x=x+1 Pre Increment
    printf("%d",x);
}