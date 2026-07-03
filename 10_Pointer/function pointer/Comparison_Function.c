#include <stdio.h>

// Comparison function for ascending order
int ascending(int a, int b)
{
    return a > b;
}

// Comparison function for descending order
int descending(int a, int b)
{
    return a < b;
}

// Bubble sort using function pointer
void sort(int arr[], int n, int (*compare)(int, int))
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10], n, i, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Ascending Order");
    printf("\n2. Descending Order");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        sort(arr, n, ascending);
    }
    else if (choice == 2)
    {
        sort(arr, n, descending);
    }
    else
    {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}