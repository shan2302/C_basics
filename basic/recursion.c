#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int fun(int);
int main(){
    int k;
    k = fun(3);
    printf("%d",k);

}
int fun(int a)
{
    int s;
    if(a==1)
        return(a);
    s=a+fun(a-1);
    return(s);
}