#include <stdio.h>
#include <stdlib.h>

int *set_i()
{
    int *i = malloc(sizeof(int));
    *i = 5;
    return i;
}

int some_other_function()
{
    int junk = 999;
    return junk;
}

int main()
{
    int *pt = set_i();
    some_other_function();
    printf("This time the address i refers to represent %d\n", *pt);
}
