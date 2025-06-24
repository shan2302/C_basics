#include <stdio.h>

int main() {
    FILE *fptr;
    char word[100];

    fptr = fopen("Shantanu.txt", "r");

    if (fptr == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    // Read words until End Of File
    while (fscanf(fptr, "%s", word) != EOF) {
        printf("Word: %s\n", word);
    }

    fclose(fptr);
    return 0;
}
