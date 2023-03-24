//
// Created by Andrei on 09.03.2023.
//

#ifndef LAB2_4_REPOSITORY_H
#define LAB2_4_REPOSITORY_H

#include "../domeniu/oferta.h"

typedef struct RepositoryOferte{
    PtrOferta *lista_oferte;
    int lungime;
    int capacitate_maxima;
}RepositoryOferte, *PtrRepositoryOferte;

PtrRepositoryOferte constructor_repository();

int get_lungime_repository(PtrRepositoryOferte pointer_repository);
int get_capacitate_maxima(PtrRepositoryOferte);
int adauga_oferta(PtrRepositoryOferte pointer_repository, PtrOferta ofera_noua);
void realocare(PtrRepositoryOferte);
int sterge_oferta(PtrRepositoryOferte, PtrOferta);

PtrOferta* get_lista_repo_oferte(PtrRepositoryOferte ptr_repository);

PtrOferta get_oferta_cu_id(PtrRepositoryOferte, int id_oferta);
int get_id_oferta(PtrRepositoryOferte, PtrOferta);
char* get_tip_oferta(PtrRepositoryOferte, PtrOferta);
char* get_destinatie_oferta(PtrRepositoryOferte, PtrOferta);
char* get_data_oferta(PtrRepositoryOferte, PtrOferta);
double get_pret_oferta(PtrRepositoryOferte, PtrOferta);

int modifica_tip_oferta(PtrRepositoryOferte, PtrOferta, char*);
int modifica_destinatie_oferta(PtrRepositoryOferte, PtrOferta, char*);
int modifica_data_oferta(PtrRepositoryOferte, PtrOferta, char*);
int modifica_pret_oferta(PtrRepositoryOferte, PtrOferta, double);

void destructor_repository(PtrRepositoryOferte);


// aici daca sa mai introduc sau nu un id sau ceva de genu dupa care sa le tin minte - logic teoretic

#endif //LAB2_4_REPOSITORY_H
