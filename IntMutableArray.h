#ifndef TADMUTABLEARRAY_H

#define TADMUTABLEARRAY_H


typedef struct{

    int *array;
    int length;

}IntMutableArray;

void initArray(IntMutableArray *mutarray,int array[],int length);    // Inicializa el arreglo y contiene los metadatos necesarios
void showArray(IntMutableArray mutarray);							 // Muestra el arreglo
void append(IntMutableArray *array,int item);						 // Agrega al final el arreglo
int pop(IntMutableArray *array, int index);							 // Elimina el index-esimo elemento de la lista y lo devuelve
int getlength(IntMutableArray array);								 // DEvuelve la longitud del array
void freeArray(IntMutableArray *array);								 // Libera memoria del array y su puntero lo seniala a NULL y length a 0
void insert(IntMutableArray *array,int index, int item);             // Inserta un elemento en la posicion index-esima del arreglo

#endif