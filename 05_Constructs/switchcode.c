#include <stdio.h>

int main()
{
    int x = 50;

    switch (x)
    {
        case 5 * 5:
            printf("yes case1");
            break;

        case 25 + 25:
            printf("yes case2");
            break;

        default:
            printf("not in case");
            break;
    }

    return 0;
}