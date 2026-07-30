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

    ptr = (student_t *)malloc(sizeof(*ptr));
    if (ptr == NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    strcpy (ptr->name, "jdhcdb");
    ptr->marks = 99.3;
    ptr->roll = 65;

    printf("name = %s\n", ptr->name);
    printf("roll number :  %d\n", ptr->roll);
    printf("marks : %.2f\n", ptr->marks);

    free(ptr);
    ptr = NULL;
    return 0;
}