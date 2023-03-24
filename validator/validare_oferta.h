//
// Created by Andrei on 10.03.2023.
//

#ifndef LAB2_4_VALIDARE_OFERTA_H
#define LAB2_4_VALIDARE_OFERTA_H

#include "../domeniu/oferta.h"

typedef struct ValidareOferta {

}ValidareOferta, *PtrValidareOferta;

PtrValidareOferta constructor_validator();
int verifica_oferta(PtrOferta oferta_candidat);
int verifica_data(char *);
int an_bisect(int );

void destructor_validator(PtrValidareOferta);
#endif //LAB2_4_VALIDARE_OFERTA_H
