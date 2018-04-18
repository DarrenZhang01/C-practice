#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = " 17  25 ";
    char *test;
    int con = strtol(s, &test, 10);
    int con1 = strtol(test, &test, 10);
    printf("The value of con and con1: %d, %d\n", con, con1);
}
