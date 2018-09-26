#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"


int main()
{
    char seguir='s';
    int opcion;
    int r;
    char nombre[51];
    char apellido [51];
    float salario;
    int sector;
    int id=0;

    Employee Eemplo[ELEMENTS];


    r=initEmployees(&Eemplo,ELEMENTS);

    while (seguir=='s')
    {
        printf("\t\tMENU");
        printf("\n\n1-Alta de nuevo usuario");
        printf("\n\n2-Modificar usuario");
        printf("\n\n3-Baja");
        printf("\n\n4-Informar");
        printf("\n\n5-Salir\n");

        do
        {
            printf("\n\t\tingrese opcion: ");
            scanf("\n%d",&opcion);
        }while (opcion<1 || opcion>5);

        switch (opcion)
        {
        case 1:

            system("cls");

            printf("\t\tCARGA DE EMPLEADO");
            printf("\nIngrese nombre: ");
            scanf("%c",nombre);
            printf("\nIngrese apellido: ");
            scanf("%c",apellido);
            printf("\nIngrese salario: ");
            scanf("%f",&salario);
            printf("\nIngrese sector: ");
            scanf("%d",&sector);

            r=addEmployee(&Eemplo,ELEMENTS,id,nombre,apellido,salario,sector);

            if (r==0)
            {
                printf("carga exitosa!");
            }
            else
            {
                printf("El numero de empleados cargados llego al maximo");
            }

            system("pause");

            break;

        case 2:

            system("cls");

            if (Eemplo[0].isEmpty==0)
            {
                printf("Debe ingresar un empleado primero\n");
            }
            else
            {
                printf("hola 2\n");
            }

            system("pause");
            break;

        case 3:

            system("cls");

            if (Eemplo[0].isEmpty==0)
            {
                printf("Debe ingresar un empleado primero\n");
            }
            else
            {
                printf("hola 3\n");
            }

            system("pause");
            break;

        case 4:

            system("cls");

            if (Eemplo[0].isEmpty==0)
            {
                printf("Debe ingresar un empleado primero\n");
            }
            else
            {
                printf("hola 4\n");
            }

            system("pause");
            break;

        case 5:

            seguir='c';

             break;
        }
    }

}
