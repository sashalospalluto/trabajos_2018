#include "ArrayEmployees.h"
#include <stdio.h>
#include <stdlib.h>


int initEmployees(Employee* list, int len)
{
    for (int i=0;i<1000;i++)
    {
        list[i].isEmpty= TRUE;
        return 0;
    }

 return -1;
}

int addEmployee(Employee list, int len, int id, char name[],char lastName[],float salary,int sector)
{
    int i;
    for (i=0; i<len; i++)
    {
        if(list[i].isEmpty==0)
        {
            list[i].name=name;
            list[i].lastName=lastName;
            list[i].id=i+1;
            list[i].salary=salary;
            list[i].sector=sector;
            return 0;

        }
    }
    return -1;
}
/*
int findEmployeeById(Employee* list, int len,int id)
{
 return NULL
}

int removeEmployee(Employee* list, int len, int id)
{
 return -1;
}

int sortEmployees(Employee* list, int len, int order)
{
 return 0;
}

int printEmployees(Employee* list, int length)
{
 return 0;
}
*/

