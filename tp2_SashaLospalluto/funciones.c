#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "FuncionesImput.h"

void imprimirMenu()
{
    printf("       Menu\n");
    printf("1- Agregar persona\n");
    printf("2- Borrar persona\n");
    printf("3- Imprimir lista ordenada por  nombre\n");
    printf("4- Imprimir grafico de edades\n");
    printf("5- Salir\n\n");
    printf("ingrese opcion: ");

}

void inicializaMatriz(EPersona datos[],int cantidad)
{
    int pos;
    for(pos=0;pos<cantidad;pos++)
    {
        datos[pos].estado=0;
        datos[pos].edad=0;
    }
}

int EspacioLibre(EPersona datos[],int cantidad)
{
    int pos=0;
    while(pos<cantidad)
    {
        if(datos[pos].estado==0)
        {
            return pos;
            break;
        }else
        {
            pos++;
        }

    } return -1;

}

void CargaDatosPersona(EPersona datos[],int pos)
{
    int verificar;
    do
    {
        setbuf(stdin,NULL);
        printf("Ingrese Nombre y Apellido: ");
        scanf("%[^\n]",datos[pos].nombre);
        verificar=validarCadena(datos[pos].nombre);

    }while(verificar==0);

    printf("Ingrese Edad: ");
    scanf("%d",&datos[pos].edad);

    while((datos[pos].edad>100 || datos[pos].edad<1) && !isdigit(datos[pos].edad))
    {
        printf("Ingrese Edad nuevamente: ");
        setbuf(stdin,NULL);
        scanf("%d",&datos[pos].edad);
    }


        datos[pos].dni=getValidInt("Ingrese DNI:","El DNI ingresado es incorrecto",10000000,99999999);

        /* pos=busquedaDni(datos[],datos[pos].dni,CANTIDAD);
        if (pos==-1)
        {
            printf("El dni ya se encuentra");
            break;
        } NO FUNCIONA
        */

        datos[pos].estado=1;
}

void BorrarPersona(EPersona datos[],int pos)
{
    datos[pos].estado=0;
}

int busquedaDni(EPersona datos[], long dni, int cantidad)
{
    int pos;
    for(pos=0;pos<cantidad;pos++)
    {
        if(datos[pos].dni==dni)
        {
            return  pos;
            break;
        }
    }return -1;
}


int EspacioDisponible(EPersona datos[],int cantidad)
{
    int pos;

    for(pos=0;pos<cantidad;pos++)
    {
        if(datos[pos].estado==0)
        {
            return pos;
            break;
        }
    }
    return -1;
}

void imprimirLista(EPersona datos[],int cantidad)
{
    int pos;

    for(pos=0;pos<cantidad;pos++)
    {
        if(datos[pos].estado==1)
        {
            printf("Nombre: %s \t",datos[pos].nombre);
            printf("Edad: %d \t",datos[pos].edad);
            printf("DNI: %ld \n",datos[pos].dni);
        }
    }
}

void  grafico(EPersona datos[],int cantidad)
{

    int pos,pos2;
    int menores18=0;
    int mayor18menor35=0;
    int mayores35=0;
    char grafico [3][20];

    for(pos=0;pos<cantidad;pos++)
    {
        if(datos[pos].estado==1)
        {
            if(datos[pos].edad>35)
            {
                mayores35++;
            }
            if(datos[pos].edad<=18)
            {
                menores18++;
            }
            if(datos[pos].edad>18 && (datos[pos].edad<=35))
            {
                mayor18menor35++;
            }
        }

    }

    printf("%d \t %d \t %d\n", menores18,mayor18menor35,mayores35);
    for(pos=0;pos<3;pos++)
    {
        for(pos2=0;pos2<20;pos2++)
        {
            grafico[pos][pos2]=' ';
        }
    }


    for(pos2=19;pos2>(19-menores18);pos2--)
        {
            grafico[0][pos2]='X';
        }
        printf("llego");
    for(pos2=19;pos2>(19-mayor18menor35);pos2--)
        {
            grafico[1][pos2]='X';
        }
    for(pos2=19;pos2>(19-mayores35);pos2--)
        {
            grafico[2][pos2]='X';
        }

    for(pos2=0;pos2<19;pos2++)
    {
        printf("\n");
        for(pos=0;pos<3;pos++)
        {
            printf("%c \t",grafico[pos][pos2]);
        }
    }
    printf("\n<18\t19-35\t>35\n");

}

void ordenarArray(EPersona datos[],int cantidad)
{
    int pos,pos2;
    EPersona aux;
    int compara;

    for(pos=0;pos<cantidad-1;pos++)
    {
        for(pos2=1;pos2<cantidad;pos2++)
        {
            compara=strcmp(datos[pos].nombre,datos[pos2].nombre);
            if( compara<0 )
            {
                aux=datos[pos];
                datos[pos]=datos[pos2];
                datos[pos2]=aux;
            }
        }

    }
}


int validarCadena(char cadena[])
{
    int pos;
    int retorno;
    int largo;
    int contadorDeEspacios=0;

    largo= strlen(cadena);
    for(pos=0;pos<largo;pos++)
    {
        if(cadena[pos]!=' ')
        {
            retorno= isalpha(cadena[pos]);

            if(retorno==0)
            {
                return 0;
                break;
            }
        }else
            {
                contadorDeEspacios++;
            }
    }
    if (contadorDeEspacios>1)
    {
        return 0;
    }else{

        return 1;
        }
}


