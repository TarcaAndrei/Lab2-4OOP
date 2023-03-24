//
// Created by Andrei on 10.03.2023.
//

#include <assert.h>
#include <stdlib.h>
#include "teste_service.h"
#include "../repository/repository.h"
#include "../validator/validare_oferta.h"
#include "../service/service.h"

void teste_service() {
    PtrRepositoryOferte repo;
    repo = constructor_repository();
    PtrValidareOferta valid;
    valid = constructor_validator();
    PtrServiceOferte service;
    service = constructor_service(repo, valid);
    assert(get_numar_oferte_service(service) == 0);
    assert(adauga_oferta_service(service, 1, "City Break", "Timisoara", "12/04/2023", 473) == 0);
    assert(adauga_oferta_service(service, 1, "Munte", "Arad", "12/05/2023", 4735) == 2);
    assert(adauga_oferta_service(service, -1, "altcv", "", "12/05/202", -4735) == 11111);
    assert(get_numar_oferte_service(service) == 1);
    assert(adauga_oferta_service(service, 2, "Munte", "Predeal", "23/07/2023", 4839.53) == 0);
    assert(get_numar_oferte_service(service) == 2);

    assert(sterge_oferta_service(service, 5) == 2);
    assert(sterge_oferta_service(service, 2) == 1);
    assert(sterge_oferta_service(service, -2) == 0);
    assert(get_numar_oferte_service(service) == 1);

    assert(modifica_oferta_service(service, 1, "Munte", "Predeal", "23/07/2023", 4839.53) == 0);
    assert(modifica_oferta_service(service, 1, "Mare", "Predeal", "23/07/2023", 4839.53) == 0);
    assert(modifica_oferta_service(service, 1, "City Break", "Predeal", "23/07/2023", 4839.53) == 0);
    assert(modifica_oferta_service(service, 1, "altcv", "", "23/7/2023", -4839.53) == 1111);
    autopopulare_service(service);
    assert(get_numar_oferte_service(service) > 3);
    int lungime;
    PtrOferta *array_filtrare;
    array_filtrare = filtrare_oferte_service(service, &lungime, "pret", "", 2000, '+', "2023");
    free(array_filtrare);
    assert(lungime == 6);
    array_filtrare = filtrare_oferte_service(service, &lungime, "pret", "", 2000, '-', "2023");
    free(array_filtrare);
    assert(lungime == 1);
    array_filtrare = filtrare_oferte_service(service, &lungime, "destinatie", "Venus", 0, '+', "2023");
    free(array_filtrare);
    assert(lungime == 1);
    array_filtrare = filtrare_oferte_service(service, &lungime, "tip", "Mare", 2000, '-', "2023");
    free(array_filtrare);
    assert(lungime == 2);
    array_filtrare = get_lista_oferte_service(service);
    sortare_oferte_service(service,1, '+');
    assert(get_id(array_filtrare[0]) == 24);
    assert(get_id(array_filtrare[1]) == 23);
    sortare_oferte_service(service,1, '-');
    assert(get_id(array_filtrare[0]) == 25);
    assert(get_id(array_filtrare[1]) == 22);
    sortare_oferte_service(service,2, '+');
    assert(get_id(array_filtrare[0]) == 24);
    assert(get_id(array_filtrare[1]) == 21);
    sortare_oferte_service(service,2, '-');
    assert(get_id(array_filtrare[0]) == 20);
    assert(get_id(array_filtrare[1]) == 22);
    assert(modifica_oferta_service(service,-1, "\n", "\n", "\n", 0) ==10000);
    assert(modifica_oferta_service(service,100 , "\n", "\n", "\n", 0) ==2);
    assert(modifica_oferta_service(service,20 , "\n", "\n", "\n", 0) == 0);
    destructor_service(service);
}
