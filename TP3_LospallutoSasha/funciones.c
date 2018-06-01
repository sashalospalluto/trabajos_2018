#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

int agregarPelicula(EMovie movie, FILE*arch)
{
    printf ("ingrese el nombre de pelicula: \n");
    scanf("%s", movie.titulo);

    printf("Ingrese el genero de la pelicula: \n");
    scanf("%s",movie.genero);

    printf("Ingrese la duracion de la pelicula: \n");
    scanf("%d",&movie.duracion);

    printf("Ingrese la descripcion: \n");
    scanf("%s",movie.descripcion);

    printf("Ingrese el puntaje de la pelicula: \n");
    scanf("%d",&movie.puntaje);

    printf("Ingrese el link de la pelicula: \n");
    scanf("%s",movie.linkImagen);

    movie.estado=1;

    fwrite(&movie,sizeof(movie),1,arch);

    return 0;

}


int borrarPelicula(FILE*arch,EMovie movie)
{
    char peliculaAux[20];
    int cantidad;
    rewind(arch);

    printf("Ingrese el nombre de la pelicula que desea borrar");
    scanf("%s",peliculaAux);

    while(!feof(arch)){
      cantidad = fread(&movie,sizeof(movie),1,arch);

      if(cantidad!=1){
         if(feof(arch)){
			break;
         }
         else{
			printf("No llego a leer el ultimo registro");
			break;
         }
      }

      if(strcmp (peliculaAux,movie.titulo)==0){

        movie.estado=0;

        fseek(arch , (long) (-1) * sizeof(movie), SEEK_CUR);
        fflush(stdin);
        fwrite(&movie,sizeof(movie),1,arch);
        printf("la pelicula se borro");
        break;
      }
    }
}


void imprimeCabezeraTXT(FILE *archT)
{
    fprintf(archT,"<!DOCTYPE html>\n<!-- Template by Quackit.com -->\n<html lang='en'>\n<head>\n<meta charset='utf-8'>\n<meta http-equiv='X-UA-Compatible' content='IE=edge'>\n<meta name='viewport' content='width=device-width, initial-scale=1'>\n<!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->\n<title>Lista peliculas</title>\n<!-- Bootstrap Core CSS -->\n<link href='css/bootstrap.min.css' rel='stylesheet'>\n<!-- Custom CSS: You can use this stylesheet to override any Bootstrap styles and/or apply your own styles -->\n<link href='css/custom.css' rel='stylesheet'>\n<!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->\n<!-- WARNING: Respond.js doesn't work if you view the page via file:// -->\n<!--[if lt IE 9]>\n<script src='https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js'></script>\n<script src='https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js'></script>\n<![endif]-->\n</head>\n<body>\n<div class='container'>\n<div class='row'>\n");



}

void imprimeCuerpoTXT(FILE *archT,EMovie movie)
{


    fprintf(archT, "<!-- Repetir esto para cada movie -->\n<article class='col-md-4 article-intro'>\n<a href='#'>\n<img class='img-responsive img-rounded' src='""%s""' alt=''>\n",movie.linkImagen);

    fprintf(archT,"</a>\n<h3>\n");
    fprintf(archT,"<a href='#'>%s</a>\n</h3>\n<ul>\n",movie.titulo);
    fprintf(archT,"<li>Genero:%s</li>\n",movie.genero);
    fprintf(archT,"<li>Puntaje:%d</li>\n",movie.puntaje);
    fprintf(archT,"<li>Duracion:%d</li>\n</ul>\n",movie.duracion);
    fprintf(archT,"  <p>%s</p>\n</article>\n<!-- Repetir esto para cada movie -->\n",movie.descripcion);

}

void imprimeFinalTXT(FILE *archT)
{
    fprintf(archT,"</div>\n<!-- /.row -->\n</div>\n<!-- /.container -->\n<!-- jQuery -->\n<script src='js/jquery-1.11.3.min.js'></script>\n<!-- Bootstrap Core JavaScript -->\n<script src='js/bootstrap.min.js'></script>\n<!-- IE10 viewport bug workaround -->\n<script src='js/ie10-viewport-bug-workaround.js'></script>\n<!-- Placeholder Images -->\n<script src='js/holder.min.js'></script>\n</body>\n</html>\n");

}







void generadorPagina(FILE * arch,EMovie movie)
{

    FILE* archT;
    int cantidad;
    rewind(arch);

    if ((archT=fopen(".\\listadoPeliculas.html","wb+"))==NULL){
        printf("No se pudo abrir el archivo de texto");
        exit(1);
      }


    while(!feof(arch))
    {
        cantidad=fread(&movie,sizeof(movie),1,arch);
        if(cantidad!=1)
        {
            if(feof(arch))
            {
                break;
            }
            else
            {
                printf("No se pudo terminar de completar la operacion\n");
                break;
            }
        }
        if(movie.estado==1)
        {
            imprimeCabezeraTXT(archT);
            imprimeCuerpoTXT(archT,movie);
            imprimeFinalTXT(archT);
        }


    }
    fclose(archT);








}


