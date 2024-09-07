#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(){
    int choice,a,b,s;

    system("cls");
    printf("\n1. Addition");
    printf("\n2. Odd Even");
    printf("\n3. Printimg N numbers");

    printf(" \n Enter the choice \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter two numbers");
            scanf("%d %d",&a,&b);
            s=a+b;
            printf("\n Sum is  %d",s);
            break;
        case 2:
            printf("Enter a Number");
            scanf("%d",&a);
            if(a&2==0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;
        case 3:
            printf("Enter a Number");
            scanf("%d",&a);
            for(b=1;b<=a;b++){
                printf(" %d",b);
            }
            break;
        default:
            printf("invalid Choice");
    }
}