#include <stdio.h>
#include <stdlib.h>
/**
 * Return an array of squares from 1 to max_val.
 */
int *squares(int max_value)
{
    int *result = malloc(sizeof(int) * max_value);
    int i;
    for(i = 1; i <= max_value; i++)
    {
        result[i-1] = i * i;
    }
    return result;
}

int main()
{
    int *square = squares(10);
    /** Then print them out!*/
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", square[i]);
    }
    printf("\n");

    return 0;
}
