/* Output what the user input from the keyboard to the file */
#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char w[20], name[30], *filename = name;
    printf("Please input the file name:\n");
    gets(name);
    fp = fopen(filename, "w");
    if (fp == NULL)
        printf("FILE open error!\n");
    else
    {
        while(strlen(gets(w))>0)
        {
            fputs(w, fp);
            fputs("\n", fp);
        }
        fclose(fp);
    }
}
