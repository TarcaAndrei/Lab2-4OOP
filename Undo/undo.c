//
// Created by Valentin Serban on 24.03.2023.
//

#include "undo.h"
#include <stdlib.h>
#include <printf.h>
#include <string.h>

struct undo* initializare_undo(){
    struct undo* undo = (struct undo*)malloc(sizeof(struct undo));
    undo ->length = 0;
    undo -> stack = NULL;
    undo -> lungime_absoluta = 0;

    return undo;
}

void deepcopy(struct undo* undo, PtrRepositoryOferte oferte){
    PtrRepositoryOferte copy_oferte = (PtrRepositoryOferte) malloc(sizeof(RepositoryOferte));
    copy_oferte->lista_oferte = (PtrOferta *) malloc(oferte -> lungime * sizeof(PtrOferta));
    copy_oferte ->lungime = oferte -> lungime;
    copy_oferte -> capacitate_maxima = oferte -> capacitate_maxima;
    for(int i = 0; i < oferte -> lungime; ++i){
        PtrOferta new_ptr = malloc(sizeof(Oferta));
        new_ptr -> id_oferta = oferte -> lista_oferte[i] ->id_oferta;
        strcpy(new_ptr -> data_plecare, oferte -> lista_oferte[i] -> data_plecare);
        strcpy(new_ptr -> destinatie, oferte -> lista_oferte[i] -> destinatie);
        strcpy(new_ptr ->tip, oferte -> lista_oferte[i] -> tip);
        new_ptr -> pret = oferte -> lista_oferte[i] -> pret;
        copy_oferte -> lista_oferte[i] = new_ptr;
    }
    if(undo -> length == 0){
        undo -> stack = malloc(sizeof(PtrRepositoryOferte*) * 2);
        ((PtrRepositoryOferte*)(undo -> stack))[0] = copy_oferte;
        undo -> length++;
        undo -> lungime_absoluta++;
        return;
    }
    void* new_ptr = malloc((undo -> length + 1) * sizeof(PtrRepositoryOferte*));
    for(int i = 0; i < undo -> length; i++){
        ((PtrRepositoryOferte)(new_ptr))[i] = ((PtrRepositoryOferte)(undo -> stack))[i];
    }
    free(undo -> stack);
    undo -> stack = new_ptr;
    ((PtrRepositoryOferte*)(undo -> stack))[undo ->length] = copy_oferte;
    undo -> length++;
    undo -> lungime_absoluta++;
}

PtrRepositoryOferte undo(struct undo* u, PtrRepositoryOferte oferte){
    if(u -> length == 0){
        printf("NU MAI PUTETI FACE UNDO!");
        return oferte;
    }
    oferte = ((PtrRepositoryOferte*)(u -> stack))[u ->length - 1];
    u -> length--;

    return oferte;
}

void distrugere_undo(struct undo* u){
    for(int i = 0; i < u -> lungime_absoluta; ++i){
        for(int j = 0; j < ((PtrRepositoryOferte*)(u -> stack))[i] ->lungime; ++j){
            free(((PtrRepositoryOferte*)(u -> stack))[i] -> lista_oferte[j]);
        }
        free(((PtrRepositoryOferte*)(u -> stack))[i] -> lista_oferte);
        free(((PtrRepositoryOferte*)(u -> stack))[i]);
    }
    free(u -> stack);
    free(u);
}