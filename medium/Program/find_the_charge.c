#include <stdio.h>
#include <Windows.h>

int main()
{
    system("cls");
    int units;
    char name[10];
    float amt,addcharge;
    printf("Enter name if users: ");
    scanf("%s",&name);
    printf("Enter units consumed\n");
    scanf("%d",&units);
    if (units<0)
    {
        /* code */
        printf("No. of units cannot be negative ! ");
        printf("Enter new value : ");
        scanf("%d",&units);
    }
    if (units<=200)
    {
        /* code */
        amt+= units*0.8;

    }
    else if(units<=300)
        amt+=(units-200)*0.9+160;
    else if(units>300 )
        amt+=(units-300)*1+250;
    if(units>400)
        amt*=1.15;
    printf("\n %s has consumed %d units and is charged a total of Rs %.2f",name,units,amt);
    return 0;
}