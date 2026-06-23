#include <stdio.h>
int gcd (int a, int b)
{
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
}
int main()
{
    int x, y, lcm;
    printf("Enter two number of GCD & LCM");
    scanf("%d %d", &x, &y);
    printf("GCD = %d\n", gcd(x, y));
    lcm = x * y /gcd(x,y);
    printf("LCM = %d\n", lcm);

}