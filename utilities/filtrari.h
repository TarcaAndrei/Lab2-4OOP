//
// Created by Andrei on 12.03.2023.
//

#include "../domeniu/oferta.h"

#ifndef LAB2_4_FILTRARI_H
#define LAB2_4_FILTRARI_H
int filtrare_destinatie(PtrOferta *array, PtrOferta *arr_final, int lungime, char *destinatie);
int filtrare_tip(PtrOferta *array, PtrOferta *arr_final, int lungime, char *tip);
int filtrare_pret(PtrOferta *array, PtrOferta *arr_final, int lungime, double pret, int mod);
int filtrare_data(PtrOferta *array, PtrOferta *arr_final, int lungime, char* an);
#endif //LAB2_4_FILTRARI_H
