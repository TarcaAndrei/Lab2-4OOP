//
// Created by Andrei on 10.03.2023.
//

#ifndef LAB2_4_SERVICE_H
#define LAB2_4_SERVICE_H

#include "../repository/repository.h"
#include "../validator/validare_oferta.h"

typedef struct ServiceOferte{
    PtrRepositoryOferte repository;
    PtrValidareOferta validator;
}ServiceOferte, *PtrServiceOferte;

PtrServiceOferte constructor_service(PtrRepositoryOferte ptr_repo, PtrValidareOferta ptr_valid);

int adauga_oferta_service(PtrServiceOferte ptr_service, int id_oferta, char tip[], char destinatie[], char data_plecare[], double pret);
int sterge_oferta_service(PtrServiceOferte ptr_service, int id_oferta);
int get_numar_oferte_service(PtrServiceOferte ptr_service);
PtrOferta* get_lista_oferte_service(PtrServiceOferte ptr_service);
int modifica_oferta_service(PtrServiceOferte ptr_service, int id_oferta, char tip[], char destinatie[], char data_plecare[], double pret);
PtrOferta* filtrare_oferte_service(PtrServiceOferte ptr_service, int *ptr_lungime_finala, char *optiune, char *string, double pret, char ordine);
void sortare_oferte_service(PtrServiceOferte ptr_service, int optiune, char ordine);
void autopopulare_service(PtrServiceOferte ptr_service);

void destructor_service(PtrServiceOferte);
#endif //LAB2_4_SERVICE_H
