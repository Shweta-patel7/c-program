#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], freq[n];
    printf("Enter %d elements:\n", n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;   // mark all frequencies as uncounted
    }

    // Calculate frequency
    for(i = 0; i < n; i++)
    {
        if(freq[i] == 0)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;   // mark duplicate as visited
            }
        }

        freq[i] = count;
    }

    // Print frequency
    printf("Element Frequency\n");
    for(i = 0; i < n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d\t%d\n", a[i], freq[i]);
        }
    }

    return 0;
}