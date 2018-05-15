/* the open of a file */
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("my_data.txt", "w");
    if (fp == NULL)
        printf("file open error!\n");
    else
        printf("Successfully open!\n");
    return 0;
}
