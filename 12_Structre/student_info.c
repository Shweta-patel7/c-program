#include<stdio.h>
#include<string.h>
#include"stu_info.h"
int find(student_t *p, int n)
{
    char temp[20];
    int i, count = 0;
    printf("enter name to find:");
    scanf(" %19[^\n]", temp);
    for (i = 0; i < n; i++)
    {
        if(strcmp(temp, p[i].name) == 0)
        {
            count++;
        }
        
    }
    if (count == 0)
    {
        printf("name not found\n");
    }
    
    else if (count == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (strcmp(temp, p[i].name) == 0)
            {
                printf("name %d :%s\n", i + 1, p[i].name);
                printf("roll number : %d\n", p[i].roll);
                printf("std : %d\n", p[i].std);
                return i;
            }
            
        }
        
    }
    
    else
    {
        int r;
        printf("multiple student found\n");
        printf("enter a roll number of student : ");
        scanf("%d", &r);
        for (i = 0; i < n; i++)
        {
            if (strcmp(temp, p[i].name) == 0 && r == p[i].roll)
            {
                printf("name %d :%s\n", i + 1, p[i].name);
                printf("roll number :%d\n", p[i].roll);
                printf("std :%d\n", p[i].std);
                return i;
            }
        }

        printf("roll number not found\n");
    }
    return -1;
}    
    

    /*while (count == 1)
    {
        count = 0;
        for (i = a; i < n; i++)
        {
            if(strcmp(temp, p[i].name) == 0)
            {
                {
                    printf("%s", p[i].name);
                    a = i;
                    count++;
                }
            }
            printf("enter roll number :");
            scanf("%d", &r);
            elseif (r == p[i].roll)
            {
               printf("name %d :%s\n", i + 1, p[i].name);
               printf("%d\n", p[i].roll);
               printf("%d\n", p[i].std);
            }
        }
           
    }*/
    

    
void edit(student_t *p, int n)
{
    char temp[20];
    int i, tr, ts;
    enum ser e;

    i = find(p, n);
    if (i == -1)
    {
        printf("name not found\n");
    }
    else
    {
    printf("what to change : \n");
    printf("'1' for name \n");
    printf("'2'for roll number \n");
    printf("'3'for std \n");
    printf("'0'for exit \n");
    scanf("%d", (int *)&e);
    switch (e)
    {
    case NAME:
        printf("enter name need to change: ");
        scanf(" %19[^\n]", temp);
        strcpy(p[i].name, temp);
        break;

    case ROLL:
         printf("enter roll number :");
         scanf("%d", &tr);
         p[i].roll = tr;
         break;
    case STD:
        printf("enter change std: ");
        scanf("%d", &ts);
        p[i].std = ts;
        break;

    case EXIT:
        break;
    
    default:("Invalid choice\n");
        break;
    }
  }
    
}

void delete(student_t *r, int *n)
{
    int i, j;
    i = find(r, *n);

    if (i == -1)
    {
        printf("name not found\n");
    }

    else
    {
        for (j = i; j < *n - 1; j++)
        {
            r[j] = r[j + 1];
        }
        (*n)--;
    }
    
    
}

int main()
{
    
    char temp[20];
    int n, i, j, temp_std, temp_roll;
    printf("enter number of student");
    scanf("%d", &n);
    extern student_t info[MAX];

    op_t fun = 
    {
        .find_p = find,
        .edit_p = edit,
        .delete_p = delete
    };

    

    for (i = 0; i < n; i++)
    {
        printf("student %d\n", i+1);
        printf("enter name : ");
        scanf(" %19[^\n]", info[i].name);
        strcpy(temp, info[i].name);
        for (j = 0; temp[j] != '\0'; j++)
        {
            if ((temp[j] == ' ') || (temp[j] >= 'a' && temp[j] <= 'z') || (temp[j] >= 'A' && temp[j] <= 'Z'))
            {
                continue;
            }
            else
            {
                printf("invalid input\n");
                return j;
            }
            
        }
        
        printf("enter roll number : ");
        scanf("%d", &info[i].roll);
        temp_roll = info[i].roll;
        if (temp_roll >= 0 && temp_roll <= 100)
        {
        }
        else
        {
            printf("invalid input\n");
            return i;
        }

        printf("enter std : ");
        scanf("%d", &info[i].std);
        temp_std = info[i].std;
        if (temp_std >= 0 && temp_std <= 12)
        {
        }
        else
        {
            printf("invalid input\n");
            return i;
        }
        
    }       
    enum abc a;
    

    while (1)
    {
        printf("what to do : \n");
        printf("'1' for find \n");
        printf("'2'for edit \n");
        printf("'3'for delete \n");
        printf("'0'for exit \n");
        scanf("%d", (int *)&a);
        switch (a)
        {
        case FIND:
            fun.find_p(info, n);
        break;
        case EDIT:
            fun.edit_p(info, n);
        break;
        case DELETE:
            fun.delete_p(info, &n);
            printf("name is deleted\n");  
        break;  

        case EXIT:
            printf("exit\n");
            return 0;
        default:("Invalid choice\n");
            break;
        }
    }
    
}