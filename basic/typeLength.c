/** Justify the length of different primitive types **/

#include <stdio.h>
int main () 
{
    char a;
    short int b;
    int c;
    long int d;
    float e;
    double f;
    printf("size of (char)=%lu\n", sizeof(a));
    printf("size of (short int)=%lu\n", sizeof(b));
    printf("size of (int)=%lu\n", sizeof(c));
    printf("size of (long int)=%lu\n", sizeof(d));
    printf("size of (float)=%lu\n", sizeof(e));
    printf("size of (double)=%lu\n", sizeof(f));
    return 0;
}
