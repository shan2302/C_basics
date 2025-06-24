#include <stdio.h>
#include <Windows.h>

void main(){
    char s[10]={'S','H','A','N','T','A','N','U','\0'};
    char d[10]='SHANTANU'
    int i;
    system("cls");
    // for(i=0;s[i]!='\0';i++){
    //     printf("%c",s[i]);
    // }
    printf("%s",s);
    // printf("%s",%s[0]); it will also give right answer 
}

void namefromuser(){
    char name[20];
    int i;
    system("cls");
    printf("Enter your name");
    scanf("%s",s);
}