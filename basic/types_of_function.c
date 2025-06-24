#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void add(void);
void subtract(int,int);
int multiply(void);
int division(int,int);
void main(){-
    system("cls");
    int x,y,z,w;
    printf("Enter your choice \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n");
    scanf("%d",&z);    
    if(z==1)
        {system("cls");
        add(); //Calling takes Nothing Returns Nothing function here
        }
    else if (z==2)
    {
        /* code */
        system("cls");
        printf("enter two Numbers");
        scanf("%d %d",&x,&y);
        subtract(x,y);  //Calling Takes Something Returns Nothing function here(Call by Value) and x,y are Actual Arguments
    }
    else if (z==3)
    {
        int s;
        system("cls");
        s=multiply(); //Calling Takes Nothing Return Something function here
        printf("Multiplication is %d",s);
    }
    else if (z==4)
    {   
        system("cls");
        int s,x,y;
        printf("enter two Numbers");
        scanf("%d %d",&x,&y);
        s=division(x,y); //Calling Takes Something Return Something function here 
        printf("Division is %d",s);
    }
    
    
}
// Takes Nothing Returns Nothing
void add()
{
 int a,b,c;
 printf("enter two numbers");
 scanf("%d %d",&a,&b);
 c=a+b;
 printf("Sum is %d",c);
}
//Takes Something Returns Nothing
void subtract(int a,int b) //a,b are Formal Arguments
{
 int c;
 if (a>b)
 {
    /* code */
    c=a-b;
    printf("difference is %d",c);
 }
 else
 {
    c=b-a;
    printf("difference is %d",c);
 } 
}

// Takes Nothing,Returns Something
int multiply()
{
 int a,b,c;
 printf("enter two numbers");
 scanf("%d %d",&a,&b);
 c=a*b;
 return(c);
}
// Takes something,Returns Something

int division(int a,int b){
 int c;
 if (a>b)
 {
    /* code */
    c=a/b;
    return(c);
 }
 else
 {
    c=b/a;
    return(c);
 }
 
}