#include "oferta.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
//
// Created by Andrei on 08.03.2023.
//
PtrOferta constructor_oferta(int id_oferta, char tip[], char destinatie[], char data_plecare[], double pret)
/**
 * constructorul unui struct de tip oferta cu atributele reprezentate de urmatorii parametrii
 * @param id_oferta intreg pozitiv reprezentand id-ul viitoarei oferte
 * @param tip string nevid din multimea {Mare, Munte, City Break} reprezentand tipul viitoarei oferte
 * @param destinatie string de cel putin 2 caractere reprezentand destinatiei viitoarei oferte
 * @param data_plecare string de forma <zz/ll/aaaa> reprezentand data de inceput a viitoarei oferte
 * @param pret double pozitiv reprezentand pretul viitoarei oferte
 * @return pointer catre structul format
 */
{
    PtrOferta oferta_noua = (PtrOferta) malloc(sizeof(Oferta));
    oferta_noua->id_oferta = id_oferta;
    strcpy(oferta_noua->tip, tip);
    strcpy(oferta_noua->destinatie, destinatie);
    strcpy(oferta_noua->data_plecare, data_plecare);
    oferta_noua->pret = pret;
    return oferta_noua;
}

int get_id(PtrOferta pointer_oferta)
/**
 * getter pentru id
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return un intreg reprezentand ID-ul ofertei
 */
{
    return pointer_oferta->id_oferta;
}

char* get_tip(PtrOferta pointer_oferta)
/**
 * functie de getter pentru tipul ofertei
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return string nevid din multimea {Mare, Munte, City Break} reprezentand tipul ofertei
 */
{
    return pointer_oferta->tip;
}

char* get_destinatie(PtrOferta pointer_oferta)
/**
 * functie de getter pentru destinatia ofertei
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return string de cel putin 2 caractere reprezentand destinatiei ofertei
 */
{
    return pointer_oferta->destinatie;
}

char* get_data_plecare(PtrOferta pointer_oferta)
/**
 * functie de getter pentru data de plecare a ofertei
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return string de forma <zz/ll/aaaa> reprezentand data de inceput a ofertei
 */
{
    return pointer_oferta->data_plecare;
}

double get_pret(PtrOferta pointer_oferta)
/**
 * functie de getter pentru pretul ofertei
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @return double pozitiv reprezentand pretul ofertei
 */
{
    return pointer_oferta->pret;
}

void set_tip(PtrOferta pointer_oferta, char *tip_nou)
/**
 * functie de setter pentru tipul unei oferte
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param tip_nou string nevid din multimea {Mare, Munte, City Break} reprezentand noul tip al ofertei
 */
{
    strcpy(pointer_oferta->tip, tip_nou);
}

void set_destinatie(PtrOferta pointer_oferta, char *destinatie_noua)
/**
 * functie de setter pentru desitnatie pentru o oferta
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param destinatie_noua string de cel putin 2 caractere reprezentand noua destinatie
 */
{
    strcpy(pointer_oferta->destinatie, destinatie_noua);
}

void set_data_plecare(PtrOferta pointer_oferta, char *data_plecare_noua)
/**
 * functie de setter pentru data de plecare a unei oferte
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param data_plecare_noua string de forma <zz/ll/aaaa> reprezentand noua data
 */
{
    strcpy(pointer_oferta->data_plecare, data_plecare_noua);
}

void set_pret(PtrOferta pointer_oferta, double pret_nou)
/**
 * functie de setter de pret a unei oferte
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 * @param pret_nou double pozitiv reprezentand noul pret al ofertei
 */
{
    pointer_oferta->pret = pret_nou;
}

int nr_cifre_ceva(int n)
/**
 * afla numarul de cifre ale nr-ul n primit
 * @param n numar intreg
 * @return numarul de cifre
 */
{
    int i = 0;
    while(n > 0){
        i++;
        n/=10;
    }
    return i;
}

char *afisare_oferta(PtrOferta pointer_oferta)
/**
 * functia de afisare a unei oferte
 * @param pointer_oferta pointer catre structul de tip oferta cu care se lucreaza
 */
{
    char *printare;     // nu da return la asta ca asa o zis istvan
    printare = (char *)malloc(110 * sizeof(char));
    char pret_str[10];
    char id_str[10];
    int cifre_id;
    int nr_spatiu_1;
    int nr_spatiu_2;
    int i;
    // pentru ID am 8
    // pnetru TIP am 13
    // pentru Destinatie am 20
    // pentru Data de plecare am 19
    // pentru pret am 12
    sprintf(id_str, "%d", pointer_oferta->id_oferta);
    sprintf(pret_str, "%.2f", pointer_oferta->pret);
    cifre_id = nr_cifre_ceva(pointer_oferta->id_oferta);
    cifre_id = 8 - cifre_id;
    if(cifre_id % 2 == 0){
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = cifre_id/2;
    } else{
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = nr_spatiu_1 + 1;
    }
    strcpy(printare, "|");
    for(i = 1; i<=nr_spatiu_1; i++)
        strcat(printare, " ");
    strcat(printare, id_str);
    for(i = 1; i<=nr_spatiu_2; i++)
        strcat(printare, " ");

    strcat(printare, "|");

    cifre_id = (int)strlen(pointer_oferta->tip);
    cifre_id = 13 - cifre_id;
    if(cifre_id % 2 == 0){
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = cifre_id/2;
    } else{
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = nr_spatiu_1 + 1;
    }

    for(i = 1; i<=nr_spatiu_1; i++)
        strcat(printare, " ");
    strcat(printare, pointer_oferta->tip);
    for(i = 1; i<=nr_spatiu_2; i++)
        strcat(printare, " ");
    strcat(printare, "|");

    cifre_id = (int)strlen(pointer_oferta->destinatie);
    cifre_id = 20 - cifre_id;
    if(cifre_id % 2 == 0){
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = cifre_id/2;
    } else{
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = nr_spatiu_1 + 1;
    }
    for(i = 1; i<=nr_spatiu_1; i++)
        strcat(printare, " ");
    strcat(printare, pointer_oferta->destinatie);
    for(i = 1; i<=nr_spatiu_2; i++)
        strcat(printare, " ");
    strcat(printare, "|");

    cifre_id = (int)strlen(pointer_oferta->data_plecare);
    cifre_id = 19 - cifre_id;
    nr_spatiu_1 = cifre_id/2;
    nr_spatiu_2 = nr_spatiu_1 + 1;
    for(i = 1; i<=nr_spatiu_1; i++)
        strcat(printare, " ");
    strcat(printare, pointer_oferta->data_plecare);
    for(i = 1; i<=nr_spatiu_2; i++)
        strcat(printare, " ");
    strcat(printare, "|");

    cifre_id = (int)strlen(pret_str);
    cifre_id = 12 - cifre_id;
    if(cifre_id % 2 == 0){
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = cifre_id/2;
    } else{
        nr_spatiu_1 = cifre_id/2;
        nr_spatiu_2 = nr_spatiu_1 + 1;
    }
    for(i = 1; i<=nr_spatiu_1; i++)
        strcat(printare, " ");
    strcat(printare, pret_str);
    for(i = 1; i<=nr_spatiu_2; i++)
        strcat(printare, " ");
    strcat(printare, "|\n");
    return printare;
}

void destructor_oferta(PtrOferta pointer_oferta) {
    free(pointer_oferta);
}


