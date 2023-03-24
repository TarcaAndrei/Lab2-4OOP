//
// Created by Andrei on 12.03.2023.
//

#include <string.h>
#include "sortare.h"

void sortare_pret(PtrOferta *array, int lungime, int optiune) {
    if(optiune == 1){
        int i, j;
        PtrOferta aux;
        for(i=0; i<lungime-1; i++){
            for(j=i+1; j<lungime; j++){
                if(get_pret(array[i]) > get_pret(array[j])){
                    aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
    }
    else{
        int i, j;
        PtrOferta aux;
        for(i=0; i<lungime-1; i++){
            for(j=i+1; j<lungime; j++){
                if(get_pret(array[i]) < get_pret(array[j])){
                    aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
    }
}

void sortare_destinatie(PtrOferta *array, int lungime, int optiune) {
    if(optiune == 1){
        int i, j;
        PtrOferta aux;
        for(i=0; i<lungime-1; i++){
            for(j=i+1; j<lungime; j++){
                if(strcmp(get_destinatie(array[i]), get_destinatie(array[j])) > 0){
                    aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
    }
    else{
        int i, j;
        PtrOferta aux;
        for(i=0; i<lungime-1; i++){
            for(j=i+1; j<lungime; j++){
                if(strcmp(get_destinatie(array[i]), get_destinatie(array[j])) < 0){
                    aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
    }
}

