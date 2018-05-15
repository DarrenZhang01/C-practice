#include <stdio.h>

int main ()
{
    FILE * fp;
    fp = fopen("mydata.txt", "r");
    if (fp == NULL)
        printf("error!\n");
    else
    {
        printf("File successfully opened!\n");
        fclose(fp);
    }
    return 1;
}
