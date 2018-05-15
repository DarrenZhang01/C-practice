/* Another version of open*/
#include <stdio.h>
int main()
{
    FILE *fp;
    if((fp = fopen("my_data.txt", "w")) == NULL)
    {
        printf("Error happens!\n");
        return 1;
    }
    else
    {
        printf("file successfully opened!");
        return 1;
    }
}
