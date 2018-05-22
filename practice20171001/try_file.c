#include <stdio.h>

int main ()
{
    FILE *op;
    op = fopen("test.txt", "r");
    if (op == NULL)
    {
        printf("There is error when opening the file!");
        return 0;
    }
    char *start = "Well ,I don't really want to initialize here!";
    fgets(start, 256 * 256, op);
    printf("%s\n", start);
    return 0;
}
