#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define ARCH ".\\archivo_a.dat"



int main()
{
    char seguir='s';
    int opcion=0;


    FILE*archiv;
    EMovie movie;

  //abreArchivo(FILE *archivo)


    if ((archiv=fopen(ARCH,"rb+"))==NULL)
    {
        if ((archiv=fopen(ARCH,"wb+"))==NULL)
        {
            printf("No se pudo abrir el archivo");
            exit(1);
        }
    }

    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Modificar pelicula\n");
        printf("4- Generar pagina web\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                agregarPelicula(movie, archiv);
                break;

            case 2:
                borrarPelicula(archiv, movie);
                break;
            case 3:

                //modificarpelicula(archiv, movie);
                break;

            case 4:
                generadorPagina(archiv, movie);
                break;

            case 5:
                seguir = 'n';
                break;
        }
    }



    fclose(archiv);
    return 0;
}
