#include <stdio.h>
#include <string.h>

/* Determine whether one string contains the other. */

int main()
{
    char str[20] = "jsdlaadf", substr[10] = "sdf";
    char *p = str, *q = substr;
    int flag = 0;
    for (; *(p + strlen(substr) - 1); p++)
    {
        for (q = substr; *p == *q && q; p++, q++)
        {
            if(!*q)
            {
                flag = 1;
                printf("Successfully found!");
                break;
            }
        }
    }
    return 0;
}
