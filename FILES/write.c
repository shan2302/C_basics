#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("Shantanu.txt","w");
    fprintf(fptr,"My Name is Shantanu Singh");
    fclose(fptr);
    return 0;
}