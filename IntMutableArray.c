#include <stdlib.h>
#include <stdio.h>
#include "IntMutableArray.h"

void initArray(IntMutableArray *mutarray,int array[],int length){

    mutarray->array=(int *) malloc(sizeof(int)*length);

    int *p;
    p=mutarray->array;
    if (mutarray->array==NULL){
        return ;
    }

    for (int i=0;i<length;i++){
        
        *p=array[i];
        p++;

    }
    mutarray->length=length;
    p=NULL;
    return ;
}

void showArray(IntMutableArray mutarray){
    
    int *p=mutarray.array;

    for(int i=1;i<=mutarray.length;i++){
        printf("%d   ",*p);
        if (i%20==0){
            printf("\n");
        }
        p++;
    }
    p=NULL;
    printf("\n");
}

void append(IntMutableArray *mutarray,int item){

    mutarray->array=realloc(mutarray->array,(sizeof(int)*mutarray->length)+1);
    if (mutarray->array==NULL){
        printf("No hay espacio\n");
        return;
    }
    int *p;
    p=mutarray->array+mutarray->length;
    *p=item;
    mutarray->length++;
    p=NULL;
}


void freeArray(IntMutableArray *mutarray){
    free (mutarray->array);
    mutarray->array=NULL;
}

int pop(IntMutableArray *mutarray, int index){

    if (index>=mutarray->length){
        return -1;
    }

    IntMutableArray array_nuevo;
    array_nuevo.array=malloc((sizeof(int)*mutarray->length)-1);
    int *p_to_array;
    int *p_to_array_nuevo;
    p_to_array=mutarray->array;
    p_to_array_nuevo=array_nuevo.array;
    int elemento_to_return;
    for(int i=0;i<mutarray->length;i++){

        if (i==index){
            elemento_to_return=*p_to_array;
            p_to_array++;
            continue;
        }
        *p_to_array_nuevo=*p_to_array;
        p_to_array_nuevo++;
        p_to_array++;
    }
    freeArray(mutarray);
    mutarray->array=array_nuevo.array;
    mutarray->length--;
    return elemento_to_return;
}

void insert(IntMutableArray *mutarray,int index, int item){

    if (index>=mutarray->length){
        return;
    }

    IntMutableArray array_nuevo;
    array_nuevo.array=malloc((sizeof(int)*mutarray->length)+1);
    int *p_to_old_array=mutarray->array;

    int *p_to_new_array=array_nuevo.array;

    for (int i=0;i<=mutarray->length;i++){

        if(i==index){
            
            *p_to_new_array=item;
            p_to_new_array++;
            continue;

        }
        *p_to_new_array=*p_to_old_array;
        *p_to_new_array++;
        *p_to_old_array++;

    }
    freeArray(mutarray);
    mutarray->length++;
    mutarray->array=array_nuevo.array;

    return;
}

int getlength(IntMutableArray array){
    return array.length;
}