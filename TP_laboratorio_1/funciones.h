#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief realiza la suma de 2 numeros flotantes
 *
 * \param primerNumero float primer numero flotante
 * \param segundoNumero float segundo numero flotante
 * \return float devuelve la suma de los operandos
 *
 */
float funcionSuma(float primerNumero,float segundoNumero);

/** \brief realiza la resta de 2 numeros flotantes
 *
 * \param primerNumero float primer numero flotante
 * \param segundoNumero float segundo numero flotante
 * \return float devuelve la resta de los operandos
 *
 */
float funcionResta(float primerNumero,float segundoNumero);

/** \brief realiza la division de 2 numeros flotantes
 *
 * \param primerNumero float primer numero flotante
 * \param segundoNumero float segundo numero flotante
 * \return float devuelve la division de los operandos
 *
 */
float funcionDividir(float primerNumero,float segundoNumero);

/** \brief realiza la multiplicacion de 2 numeros flotantes
 *
 * \param primerNumero float primer numero flotante
 * \param segundoNumero float segundo numero flotante
 * \return float devuelve la multiplicacion de los operandos
 *
 */
float funcionMultiplicar(float primerNumero,float segundoNumero);

/** \brief realiza el factorial de un numero entero
 *
 * \param numero float numero flotante
 * \param numero int numero entero
 * \return float devuelve el factorial del numero
 *
 */
int funcionFactorial(float numero); // falta int num

/** \brief Valida si el numero ingresado es factorial
 *
 * \param primerNumero float primer numero flotante
 * \param segundoNumero float segundo numero flotante
 * \param factorial1 float resultado del factorial del primer numero
 * \param factorial1 float resultado del factorial del primer numero
 * \return void no devuelve nada
 *
 */
void funcionValidarFactorial (float primerNumero, float segundoNumero, float factorial1, float factorial2);


#endif // FUNCIONES_H_INCLUDED
