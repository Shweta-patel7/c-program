/**
 * @file structure_packing.c
 * @brief Demonstrates structure packing using #pragma pack(1).
 *
 * This program shows how structure packing removes compiler-inserted
 * padding bytes. It prints the size of the entire structure and the
 * sizes of each individual member.
 */

#pragma pack(1)

#include <stdio.h>

/**
 * @brief Stores employee information.
 *
 * The structure contains an employee's name, salary, gender,
 * and work experience (or work-related value).
 *
 * Since `#pragma pack(1)` is enabled, the compiler aligns all
 * members on 1-byte boundaries, preventing any padding between
 * members.
 */
struct employee
{
    /** Employee name */
    char name[20];

    /** Employee salary */
    int salary;

    /** Employee gender */
    char gender;

    /** Work experience or work-related value */
    int work;
};

/**
 * @brief Entry point of the program.
 *
 * Creates an employee structure and displays:
 * - Total size of the structure
 * - Size of each individual member
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    struct employee a;

    printf("Size of structure : %zu\n", sizeof(a));
    printf("Size of name      : %zu\n", sizeof(a.name));
    printf("Size of salary    : %zu\n", sizeof(a.salary));
    printf("Size of gender    : %zu\n", sizeof(a.gender));
    printf("Size of work      : %zu\n", sizeof(a.work));

    return 0;
}