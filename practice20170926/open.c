#include <stdio.h>

int main()
{
    FILE * op;
    char name[30], *filename = name;
    printf("Please input the file name that you want to open: \n");
    gets(filename);
    if ((op = fopen(filename, "r")) == NULL)
    {
        printf("error happens!\n");
    }
    else
    {
        printf("File successfully opens!\n");
        fclose(op);
    }
    return 0;
}
