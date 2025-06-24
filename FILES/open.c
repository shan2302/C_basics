#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Shantanu.txt", "w");
    // if (fptr == NULL) {
    //     printf("Error: Unable to create the file.\n");
    //     return 1;
    // }
    // printf("File created successfully.\n");
    fclose(fptr);
    return 0;
}
