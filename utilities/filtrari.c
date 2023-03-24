//
// Created by Andrei on 12.03.2023.
//

#include <string.h>
#include "filtrari.h"

int filtrare_destinatie(PtrOferta *array, PtrOferta *arr_final, int lungime, char *destinatie)
{
    int j;
    j = 0;
    for(int i=0; i<lungime; i++)
    {
        if(strcmp(get_destinatie(array[i]), destinatie) == 0){
            arr_final[j] = array[i];
            j++;
        }
    }
    return j;
}

int filtrare_tip(PtrOferta *array, PtrOferta *arr_final, int lungime, char *tip) {
    int j;
    j = 0;
    for(int i=0; i<lungime; i++){
        if(strcmp(get_tip(array[i]), tip) == 0){
            arr_final[j] = array[i];
            j++;
        }
    }
    return j;
}

int filtrare_pret(PtrOferta *array, PtrOferta *arr_final, int lungime, double pret, int mod) {
    int j;
    j = 0;
    if(mod == 1){
        for(int i = 0; i<lungime; i++){
            if(get_pret(array[i]) >= pret){
                arr_final[j] = array[i];
                j++;
            }
        }
    } else{
        for(int i = 0; i<lungime; i++){
            if(get_pret(array[i]) <= pret){
                arr_final[j] = array[i];
                j++;
            }
        }
    }
    return j;
}

int filtrare_data(PtrOferta *array, PtrOferta *arr_final, int lungime, char* an){
    int j = 0;
    for(int i = 0; i < lungime; ++i){
        if(strcmp(get_data_plecare(array[i]) + 6, an) == 0){
            arr_final[j] = array[i];
            j++;
        }
    }

    return j;
}
