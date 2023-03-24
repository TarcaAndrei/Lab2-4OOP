//
// Created by Andrei on 09.03.2023.
//
#include <assert.h>
#include <string.h>
#include "teste_repository.h"
#include "../repository/repository.h"

void teste_repository() {
    PtrRepositoryOferte repo;
    repo = constructor_repository();
    assert(get_capacitate_maxima(repo) == 1);
    assert(get_lungime_repository(repo) == 0);
    PtrOferta of1, of2, of3;
    of1 = constructor_oferta(1, "City Break", "Timisoara", "12/04/2023", 473);
    of2 = constructor_oferta(2, "Munte", "Sinaia", "12/04/2023", 473);
    of3 = constructor_oferta(3, "Mare", "Venus", "10/10/2022", 234);
    adauga_oferta(repo,of1);
    assert(get_lungime_repository(repo) == 1);
    adauga_oferta(repo, of2);
    assert(get_lungime_repository(repo) == 2);
    sterge_oferta(repo, of1);
    assert(get_lungime_repository(repo) == 1);
    of1 = constructor_oferta(1, "City Break", "Timisoara", "12/04/2023", 473);
    assert(sterge_oferta(repo, of1) == 0);
    assert(get_id_oferta(repo,of1) == 0);
    assert(get_id_oferta(repo,of2) == 2);
    assert(get_tip_oferta(repo, of1)==NULL);
    assert(strcmp(get_tip_oferta(repo, of2), "Munte")==0);
    assert(get_destinatie_oferta(repo, of1) == NULL);
    assert(strcmp(get_destinatie_oferta(repo, of2), "Sinaia")==0);
    assert(get_data_oferta(repo, of1) == NULL);
    assert(strcmp(get_data_oferta(repo, of2), "12/04/2023")==0);
    assert(get_pret_oferta(repo,of1) == 0);
    assert(get_pret_oferta(repo,of2) == 473);
    adauga_oferta(repo, of3);

    assert(modifica_tip_oferta(repo, of1, "ceva")==0);
    assert(modifica_tip_oferta(repo, of2, "Mare")==1);
    assert(modifica_tip_oferta(repo, of3, "Mare")==1);
    assert(modifica_destinatie_oferta(repo, of1, "Iasi")==0);
    assert(modifica_destinatie_oferta(repo, of2, "Mamaia")==1);
    assert(modifica_data_oferta(repo, of1, "12/40/3924")==0);
    assert(modifica_data_oferta(repo, of2, "16/07/2023")==1);
    assert(modifica_pret_oferta(repo, of1, 473)==0);
    assert(modifica_pret_oferta(repo, of2, 473)==1);
    assert(strcmp(get_tip_oferta(repo, of2), "Mare")==0);
    assert(strcmp(get_destinatie_oferta(repo, of2), "Mamaia")==0);
    assert(strcmp(get_data_oferta(repo, of2), "16/07/2023")==0);

    assert(get_oferta_cu_id(repo, 1) == NULL);
    assert(get_oferta_cu_id(repo, 2) == of2);
    assert(get_lista_repo_oferte(repo));
    destructor_oferta(of1);
    destructor_repository(repo);
}

