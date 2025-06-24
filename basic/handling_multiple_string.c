#include <stdio.h>
#include <Windows.h>

void main(){
    char s[3][10];
    int i;
    system("cls");
    printf("Enter three strings");
    for(i=0;i<=2;i++)
        gets(&s[i][0]);
    for(i=0;i<=2;i++)
        printf("%s\n",s[i]);
}