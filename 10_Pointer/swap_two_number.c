#include <stdio.h>
void swap (int *a, int *b)
{
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int x = 67, y = 45;
    printf("befor swaping = %d %d\n", x, y);
    swap(&x, &y);
    printf("after swaping = %d %d\n", x, y);
    return 0;
}