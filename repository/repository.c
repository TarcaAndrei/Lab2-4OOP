//
// Created by Andrei on 09.03.2023.
//
#include <stdlib.h>
#include "repository.h"

PtrRepositoryOferte constructor_repository()
/**
 * constructorul unui strunct de tip Repository
 * @return pointer catre structul repository creat
 */
{
    PtrRepositoryOferte repository_nou = (PtrRepositoryOferte) malloc(sizeof(RepositoryOferte));
    repository_nou->lungime = 0;
    repository_nou->capacitate_maxima = 1;
    repository_nou->lista_oferte = (PtrOferta *) malloc(repository_nou->capacitate_maxima *sizeof(PtrOferta));
    return repository_nou;
}

int adauga_oferta(PtrRepositoryOferte pointer_repository, PtrOferta ofera_noua)
/**
 *
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param ofera_noua pointer catre structul oferta care urmeaza sa fie adaugat
 * @return coduri de eroare sau succes  1 daca exista deja oferta
 *                                      0 daca s-a adaugat cu succes oferta
 */
{
    if(pointer_repository->lungime == pointer_repository->capacitate_maxima){
        realocare(pointer_repository);
    }
    for(int i = 0; i<pointer_repository->lungime; i++){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(ofera_noua))
            return 1;
    }
    pointer_repository->lista_oferte[pointer_repository->lungime] = ofera_noua; // si daca o am deja?!
    pointer_repository->lungime++;
    return 0;
}


int get_lungime_repository(PtrRepositoryOferte pointer_repository)
/**
 * returneaza numarul lista de oferte din repository
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @return numarul elementelor de tip pointeri catre structurile de tip oferta din repository
 */
{
    return pointer_repository->lungime;
}

int get_capacitate_maxima(PtrRepositoryOferte pointer_repository)
/**
 * returneaza capacitatea maxima a vectorului dinamic din repository
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @return capacitatea maxima
 */
{
    return pointer_repository->capacitate_maxima;
}

void realocare(PtrRepositoryOferte pointer_repository)
/**
 * functie de realocare -> mareste capacitatea maxima a vectorului la 2 * dimensiunea initiala
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 */
{
    PtrOferta *lista_noua;
    lista_noua = (PtrOferta *) malloc(2 * pointer_repository->capacitate_maxima *sizeof(PtrOferta));
    for(int i = 0; i < pointer_repository->lungime; i++){
        lista_noua[i] = pointer_repository->lista_oferte[i];
    }
    free(pointer_repository->lista_oferte);
    pointer_repository->lista_oferte = lista_noua;
    pointer_repository->capacitate_maxima = 2 * pointer_repository->capacitate_maxima;
}

int sterge_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta_de_sters)
/**
 *
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param oferta_de_sters pointer catre oferta ce urmeaza sa fie eliminata
 * @return  diferite coduri de eroare sau succes dupa cum urmeaza:
 *                      @return 1 daca functia a sters cu succes oferta
 *                              0 daca ID-ul ofertei nu exista in repository
 */
{
    int gasit = -1;
    for(int i = 0; i < pointer_repository->lungime; i++){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta_de_sters)){
            gasit = i;
            break;
        }
    }
    if(gasit == -1){
        return 0;
    }
    destructor_oferta(pointer_repository->lista_oferte[gasit]);
    pointer_repository->lungime--;
    for(int i = gasit; i<pointer_repository->lungime; i++){
        pointer_repository->lista_oferte[i] = pointer_repository->lista_oferte[i+1];
    }
    return 1;
}

int get_id_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta)
/**
 * functie de getter pentru id-ul unei oferte din repository
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param oferta pointer catre oferta
 * @return  ID-ul ofertei daca o gaseste in repo
 *          0 altfel
 */
{
    int i = 0;
    while(i<pointer_repository->lungime){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            return get_id(pointer_repository->lista_oferte[i]);
        }
        i++;
    }
    return 0;
}

char *get_tip_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta)
/**
 * functie de getter pentru tipul ofertei
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return string nevid din multimea {Mare, Munte, City Break} reprezentand tipul ofertei
 *          NULL daca nu exista oferta in repository
 */
{
    int i = 0;
    while(i<pointer_repository->lungime){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            return get_tip(pointer_repository->lista_oferte[i]);
        }
        i++;
    }
    return NULL;
}

char *get_destinatie_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta)
/**
 * functie de getter pentru destinatia ofertei
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return string de cel putin 2 caractere reprezentand destinatiei ofertei
 *          NULL daca nu exista oferta in repository
 */
{
    int i = 0;
    while(i<pointer_repository->lungime){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            return get_destinatie(pointer_repository->lista_oferte[i]);
        }
        i++;
    }
    return NULL;
}

char *get_data_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta)
/**
 * functie de getter pentru data de plecare a ofertei
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return string de forma <zz/ll/aaaa> reprezentand data de inceput a ofertei
 *          NULL daca nu exista oferta in repository
 */
{
    int i = 0;
    while(i<pointer_repository->lungime){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            return get_data_plecare(pointer_repository->lista_oferte[i]);
        }
        i++;
    }
    return NULL;
}

double get_pret_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta)
/**
 * functie de getter pentru pretul ofertei
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return  double pozitiv reprezentand pretul ofertei
 *          0 daca nu exista oferta in repository
 */
{
    int i = 0;
    while(i<pointer_repository->lungime){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            return get_pret(pointer_repository->lista_oferte[i]);
        }
        i++;
    }
    return 0;
}

void destructor_repository(PtrRepositoryOferte pointer_repository)
/**
 * destructorul repositoryului
 * @param ptr_service pointerul catre structul de tip repository care urmeaza sa fie dealocat
 */
{
    for(int i=0; i<pointer_repository->lungime; i++){
        destructor_oferta(pointer_repository->lista_oferte[i]);
    }
    free(pointer_repository->lista_oferte);
    free(pointer_repository);
}

int modifica_tip_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta, char *tip_nou)
/**
 * functie de setter pentru tipul unei oferte
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param tip_nou string nevid din multimea {Mare, Munte, City Break} reprezentand noul tip al ofertei
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @return coduri de succes sau eroare
 *              1 daca opertatia s-a desfasurat
 *              0 daca nu exista nicio oferta cu acelasi id cu oferta primita
 */
{
    int i = 0;
    int gasit = 0;
    while(i<pointer_repository->lungime && !gasit){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            gasit = 1;
            set_tip(pointer_repository->lista_oferte[i], tip_nou);
        }
        i++;
    }
    return gasit;
}

int modifica_destinatie_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta, char *destinatie_noua)
/**
 * functie de setter pentru desitnatie pentru o oferta
 * @param oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param destinatie_noua string de cel putin 2 caractere reprezentand noua destinatie
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @return coduri de succes sau eroare
 *              1 daca opertatia s-a desfasurat
 *              0 daca nu exista nicio oferta cu acelasi id cu oferta primita
 */
{
    int i = 0;
    int gasit = 0;
    while(i<pointer_repository->lungime && !gasit){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            gasit = 1;
            set_destinatie(pointer_repository->lista_oferte[i], destinatie_noua);
        }
        i++;
    }
    return gasit;
}

int modifica_pret_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta, double pret_nou)
/**
 * functie de setter de pret a unei oferte
 * @param oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param pret_nou double pozitiv reprezentand noul pret al ofertei
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @return coduri de succes sau eroare
 *              1 daca opertatia s-a desfasurat
 *              0 daca nu exista nicio oferta cu acelasi id cu oferta primita
 */
{
    int i = 0;
    int gasit = 0;
    while(i<pointer_repository->lungime && !gasit){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            gasit = 1;
            set_pret(pointer_repository->lista_oferte[i], pret_nou);
        }
        i++;
    }
    return gasit;
}

int modifica_data_oferta(PtrRepositoryOferte pointer_repository, PtrOferta oferta, char *data_noua)
/**
 * functie de setter pentru data de plecare a unei oferte
 * @param oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param data_plecare_noua string de forma <zz/ll/aaaa> reprezentand noua data
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @return coduri de succes sau eroare
 *              1 daca opertatia s-a desfasurat
 *              0 daca nu exista nicio oferta cu acelasi id cu oferta primita
 */
{
    int i = 0;
    int gasit = 0;
    while(i<pointer_repository->lungime && !gasit){
        if(get_id(pointer_repository->lista_oferte[i]) == get_id(oferta)){
            gasit = 1;
            set_data_plecare(pointer_repository->lista_oferte[i], data_noua);
        }
        i++;
    }
    return gasit;
}

PtrOferta get_oferta_cu_id(PtrRepositoryOferte pointer_repository, int id_oferta)
/**
 * returneaza oferta cu id-ul primit
 * @param pointer_repository pointer catre structul de tip repository cu care se lucreaza
 * @param id_oferta ID-ul ofertei, intreg pozitiv
 * @return returneaza oferta cu id-ul primit
 *          NULL daca nu exista nicio oferta cu respectivul id
 */
{
    int i = 0;
    while(i<pointer_repository->lungime){
        if(get_id(pointer_repository->lista_oferte[i]) == id_oferta){
            return pointer_repository->lista_oferte[i];
        }
        i++;
    }
    return NULL;
}

PtrOferta* get_lista_repo_oferte(PtrRepositoryOferte ptr_repository)
/**
 * returneaza pointerul catre array-ul de pointeri catre structuri de tip oferta din repository
 * @param ptr_repository pointer catre structul de tip repository cu care se lucreaza
 * @return pointerul catre array-ul de pointeri catre structuri de tip oferta din repository
 */
{
    return ptr_repository->lista_oferte;
}




