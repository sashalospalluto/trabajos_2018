#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float primerNumero=0;
    float segundoNumero=0;
    float resultadoOperacion=0;

    while(seguir=='s')
    {
        printf("\n\n1- Ingresar 1er operando (A=%f)\n",primerNumero);
        printf("2- Ingresar 2do operando (B=%f)\n",segundoNumero);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        do
        {
            scanf("%d",&opcion);


        }while (opcion>9 || opcion<1);

        switch(opcion)
        {
            case 1:
                    system("cls");
                    printf("Ingrese el primer numero: ");
                    scanf ("%f",&primerNumero);
                    break;

            case 2:
                    system("cls");
                    printf("Ingrese el segundo numero: ");
                    scanf ("%f",&segundoNumero);
                    break;

            case 3:
                    system("cls");
                    resultadoOperacion=funcionSuma(primerNumero,segundoNumero);
                    respuesta("El resultado de la suma es: ", resultadoOperacion);
                    break;
            case 4:
                   system("cls");
                   resultadoOperacion=funcionResta(primerNumero,segundoNumero);
                   respuesta("El resultado de la resta es: ", resultadoOperacion);
                   break;


            case 5:

                    if (segundoNumero==0)
                    {
                        printf("No se puede realizar la operacion porque el segundo numero es CERO");
                    }   else
                        {
                            resultadoOperacion=funcionDividir(primerNumero,segundoNumero);
                            respuesta("El resultado de la division es: ",resultadoOperacion);
                            break;
                        }
            case 6:

                    resultadoOperacion=funcionMultiplicar(primerNumero,segundoNumero);
                    respuesta("El resultado de la multiplicacion es: ",resultadoOperacion);
                    break;

            case 7:


                if (primerNumero<0)
                {
                    printf("No se puede factorizar el numero");

                }   else
                    {
                        resultadoOperacion=funcionFactorial(primerNumero);
                        respuesta("El factorial es: ",resultadoOperacion);
                        break;
                    }
                break;
            case 8:


                   resultadoOperacion=funcionSuma(primerNumero,segundoNumero);
                   respuesta("\nEl resultado de la suma es: ",resultadoOperacion);


                   resultadoOperacion=funcionResta(primerNumero,segundoNumero);
                   respuesta("\nEl resultado de la resta es: ",resultadoOperacion);


                   if (segundoNumero==0)
                   {
                     printf("\nNo se puede realizar la division porque el segundo numero es CERO");

                   }   else
                       {
                           resultadoOperacion=funcionDividir(primerNumero,segundoNumero);
                           respuesta("\nEl resultado de la division es: ",resultadoOperacion);
                       }


                   resultadoOperacion=funcionMultiplicar(primerNumero,segundoNumero);
                   respuesta("\nEl resultado de la multiplicacion es: ", resultadoOperacion);


                   if (primerNumero<0)
                   {
                      printf("\nNo se puede factorizar el numero");

                   }   else
                       {
                           resultadoOperacion=funcionFactorial(primerNumero);
                           respuesta("\nEl factorial es: ",resultadoOperacion);
                       }
                   break;

            case 9:
                seguir = 'n';
                break;
        }

     }


    return 0;
}
