#include <stdio.h>
int main()
{
    int N,i;
    printf("Enter how many numbers you want to sort: ");
    scanf("%d",&N);
    int A[N];
    printf("Enter the numbers: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    int round,temp;
    for(round=1;round<=N-1;round++)
        for(i=0;i<=(N-1-round);i++)
            if(A[i]>A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
    printf("\n The sorted array is :");
    for(i=0;i<=N-1;i++)
    {
        printf("%d ",A[i]);
    }
}