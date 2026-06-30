#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    double d;

    int *ip = &i;
    char *cp = &c;
    float *fp = &f;
    double *dp = &d;

    printf("Size of int    = %zu bytes\n", sizeof(*ip));
    printf("Size of char   = %zu bytes\n", sizeof(*cp));
    printf("Size of float  = %zu bytes\n", sizeof(*fp));
    printf("Size of double = %zu bytes\n", sizeof(*dp));

    return 0;
}