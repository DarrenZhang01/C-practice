#include <stdio.h>

int main ()
{
    int a[10], *p;
    p = a;
    a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("p before ++: %s\n", p);
    printf("a: %s\n", a);
    p++;
    printf("p after ++: %s\n", p);
    //a++;
    return 1;
}

