
#include <stdio.h>
#include <math.h>
main()
{
    double x,s;
    printf("Please input the value of x: ");
    scanf("%lf", &x);
    s = cos(x);
    printf("cos(%lf)=%lf\n", x, s);
}
