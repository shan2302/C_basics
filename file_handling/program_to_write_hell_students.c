#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp = fopen("f1.txt","w");
    char s[100];
    if(fp==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    printf("Enter a string : ");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
    fclose(fp);
}