#include <stdio.h>

int main()
{
    char string[30], name[40];
    printf("enter string: ");
    scanf("%s", string);
    printf("Print by printf and scanf : %s\n", string);
    
    printf("enter name : ");
    gets(name);
    printf("print by get and printf %s", name);

    return 0;
}