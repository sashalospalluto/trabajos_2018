#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    float numeroA=0;
    float numeroB=0;
    char seguir='s';
    int opcion=0;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    float factorialA;
    float factorialB;
    //int num;

    while (seguir=='s')
    {
        system("cls");
        printf("\t\tMENU");
        printf("\n\n1-Ingresar 1er operando (A=%.2f)",numeroA);
        printf("\n\n2-Ingresar 2do operando (B=%.2f)",numeroB);
        printf("\n\n3-Calcular todas las operaciones");
        printf("\n\n4-Informar resultados");
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
        printf("\n\n1-Ingrese el 1er numero: ");
        scanf("%f",&numeroA);
        break;

    case 2:

        system("cls");
        printf("\n\n1-Ingrese el 2do numero: ");
        scanf("%f",&numeroB);
        break;

    case 3:

        suma=funcionSuma(numeroA,numeroB);
        resta=funcionResta(numeroA,numeroB);
        division=funcionDividir(numeroA,numeroB);
        multiplicacion=funcionMultiplicar(numeroA,numeroB);
        factorialA=funcionFactorial(numeroA);
        factorialB=funcionFactorial(numeroB);
        printf("\n\nDatos guardados correctamente \n\n\n");
        system("pause");
        break;

    case 4:
        system("cls");
        printf("\t\tRESULTADOS");
        //suma
        printf("\n\nLa suma es: %.2f",suma);

        //resta
        printf("\n\nla resta es: %.2f",resta);

        //division
        if (numeroB==0)
        {
            printf("\n\nNo se puede dividir porque su denominador es cero");

        }   else
            {
                printf("\n\nLa division es: %.2f",division);
            }

        //multiplicacion
        printf("\n\nLa multiplicacion es: %.2f",multiplicacion);

        //factorial

        funcionValidarFactorial(numeroA,numeroB,factorialA,factorialB);
        system("pause");
        break;

    case 5:

        seguir='n';
        break;

    }

    }

    return 0;
}
