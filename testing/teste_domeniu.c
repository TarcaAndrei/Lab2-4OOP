#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "../domeniu/oferta.h"
//
// Created by Andrei on 08.03.2023.
//

void teste_domeniu()
{
    PtrOferta of1, of2;
    of1 = constructor_oferta(1, "City Break", "Timisoara", "12/04/2023", 473);
    of2 = constructor_oferta(22, "City Break", "Oradeaa", "12/04/2023", 4734);
    assert(get_id(of1) == 1);
    assert(get_pret(of1) == 473);
    assert(strcmp(get_tip(of1), "City Break") == 0);
    assert(strcmp(get_data_plecare(of1), "12/04/2023") == 0);
    assert(strcmp(get_destinatie(of1), "Timisoara") == 0);

    set_data_plecare(of1,"13/04/2023");
    set_destinatie(of1, "Oradea");
    set_tip(of1, "Munte");
    set_pret(of1, 499);

    assert(get_pret(of1) == 499);
    assert(strcmp(get_tip(of1), "Munte") == 0);
    assert(strcmp(get_data_plecare(of1), "13/04/2023") == 0);
    assert(strcmp(get_destinatie(of1), "Oradea") == 0);
    char *afis;
    afis = afisare_oferta(of1);
    assert(strcmp(afis, "|   1    |    Munte    |       Oradea       |    13/04/2023     |   499.00   |\n") == 0);
    free(afis);
    afis = afisare_oferta(of2);
    assert(strcmp(afis, "|   22   | City Break  |      Oradeaa       |    12/04/2023     |  4734.00   |\n") == 0);
    free(afis);
    destructor_oferta(of1);
    destructor_oferta(of2);
}