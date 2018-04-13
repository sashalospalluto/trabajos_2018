
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


    /** \brief Funcion que suma dos valores
     *
     * \param a float primer valor para realizar la suma
     * \param b float segundo valor para realizar la suma
     * \return float Devuelve la suma entre a y b
     *
     */
    float funcionSuma(float a,float b)
    {
        float suma;
        suma=a+b;
        return suma;
    }

    /** \brief Funcion que resta dos valores
     *
     * \param a float primer valor para realizar la resta
     * \param b float segundo valor para realizar la resta
     * \return float Devuelve la resta entre a y b
     *
     */
    float funcionResta (float a,float b)
    {
        float resta;
        resta=a-b;
        return resta;
    }

    /** \brief Funcion que multiplica dos valores
     *
     * \param a float primer valor para realizar la multiplicacion
     * \param b float segundo valor para realizar la multiplicacion
     * \return float Devuelve la multiplicacion entre a y b
     *
     */
    float funcionMultiplicar (float a, float b)
    {
        float multiplicar;
        multiplicar=a*b;
        return multiplicar;
    }

    /** \brief Funcion que divide dos valores
     *
     * \param a float primer valor para realizar la division
     * \param b float segundo valor para realizar la division
     * \return float Devuelve la division entre a y b
     *
     */
    float funcionDividir(float a, float b)
    {
        float dividir;
        dividir=a/b;
        return dividir;
    }

    /** \brief Funcion que realiza la factorizacion de un numero
     *
     * \param a float valor que factorea
     * \return float Devuelve el factoreal de a
     *
     */
    float funcionFactorial(float a)
    {
        float factoreo;
        if (a==0 || a==1)
        {
            return 1;
        }   else
            {
                factoreo= a* funcionFactorial(a-1);
                return factoreo;
            }
    }

    /** \brief funcion que muestra el resultado de la operacion
     *
     * \param mensaje char Es el mensaje que se va a mostrar
     * \param  a y b float Datos para mostrar en el mensaje
     * \param resultado float Dato para mostrar en el mensaje
     *
     */
    void resultado (char mensaje[], float a, float b, float resultado)
    {
        printf ("%s",mensaje,a,b,resultado);
    }








    /**
    *    \brief suma dos valores
    *    \param operador01 y operador02, son los que se van a sumar
    *    \return devuelve la suma de ambos
    */

    float sumar(float operador01, float operador02)
    {
        return operador01+operador02;
    }

    /**
    *    \brief resta dos valores
    *    \param operador01 y operador02, son los que se van a restar
    *    \return devuelve la resta de ambos
    */
    float restar(float operador01, float operador02)
    {
        return operador01-operador02;
    }

    /**
    *    \brief multiplica dos valores
    *    \param operador01 y operador02, son los que se van a multiplicar
    *    \return devuelve la multiplicacion de ambos
    */

    float multiplicar(float operador01, float operador02)
    {
        return operador01*operador02;
    }
    /**
    *    \brief divide dos valores
    *    \param operador01 y operador02, son los que se van a dividir
    *    \return devuelve la division de ambos
    */

    float dividir(float operador01, float operador02)
    {
        return operador01/operador02;
    }

    /**
    *    \brief Toma un valor y calcula su factorial
    *    \param operador es el numero al cual se le aplicara el factorial
    *    \return el factorial de operador
    */
    float factorial(float operador)
    {
        float respuesta;
        if(operador==1 || operador==0)
        return 1;
        respuesta=operador* factorial(operador-1);
        return (respuesta);
    }


    /**
    *    \brief Toma un valor y lo muestra
    *    \param mensaje Es el mensaje a mostrar
    *    \param resultado Es el valor a ser mostrado
    *    \return el valor de resultado
    */

    void muestraMensaje(char mensaje[], float resultado)
    {
        printf("%s%.2f \n", mensaje,resultado);
    }



#endif // FUNCIONES_H_INCLUDED


