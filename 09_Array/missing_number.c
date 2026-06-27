#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0, total, missing;
    printf("enter number of element is : ");
    scanf("%d", &n);
    int a[n - 1];
    printf("enter %d element :", n - 1);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("missing value is : %d\n", missing);

    return 0;
}