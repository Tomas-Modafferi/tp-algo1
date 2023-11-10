#include "util.h"

typedef struct {
    char titulo[100];
    char autores[300];
    int cant_paginas;
    int ISBN;
    int anio_edicion;
    char editorial[100];
    char genero[100];
} Libro;

void crearLibro(Libro *l){
    strcpy(l->titulo,"");
    l->cant_paginas = 0;
    l->ISBN = 0;
    l->anio_edicion = 0;
    strcpy(l->autores,"");
    strcpy(l->editorial,"");
    strcpy(l->genero,"");
}

void set_titulo(Libro *l, char * titulo){
    strcpy(l->titulo, titulo);
}

char * get_titulo(Libro l){
    return l.titulo;
}

void set_ISBN(Libro *l,int ISBN){
    l->ISBN = ISBN;
}

int get_ISBN(Libro l){
    return l.ISBN;
}

void set_autores(Libro *l, char *a){
    strcpy(l->autores, a);
}

char * get_autores(Libro l){
    return l.autores;
}

void set_cant_pag(Libro *l, int cant_paginas){
    l->cant_paginas = cant_paginas;
}

int get_cant_pag(Libro l){
    return l.cant_paginas;
}

void set_anio_edicion(Libro *l, int anio_edicion){
    l->anio_edicion = anio_edicion;
}

int get_anio_edicion(Libro l){
    return l.anio_edicion;
}

void set_editorial(Libro *l, char * editorial){
    strcpy(l->editorial,"");
}

char * get_editorial(Libro l){
    return l.editorial;
}

void set_genero(Libro *l,char * genero){
    strcpy(l->genero,"");
}

char * get_genero(Libro l){
    return l.genero;
}

