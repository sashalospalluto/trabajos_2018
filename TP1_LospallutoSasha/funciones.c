#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float funcionSuma(float primerNumero,float segundoNumero)
{
    float respuesta;
    respuesta=primerNumero+segundoNumero;
    return respuesta;
}

float funcionResta(float primerNumero,float segundoNumero)
{
    float respuesta;
    respuesta=primerNumero-segundoNumero;
    return respuesta;
}

float funcionMultiplicar(float primerNumero,float segundoNumero)
{
    float respuesta;
    respuesta=primerNumero*segundoNumero;
    return respuesta;
}

float funcionDividir(float primerNumero,float segundoNumero)
{
    float respuesta;
    respuesta=primerNumero/segundoNumero;
    return respuesta;
}

int funcionFactorial(float numero) // falta int num
{
    //num=numero;
    if (numero<0)
    {
        return -1;
    }
  //  if (numero-num) //saber si es decimal
  //  {
  //      return -1;
  //  }
    if (numero==1 || numero==0)
    {
        return 1;
    }   else
        {
            return numero*funcionFactorial(numero-1);
        }
}

void funcionValidarFactorial (float primerNumero, float segundoNumero, float factorial1, float factorial2)
{
    if(factorial1==-1 && factorial2==-1)
    {
        printf("\n\nNo se puede factorizar el numero %.0f y el numero %.0f\n\n",primerNumero,segundoNumero);
    }
    else  if (factorial1==-1 && factorial2>0)
    {
        printf("\n\nNo se puede factorizar el numero %.0f, pero el factorial de %.0f es: %.0f\n\n",primerNumero,segundoNumero,factorial2);
    }
    else  if (factorial1>0 && factorial2==-1)
    {
        printf("\n\nNo se puede factorizar el numero %.0f, pero el factorial de %.0f es: %.0f\n\n",segundoNumero,primerNumero,factorial1);
    }
    else
    {
        printf("\n\nel factorial de %.0f es: %.0f, y el factorial de %.0f es: %.0f \n\n",primerNumero,factorial1,segundoNumero,factorial2);
    }
}
