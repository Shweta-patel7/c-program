#ifndef STUDENT_STRUCH_H
#define STUDENT_STRUCH_H

#define MAX 100

typedef struct 
{
    char name[20];
    int roll;
    int std;
} student_t;

student_t info[MAX];

typedef struct 
{
    int(*find_p)(student_t *p, int n);
    void(*edit_p)(student_t *p, int n);
    void(*delete_p)(student_t *p, int *n);
} op_t;


enum abc {FIND = 1, 
          EDIT = 2, 
          DELETE = 3, 
          EXIT = 0};

enum ser {NAME = 1, 
          ROLL = 2, 
          STD = 3};

#endif