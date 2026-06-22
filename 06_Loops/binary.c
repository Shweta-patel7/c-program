#include <stdio.h>

int main() 
{
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        // store remainder (0 or 1)
        binary[i] = n % 2;   
        // update number
        n = n / 2;          
        i++;
    }

    printf("Binary: ");
    // reverse number
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}