#include <stdio.h>

int main ()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("There is some problem opening the file!\n");
        return 0;
    }
    char s[40];
    while ((fgets(s, 40, fp)) != NULL)
    {
        printf("%s\n", s);
    }
    fclose(fp);
    return 0;
}
