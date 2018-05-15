
#include <stdio.h>

int add(int x, int y); /* declaration of adder */
main ()
{
    int a,b,c;
    printf("Please input value of a and b:\n");
    scanf("%d %d", &a, &b);
    c = add(a, b);
    printf("result=%d\n",c);
}
int add(int x, int y) /* definition of adder */
{
    return (x+y);
}
