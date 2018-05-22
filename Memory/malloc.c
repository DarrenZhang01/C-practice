#include <stdio.h>
int *set_i()
{
    int i = 5;
    return &i;
}

int some_other_function()
{
    int junk = 999;
    return junk;
}

int main ()
{
    int *pt = set_i();
    some_other_function();
    printf("Guess what will be printed this time? %d\n", *pt);
    return 1;
}
