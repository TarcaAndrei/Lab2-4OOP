//
// Created by Andrei on 10.03.2023.
//

#include <malloc.h>
#include <string.h>
#include "service.h"
#include "../utilities/filtrari.h"
#include "../utilities/sortare.h"

PtrServiceOferte constructor_service(PtrRepositoryOferte ptr_repo, PtrValidareOferta ptr_valid)
/**
 * constructorul unui strunct de tip Service
 * @param ptr_repo pointerul catre structul de tip repository
 * @param ptr_valid pointerul catre structul de tip validator
 * @return pointer catre structul service creat
 */
{
    PtrServiceOferte service_nou = (PtrServiceOferte) malloc(sizeof(ServiceOferte));
    service_nou->validator = ptr_valid;
    service_nou->repository = ptr_repo;
    return service_nou;
}

void destructor_service(PtrServiceOferte ptr_service)
/**
 * destructorul serviceului
 * @param ptr_service pointerul catre structul de tip service care urmeaza sa fie dealocat
 */
{
    destructor_repository(ptr_service->repository);
    destructor_validator(ptr_service->validator);
    free(ptr_service);
}

int adauga_oferta_service(PtrServiceOferte ptr_service, int id_oferta, char *tip, char *destinatie, char *data_plecare, double pret)
/**
 * functia de creare si adaugare in repository de oferta noua cu argumentele primite prin parametrii
 * @param ptr_service pointer catre structul de tip service cu care se lucreaza
 * @param id_oferta intreg pozitiv reprezentand id-ul viitoarei oferte
 * @param tip string nevid din multimea {Mare, Munte, City Break} reprezentand tipul viitoarei oferte
 * @param destinatie string de cel putin 2 caractere reprezentand destinatiei viitoarei oferte
 * @param data_plecare string de forma <zz/ll/aaaa> reprezentand data de inceput a viitoarei oferte
 * @param pret double pozitiv reprezentand pretul viitoarei oferte
 * @return diferite coduri de eroare
 *                  @return 0 daca oferta creata a fost adaugata cu succes in repository
 *                          2 daca oferta creata nu a fost adaugata in repository deoarece exista alta cu acelasi id
 *                          un cod de eroare format dintr-un numar abcde, unde:
 *                              daca a == 1 => "ID invalid!"
 *                              daca b == 1 => "Tip oferta invalid!"
 *                              daca c == 1 => "Destinatie invalida!"
 *                              daca d == 1 => "Data plecare invalida!"
 *                              daca e == 1 => "Pret invalid!"
 */
{
    PtrOferta oferta_noua;
    oferta_noua = constructor_oferta(id_oferta, tip, destinatie, data_plecare, pret);
    if(verifica_oferta(oferta_noua) == 0){
        if(adauga_oferta(ptr_service->repository, oferta_noua) == 0){
            return 0;
        }
        destructor_oferta(oferta_noua);
        return 2;
    }
    int cod_eroare = verifica_oferta(oferta_noua);
    destructor_oferta(oferta_noua);
    return cod_eroare;
}

int get_numar_oferte_service(PtrServiceOferte ptr_service)
/**
 * returneaza numarul lista de oferte din repository
 * @param ptr_service pointer catre structul de tip service cu care se lucreaza
 * @return numarul elementelor de tip pointeri catre structurile de tip oferta din repository
 */
{
    return get_lungime_repository(ptr_service->repository);
}

int sterge_oferta_service(PtrServiceOferte ptr_service, int id_oferta)
/**
 * functia de stergere din repository a unei oferte existente
 * @param ptr_service pointer catre structul de tip service cu care se lucreaza
 * @param id_oferta intreg pozitiv reprezentand id-ul ofertei ce urmeaza a fi stearsa
 * @return diferite coduri de eroare sau succes dupa cum urmeaza:
 *                      @return 1 daca functia a sters cu succes oferta
 *                              0 daca ID-ul este invalid
 *                              2 daca nu exista nicio oferta cu acest id in repository
 */
{
    if(id_oferta <= 0)
        return 0;
    id_oferta = (int) id_oferta;
    if(get_oferta_cu_id(ptr_service->repository, id_oferta) == NULL){
        return 2;
    }
    sterge_oferta(ptr_service->repository, get_oferta_cu_id(ptr_service->repository, id_oferta));
    return 1;
}

int modifica_oferta_service(PtrServiceOferte ptr_service, int id_oferta, char *tip, char *destinatie, char *data_plecare, double pret)
/**
 * functia de modificare din repository a unei oferte existente cu argumentele primite prin parametrii
 * @param ptr_service pointer catre structul de tip service cu care se lucreaza
 * @param id_oferta intreg pozitiv reprezentand id-ul viitoarei oferte
 * @param tip string nevid din multimea {Mare, Munte, City Break} reprezentand tipul viitoarei oferte
 * @param destinatie string de cel putin 2 caractere reprezentand destinatiei viitoarei oferte
 * @param data_plecare string de forma <zz/ll/aaaa> reprezentand data de inceput a viitoarei oferte
 * @param pret double pozitiv reprezentand pretul viitoarei oferte
 * @return diferite coduri de eroare
 *                  @return 0 daca oferta a fost modificata cu succes in repository
 *                          2 daca oferta nu a fost modificata deoarece in repository nu exista oferta id-ul primit
 *                          un cod de eroare format dintr-un numar abcde, unde:
 *                              daca a == 1 => "ID invalid!"
 *                              daca b == 1 => "Tip oferta invalid!"
 *                              daca c == 1 => "Destinatie invalida!"
 *                              daca d == 1 => "Data plecare invalida!"
 *                              daca e == 1 => "Pret invalid!"
 */
{
    int coduri_eroare = 0;
    PtrOferta ofera_modificat;
    if(id_oferta <= 0)
        coduri_eroare += 1;
    else{
        if(get_oferta_cu_id(ptr_service->repository, id_oferta) == NULL){
            return 2;
        }
    }
    coduri_eroare*=10;

    ofera_modificat = get_oferta_cu_id(ptr_service->repository, id_oferta);
    if(strcmp(tip, "\n") != 0){
        if (!(strcmp(tip, "Munte") == 0 || strcmp(tip, "Mare") == 0 || strcmp(tip, "City Break") == 0))
            coduri_eroare += 1;
    }
    coduri_eroare *= 10;
    if(strcmp(destinatie, "\n") != 0){
        if (strlen(destinatie) <= 2)
            coduri_eroare += 1;
    }
    coduri_eroare*=10;
    if(strcmp(data_plecare, "\n") != 0){
        if (verifica_data(data_plecare) == 0)
            coduri_eroare += 1;
    }
    coduri_eroare*=10;
    if(pret != 0){
        if (pret <= 0)
            coduri_eroare += 1;
    }
    if(coduri_eroare!=0)
        return coduri_eroare;
    if(strcmp(tip, "\n") != 0){
        modifica_tip_oferta(ptr_service->repository, ofera_modificat, tip);
    }
    if(strcmp(destinatie, "\n") != 0){
        modifica_destinatie_oferta(ptr_service->repository, ofera_modificat, destinatie);
    }
    if(strcmp(data_plecare, "\n") != 0){
        modifica_data_oferta(ptr_service->repository, ofera_modificat, data_plecare);
    }
    if(pret != 0){
        modifica_pret_oferta(ptr_service->repository, ofera_modificat, pret);
    }
    return 0;
}

PtrOferta *get_lista_oferte_service(PtrServiceOferte ptr_service)
/**
 * returneaza lista de oferte din repository
 * @param ptr_service pointer catre structul de tip service cu care se lucreaza
 * @return adresa listei de pointeri catre structurile de tip oferta din repository
 */
{
    return get_lista_repo_oferte(ptr_service->repository);
}

PtrOferta *filtrare_oferte_service(PtrServiceOferte ptr_service, int* ptr_lungime_finala, char *optiune, char *string, double pret, char ordine)
/**
 * functia de filtrare de oferte din repository in functie de anumiti parametrii
 * @param ptr_service pointer catre structul de tip service cu care se lucreaza
 * @param ptr_lungime_finala adresa catre intregul in care se va pune lungimea array-ului obtinut
 * @param optiune un string din multimea {destinatie, tip, pret} reprezentand criteriul dupa care se face filtrarea
 * @param string un string daca e vorba de filtrare dupa destinatie sau tip - elementul cu care vor fi comparate atributele ofertelor
 * @param pret un double daca e vorba de filtrare dupa pret
 * @param ordine 1 daca e vorba de un pret mai mare si 2 daca e vorba de un pret mai mic
 * @return adresa catre array-ul format din elementele ramase dupa aplicarea filtrului
 */
{
    int lungime = get_numar_oferte_service(ptr_service);
    int mod;
    int nr_final;
    PtrOferta *array = get_lista_oferte_service(ptr_service);
    PtrOferta *array_final = (PtrOferta*) malloc(lungime * sizeof(Oferta));
    if(strcmp(optiune, "destinatie") == 0){
        nr_final = filtrare_destinatie(array, array_final, lungime, string);
    }
    else if(strcmp(optiune, "tip") == 0) {
        nr_final = filtrare_tip(array, array_final, lungime, string);
    }
    else{
        if(ordine == '+')
            mod = 1;
        else
            mod = 2;
        nr_final = filtrare_pret(array, array_final, lungime, pret, mod);
    }
    *ptr_lungime_finala = nr_final;
    return array_final;
}

void autopopulare_service(PtrServiceOferte ptr_service) {
    adauga_oferta_service(ptr_service, 20, "Mare", "Venus", "23/07/2023", 3843.28);
    adauga_oferta_service(ptr_service, 21, "Mare", "Constanta", "18/08/2023", 4832.28);
    adauga_oferta_service(ptr_service, 22, "Munte", "Sinaia", "03/09/2023", 28742.42);
    adauga_oferta_service(ptr_service, 22, "Munte", "Predeal", "12/11/2023", 5327.58);
    adauga_oferta_service(ptr_service, 23, "City Break", "Moldova", "14/05/2023", 3443.28);
    adauga_oferta_service(ptr_service, 24, "City Break", "Banat", "12/10/2023", 1243.28);
    adauga_oferta_service(ptr_service, 25, "City Break", "Europa de Vest", "23/07/2023", 484843.8);
}

void sortare_oferte_service(PtrServiceOferte ptr_service, int optiune, char ordine) {
    PtrOferta *array = get_lista_oferte_service(ptr_service);
    int lungime = get_numar_oferte_service(ptr_service);
    if(optiune == 1){
        if(ordine == '+') {
            sortare_pret(array, lungime, 1);
            return;
        }
        sortare_pret(array, lungime, 2);
        return;
    }
    if(ordine == '+'){
        sortare_destinatie(array, lungime, 1);
        return;
    }
    sortare_destinatie(array, lungime, 2);
}

