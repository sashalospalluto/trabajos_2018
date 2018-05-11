#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    long int dni;


}EPersona;

/** \brief Inicializa la matriz
 *
 * \param datos[] EPersona solicito lo que hay en el vector
 * \param cantidad int cantidad de vectores
 * \return void
 *
 */
void inicializaMatriz(EPersona datos[],int cantidad);

void imprimirMenu();

/** \brief Busca espacio libre en el vector
 *
 * \param datos[] EPersona solicito los datos de los vectores
 * \param cantidad int cantidad de vectores
 * \return int posicion libre
 *
 */
int EspacioLibre(EPersona datos[],int cantidad);


/** \brief damos de alta de una persona
 *
 * \param datos[] EPersona solicito los datos del vector
 * \param posicion int posicion donde se va a cargar
 * \return void
 *
 */
void CargaDatosPersona(EPersona datos[],int posicion);


/** \brief Obtiene el primer indice libre del vector
 *
 * \param datos[] EPersona solicito los datos de los vectores
 * \param cantidad int cantidad de vectores
 * \return int el primer espacio disponible
 *
 */
int EspacioDisponible(EPersona datos[],int cantidad);


/** \brief Obtiene el lugar donde se encuentra el dni si es que coincide con el ingresado
 *
 * \param datos[] EPersona solicito los datos de los vectores
 * \param dni long int dni que se debe buscar
 * \param cantidad int cantidad de vectores
 * \return int donde se encuentra el elemento que coincide con el dni ingresado
 *
 */
int busquedaDni(EPersona datos[], long int dni, int cantidad);

/** \brief Imprime por pantalla los datos de los vectores
 *
 * \param datos[] EPersona solicito los datos de los vectores
 * \param cantidad de elementos en el array
 * \return void
 */
void imprimirLista(EPersona datos[],int cantidad);

/** \brief elimina una persona del vector
 *
 * \param datos[] EPersona solicito los datos de los vectores
 * \param posicion int posicion donde se encuentra el elemento
 * \return void
 *
 */
void BorrarPersona(EPersona datos[],int posicion);

/** \brief imprime un grafico de las edades
 *
 * \param datos[] EPersona solicito los datos de los vectores
 * \param cantidad int cantidad de vectores
 * \return void
 *
 */
void grafico(EPersona datos[],int cantidad);


/** \brief ordena los vectores
 *
 * \param datos[] EPersona solicito los datos de los vectores
 * \param cantidad int cantidad de vectores
 * \return void
 *
 */
void ordenarArray(EPersona datos[],int cantidad);

int validarCadena(char cadena[]);

#endif // FUNCIONES_H_INCLUDED

