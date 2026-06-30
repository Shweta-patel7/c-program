#include <stdio.h>

void modifyArray(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(p + i) = *(p + i) * 2;   // Double each element
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    modifyArray(arr, size);   // Pass array (base address)

    printf("\nModified array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}