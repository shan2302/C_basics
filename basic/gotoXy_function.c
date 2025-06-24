#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    }
int main(){
    system("cls");
    int i;
    for (i = 1; i <=10; i++)
    {
        /* code */
        gotoxy(10,i);
        printf("Hello");
    }
    
    
}
