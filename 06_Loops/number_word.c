#include <stdio.h>
int main() {
    int num;

    printf("Enter a number (0-999): ");
    scanf("%d", &num);

void numberToWords(int n) {
    char *ones[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    char *teens[] = {
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
        "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };

    char *tens[] = {
        "", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    if (n == 0) {
        printf("Zero\n");
        return;
    }

    if (n >= 100) {
        printf("%s Hundred ", ones[n / 100]);
        n %= 100;
    }

    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        n %= 10;
    } else if (n >= 10) {
        printf("%s", teens[n - 10]);
        return;
    }

    if (n > 0) {
        printf("%s", ones[n]);
    }
}

    if (num < 0 || num > 999) {
        printf("Number out of range!\n");
        return 1;
    }

    numberToWords(num);
    printf("\n");

    return 0;
}