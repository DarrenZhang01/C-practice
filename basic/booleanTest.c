#include <stdio.h>

int main ()
{
    double pi = 3.14;
    double e = 2.718;
    printf("pi == e);
    printf(pi >= e);
    printf(pi < 4 && e < 4);
    printf(pi > 4 && e != 3);
    printf((pi + e) == (e + pi));
    printf((e - pi) < 0);
    return 0;
}
