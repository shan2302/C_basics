#include <stdio.h>
#include <Windows.h>

void main(){
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    // p+q; p/q; p*q; this is not allowed 
    //p*5; q*5; p/5; this is not allowed
    // p+1=1002 this is allowed
    // pointer+n = pointer + sizeof(type of pointer)*n
    // q-p 1020-1000=10 blocks 
    // Pointer1-Pointer2 = Literal Subtraction/sizeof(type of pointer)
    
}