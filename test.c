#include "IntMutableArray.h"
#include <stdio.h>

int main(){

    int array[]={6,9,0};
    IntMutableArray mutarray;
    int length=(sizeof(array)/sizeof(array[0]));
    initArray(&mutarray,array,length);
    append(&mutarray,90);
    append(&mutarray,89);
    pop(&mutarray,3);
    insert(&mutarray,1,678);
    showArray(mutarray);
    freeArray(&mutarray);
    printf("III");
    return 0;

}