#include<stdio.h>
typedef struct 
{
    char (*name) (char *);
    void (*plugin) (void);
}pluging_t;
char name_plug (char *s)
{
    printf("%s\n", s);
}
void pluging_plug (void)
{
    printf("pluging\n");
}
int main()
{
    int i;
    char s[20];
    pluging_t p[3];
    for (i = 0; i < 3; i++)
    {
        p[i].name = name_plug;
        p[i].plugin = pluging_plug;
    }

    for (i = 0; i < 3; i++)
    {
        printf("enter name %d :", i + 1);
        scanf("%s", s);
        p[i].name(s);
        p[i].plugin();
    }
    
    
}
