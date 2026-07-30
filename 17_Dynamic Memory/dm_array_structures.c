#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    char name[20];
    int roll;
    float marks;
} student_t;

int main()
{
    student_t *ptr;
    char temp[20];
    int n, i;
    printf("enter number of student :");
    scanf("%d", &n);

    ptr = (student_t *)malloc(n * sizeof(*ptr));
    if (ptr == NULL)
    {
        printf("memory not allocated");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("info for student %d ", i + 1);
        printf("enter name : ");
        scanf("%19s", temp);
        strcpy(ptr[i].name, temp);
        printf("enter roll number : ");
        scanf("%d", &ptr[i].roll);
        printf("enter marks : ");
        scanf("%f", &ptr[i].marks);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("name = %s\n", ptr[i].name);
        printf("roll number : %d\n", ptr[i].roll);
        printf("marks : %.2f\n", ptr[i].marks);
    }
    
    free(ptr);


}