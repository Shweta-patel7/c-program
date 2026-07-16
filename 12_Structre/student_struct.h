#ifndef STUDENT_STRUCH_H
#define STUDENT_STRUCH_H

#define MAX 100


typedef struct 
{
    char name[20];
    int roll;
    int class;
    char section;
} student_t;

student_t s[MAX];

typedef enum 
{
    NAME = 0,
    ROLL = 1,
    CLASS = 2,
    SECTION = 3,
    EXIT = 4
}change;

typedef enum
{
    FIND = 0,
    EDIT = 1, 
    DELETE = 2,
}update;

#endif