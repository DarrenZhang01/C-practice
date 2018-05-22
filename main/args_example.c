#include <stdio.h>
/**
 * Try running this file in the following way:
 *     ./args_example fee fi fo fum
 *
 */
int main(int argc, char**argv)
{
    /* argc is the number of arguments that were provided. */
    printf("%d\n", argc);

    /* Note the relationship of argv[0] to the executable */
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] has the value %s\n", i, argv[i]);
    }
    return 0;
}
