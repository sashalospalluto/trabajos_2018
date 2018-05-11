#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"
#include "FuncionesImput.h"

#define CANTIDAD 20

void cargainicial(EPersona datos[]);

int main()
{
    char seguir='s';
    char opcion=0;
    EPersona datos[CANTIDAD];
    int dni;
    int posicion;
    char salir;

    inicializaMatriz(datos,CANTIDAD);

    while(seguir=='s')
    {
        imprimirMenu();
        setbuf(stdin,NULL);
        scanf("%c",&opcion);

        switch(opcion)
        {
        case '1':
            system("cls");
            posicion=EspacioLibre(datos,CANTIDAD);
            if(posicion!= -1)
            {
                CargaDatosPersona(datos,posicion);
            }
            break;

        case '2':
            system("cls");
            printf("Ingrese el DNI de la persona que desea ELIMINAR: ");
            scanf("%d",&dni);
            posicion=busquedaDni(datos,dni,CANTIDAD);
            if (posicion==-1)
            {
                printf("No se encuenta el DNI \n");
            }
            else
            {
                printf("NOMBRE:%s \nDNI: %ld\n",datos[posicion].nombre,datos[posicion].dni);
                setbuf(stdin,NULL);
                printf("Desea eliminar? s/n \n");
                setbuf(stdin,NULL);
                scanf("%c",&salir);
                salir=tolower(salir);

                if(salir=='s')
                {
                    BorrarPersona(datos,posicion);
                    printf("La persona con el DNI ingresado, se elimino correctamente \n");
                }
                else
                {
                    printf("La operacion se cancelo\n");
                    break;
                }
            }
                break;

            case '3':
                system("cls");
                ordenarArray(datos,CANTIDAD);
                imprimirLista(datos,CANTIDAD);
                break;

            case '4':
                system("cls");
                printf("\t\t\tGRAFICO\t\t\n");
                grafico(datos,CANTIDAD);
                break;

            case '5':
                seguir = 'n';
                break;

            default:
                system("cls");
                printf("La opcion ingresada es incorrecta...\n");
                setbuf(stdin,NULL);
        }
    }
    return 0;
}

