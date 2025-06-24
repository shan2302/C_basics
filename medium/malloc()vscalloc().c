#include <stdio.h>

void main()
{
    // malloc
int *arr1 = (int*) malloc(5 * sizeof(int));

// calloc
int *arr2 = (int*) calloc(5, sizeof(int));


printf("%d \n",&arr1);
printf("%d",&arr2);

}