#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(){
    system("cls");
    int a,b,c;
    printf("Enter three Numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        /* code */
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
        
    }
    else{
        if (b>c)
        {
        /* code */
        printf("%d",b);
        }
        else
        {
        /* code */
        printf("%d",c);
        }
    }
    
    
}