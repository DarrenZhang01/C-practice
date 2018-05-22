#include <stdio.h>
#include <stdlib.h>

void helper(int ** arr_matey)
{
    /** Let's make an array of 3 integers on the heap. */
    *arr_matey = malloc(sizeof(int) * 3);
    int * arr = * arr_matey;
    arr[0] = 18;
    arr[1] = 21;
    arr[2] = 23;
}

int main ()
{
    int *data;
    helper(&data);

    /* Let's just access one of them for demonstration. */
    printf("The middle value: %d\n", data[1]);

    free(data);
    return 0;
}
