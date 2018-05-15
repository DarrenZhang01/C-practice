#include <stdio.h>

int main()
{
    FILE * fp;
    char ch, name[30], *filename = name;
    printf("Please input file name: ");
    gets(name);
    fp = fopen(filename, "r");
    if(fp == NULL)
        printf("error!\n");
    else
    {
        while((ch = fgetc(fp))!= EOF)
            putchar(ch);
        fclose(fp);
        printf("open and close successfully!\n");
    }
    return 1;
}
