/* Read the string of the file by line*/

#include <stdio.h>
int main()
{
    FILE * fp;
    char w[81], name[30], *filename = name;
    int lines = 0;
    printf("please input the file name: ");
    gets(name);
    fp = fopen(filename, "r");
    if (fp == NULL)
        printf("File open error!\n");
    else 
    {
        while (fgets(w, 80, fp)!=NULL)
        {
            lines = lines + 1;
            printf("%s", w);
        }
        printf("The total lines of the file=%d\n", lines);
        fclose(fp);
    }
}
