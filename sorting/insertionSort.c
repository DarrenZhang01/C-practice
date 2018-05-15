#include <stdio.h>

int main ()
{}

void insertion_sort (int arr[], int len)
{
    int i, j;
    int temp;
    for (i=1;i<len;i++)
    {
        temp = arr[i];
        j = i - 1;
        
        for (;j>=0 && arr[j] > temp; j--) 
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}
