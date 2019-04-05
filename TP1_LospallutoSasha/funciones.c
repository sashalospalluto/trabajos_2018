#include <stdio.h>
#include <stdlib.h>
#include "Funciones_Validaciones.h"
#include "function.h"
#include "funciones.h"

void funcionSuma (float num1, float num2, float* suma)
{
    float sumaFunc;
    sumaFunc = num1+num2;
    *suma=sumaFunc;
}

void funcionResta (float num1,float num2,float* resta)
{
    float restaFunc;
    restaFunc = num1-num2;
    *resta=restaFunc;
}

void funcionMultiplicar (float num1,float num2, float* multiplicar)
{
    float multiplicarfunc;
    multiplicarfunc=num1*num2;
    *multiplicar=multiplicarfunc;
}

int funcionDividir (float num1, float num2, float* dividir)
{
    int ret;
    float dividirFunc;

    if (num2==0)
    {
        ret=-1;
    }
    else
    {
        dividirFunc=num1/num2;
        *dividir=dividirFunc;
        ret=0;
    }

    return ret;

}

void funcionFactorial (float* num, unsigned long long int* factorial)
{
    int factorialFunc=1;
    int numero=(*num);

    if (numero<0)
    {
        factorialFunc=-1;
    }
    else if (numero==0 || numero==1)
    {
        factorialFunc=1;
    }
    else
    {
        for (int i=numero; i>1; i--)
        {
            factorialFunc=factorialFunc*i;
        }

        *factorial=factorialFunc;
    }
}

void funcionMostrarFactorial(float num,unsigned long long int factorial)
{
    if(factorial==-1)
    {
        printf("el numero %.2f no se puede factorear. ",num);
    }else
    {
        printf("el factorial de %.2f es: %llu .",num,factorial);
    }
}



