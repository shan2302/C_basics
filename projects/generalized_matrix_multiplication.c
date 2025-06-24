#include <stdio.h>
#include <windows.h>

int main()
{
    system("cls");
    int N,M,P,Q;
    int i,j,k,sum;
    printf("Enter the size of Matrix A : ");
    scanf("%d %d",&M, &N);
    printf("Enter the size of Matrix B : ");
    scanf("%d %d ",&P, &Q);
    if(N!=P)
    {
        printf("Matrix Multiplication is not possible");
    }
    else
    {
       int A[M][N],B[P][Q],C[M][Q];
       printf("Enter the numbers of Matrix A:");
       for(i=0;i<=M-1;i++)
       {
        for(j=0;j<=N-1;j++)
        {
            scanf("%d ",&A[i][j]);
        }
       }
       printf("Enter the numbers of Matrix B:");
       for(i=0;i<=P-1;i++)
       {
        for(j=0;j<=Q-1;j++)
        {
            scanf("%d ",&B[i][j]);
        }
       }
       for(i=0;i<=M-1;i++)
       {
        for(j=0;j<=Q-1;j++){
            sum=0;
            for(k=0;k<=N-1;k++)
            {
                sum = sum +A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
       }
       printf("Matrix A is \n");
       for(i=0;i<=M-1;i++)
        {
        for(j=0;j<=N-1;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }  
        printf("Matrix B is \n");
        for(i=0;i<=P-1;i++)
        {
        for(j=0;j<=Q-1;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
       printf("Resultant Matrix is :");
       for(i=0;i<=M-1;i++)
        {
        for(j=0;j<=Q-1;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    }
}