//
// Created by Andrei on 10.03.2023.
//

#include <stdlib.h>
#include <string.h>
#include "validare_oferta.h"

PtrValidareOferta constructor_validator()
/**
 * functie de constructor pentru un validator
 * @return pointer catre structul de tip Validator ce urmeaza a fi dealocat
 */
{
    PtrValidareOferta validator_nou = (PtrValidareOferta) malloc(sizeof(ValidareOferta));
    return validator_nou;
}

int verifica_oferta(PtrOferta oferta_candidat)
/**
 * @param oferta_candidat oferta care urmeaza sa fie validata
 * @tparam oferta_candidat PtrOferta(pointer la oferta)
 * @return un cod de eroare format dintr-un numar abcde, unde:
 *                  daca a == 1 => "ID invalid!"
 *                  daca b == 1 => "Tip oferta invalid!"
 *                  daca c == 1 => "Destinatie invalida!"
 *                  daca d == 1 => "Data plecare invalida!"
 *                  daca e == 1 => "Pret invalid!"
 *                  daca toate sunt 0, atunci oferta este valida
 */
{
    int coduri_eroare = 0;
    if (get_id(oferta_candidat) <= 0)
        coduri_eroare += 1;
    coduri_eroare*=10;
    if (!(strcmp(get_tip(oferta_candidat), "Munte") == 0 || strcmp(get_tip(oferta_candidat), "Mare") == 0 || strcmp(get_tip(oferta_candidat), "City Break") == 0))
        coduri_eroare += 1;
    coduri_eroare*=10;
    if (strlen(get_destinatie(oferta_candidat)) <= 2)
        coduri_eroare += 1;
    coduri_eroare*=10;
    if (verifica_data(get_data_plecare(oferta_candidat)) == 0)
        coduri_eroare += 1;
    coduri_eroare*=10;
    if (get_pret(oferta_candidat) <= 0)
        coduri_eroare += 1;
    return coduri_eroare;
}

int an_bisect(int an_primit)
/**
 * verifica daca un an este bisect sau nu
 * @param an_primit intreg
 * @return  1 daca e bisect
 *          0 altfel
 */
{
    if(an_primit % 4 != 0)
        return 0;
    if(an_primit % 100 != 0)
        return 1;
    if(an_primit % 400 == 0)
        return 1;
    return 0;
}

int verifica_data(char * data_primita)
/**
 * functie de verificare validitate data primita
 * @param data_primita string in forma zz/ll/aaaa
 * @return  1 daca e valida
 *          0 altfel
 */
{
    int nr_zile[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(strlen(data_primita) != 10)
        return 0;
    if(data_primita[2] != '/' || data_primita[5] != '/')
        return 0;
    int zi, luna, an, aux;

    zi = data_primita[0] - '0';
    if(zi < 0 || zi > 9)
        return 0;
    zi *= 10;
    aux = data_primita[1] - '0';
    if(aux < 0 || aux > 9)
        return 0;
    zi += aux;

    luna = data_primita[3] - '0';
    if(luna < 0 || luna > 9)
        return 0;
    luna *= 10;
    aux = data_primita[4] - '0';
    if(aux < 0 || aux > 9)
        return 0;
    luna += aux;

    an = data_primita[6] - '0';
    if(an != 2)
        return 0;
    an *= 10;
    aux = data_primita[7] - '0';
    if(aux != 0)
        return 0;
    an += aux;
    an *= 10;
    aux = data_primita[8] - '0';
    if(aux < 2 || aux > 3)
        return 0;
    an += aux;
    an *= 10;
    aux = data_primita[9] - '0';
    if(aux < 0 || aux > 9)
        return 0;
    an += aux;

    if(an_bisect(an))
        nr_zile[2] = 29;

    if (0 >= luna || luna > 12)
        return 0;

    if (0 >= zi || zi > nr_zile[luna])
        return 0;

    return 1;
}

void destructor_validator(PtrValidareOferta ptrvalid)
/**
 * functie de destructor al validatorului
 * @param ptrvalid pointer catre structul de tip Validator ce urmeaza a fi dealocat
 */
{
    free(ptrvalid);
}

