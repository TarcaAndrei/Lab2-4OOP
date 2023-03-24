//
// Created by Andrei on 10.03.2023.
//

#ifndef LAB2_4_CONSOLA_H
#define LAB2_4_CONSOLA_H

#include "../service/service.h"
#include "../Undo/undo.h"

typedef struct Consola{
    PtrServiceOferte service;
}Consola, *PtrConsola;

PtrConsola constructor_consola(PtrServiceOferte ptr_service);

int run(PtrConsola ptr_consola);

void afisare_oferte_consola(PtrConsola ptr_consola);
void adaugare_oferta_consola(struct undo* u, PtrConsola ptr_consola);
void stergere_oferta_consola(struct undo* u, PtrConsola ptr_consola);
void afisare_numar_oferte_consola(PtrConsola ptr_consola);
void modificare_oferta_consola(struct undo* u, PtrConsola ptr_cnsola);
void ordonare_oferta_consola(PtrConsola ptr_consola, int optiune);
void filtrare_oferta_consola(PtrConsola ptr_consola);
void autopopulare(PtrConsola ptr_consola);

void destructor_consola(PtrConsola ptr_consola);
#endif //LAB2_4_CONSOLA_H
