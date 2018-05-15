#include <stdio.h>

int main ()
{
    FILE * fp;
    char name[30];
    printf("Please input the file name that you want to open: \n");
    gets(name);
    if ((fp = fopen(name, "r"))!= NULL)
    {
        printf("File has been successfully opened!\n");
        fclose(name);
    }
    else
        printf("error!\n");

    return 1;
}

