#pragma clang diagnostic push
#pragma ide diagnostic ignored "bugprone-branch-clone"
//
// Created by Andrei on 10.03.2023.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "consola.h"

PtrConsola constructor_consola(PtrServiceOferte ptr_service)
/**
 * constructorul unui struct de tip Consola
 * @param ptr_service pointerul catre structul de tip service
 * @return pointer catre consola creata
 */
{
    PtrConsola consola_noua = (PtrConsola) malloc(sizeof(Consola));
    consola_noua->service = ptr_service;
    return consola_noua;
}

int run(PtrConsola ptr_consola)
/**
 * functia principala de run care contine loopul infinit si meniul
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 * @return codul 1 daca totul a fost efectuat cu succes - returneaza doar cand aplicatia esta inchisa
 */
{
    int primul_undo = 0;
    printf("Salut,\nBine ai venit la agentia de turism!\n");
    struct undo* u = initializare_undo();
    while(1){
        char comanda_brut[10];
        char comanda;
        {
            printf("\n");
            printf("Selecteaza una dintre optiunile de mai jos:\n");
            printf("1. Afisare oferte de calatorie.\n");
            printf("2. Afisare numar de oferte de calatorie\n");
            printf("3. Adauga oferta de calatorie noua.\n");
            printf("4. Modifica oferta de calatorie.\n");
            printf("5. Sterge oferta de calatorie.\n");
            printf("6. Vizualizare oferte ordonate dupa pret.\n");
            printf("7. Vizualizare oferte ordonate dupa destinatie.\n");
            printf("8. Vizualizare oferte filtrate.\n");
            printf("9. Undo.\n");
            printf("t. Inchidere aplicatie.\n");
            printf("a. Autopopulare.\n");
        }
        printf(">>>");
        fflush(stdout);
        fgets(comanda_brut, 5, stdin);
        comanda = comanda_brut[0];
        switch (comanda) {
            case '1':
                afisare_oferte_consola(ptr_consola);
                break;
            case '2':
                afisare_numar_oferte_consola(ptr_consola);
                break;
            case '3':
                adaugare_oferta_consola(u, ptr_consola);
                break;
            case '4':
                modificare_oferta_consola(u, ptr_consola);
                break;
            case '5':
                stergere_oferta_consola(u, ptr_consola);
                break;
            case '6':
                ordonare_oferta_consola(ptr_consola, 1);
                break;
            case '7':
                ordonare_oferta_consola(ptr_consola, 2);
                break;
            case '8':
                filtrare_oferta_consola(ptr_consola);
                break;
            case 'a':
                autopopulare(ptr_consola);
                break;
            case '\n':
                break;
            case '9':
                if(primul_undo == 0){
                    destructor_repository(ptr_consola->service->repository);
                    primul_undo = 1;
                }
                ptr_consola -> service -> repository = undo(u, ptr_consola ->service -> repository);
                break;
            case 't':
                if(primul_undo == 0){
                    destructor_repository(ptr_consola->service->repository);
                    primul_undo = 1;
                }
                distrugere_undo(u);
                return 0;
            case 'q':
                if(primul_undo == 0){
                    destructor_repository(ptr_consola->service->repository);
                    primul_undo = 1;
                }
                distrugere_undo(u);
                return 1;
            case 'Q':
                if(primul_undo == 0){
                    destructor_repository(ptr_consola->service->repository);
                    primul_undo = 1;
                }
                distrugere_undo(u);
                return 1;
            default:
                printf("Comanda invalida!\n");
                //distrugere_undo(u);
                break;
        }
    }
}

void destructor_consola(PtrConsola ptr_consola)
/**
 * destructorul consolei
 * @param ptr_consola pointerul catre structul de tip consola care urmeaza sa fie dealocat
 */
{
    destructor_service(ptr_consola->service);
    free(ptr_consola);
}

void afisare_oferte_consola(PtrConsola ptr_consola)
/**
 * functia de printare oferte disponibile (salvate deja)
 * afiseaza un mesaj specific daca nu exista nicio oferta
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 */
{
    if (get_numar_oferte_service(ptr_consola->service) == 0){
        printf("Lista de oferte este vida!\n");
        return;
    }
    int numar_oferte = get_numar_oferte_service(ptr_consola->service);
    printf("+");
    for(int j=0; j<8; j++)
        printf("-");
    printf("+");
    for(int j=0; j<13; j++)
        printf("-");
    printf("+");
    for(int j=0; j<20; j++)
        printf("-");
    printf("+");
    for(int j=0; j<19; j++)
        printf("-");
    printf("+");
    for(int j=0; j<12; j++)
        printf("-");
    printf("+");
    printf("\n");
    printf("|");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("ID");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("TIP");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("DESTINATIE");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<2; j++)
        printf(" ");
    printf("DATA DE PLECARE");
    for(int j=0; j<2; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("PRETUL");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("|\n");
    printf("+");
    for(int j=0; j<8; j++)
        printf("-");
    printf("+");
    for(int j=0; j<13; j++)
        printf("-");
    printf("+");
    for(int j=0; j<20; j++)
        printf("-");
    printf("+");
    for(int j=0; j<19; j++)
        printf("-");
    printf("+");
    for(int j=0; j<12; j++)
        printf("-");
    printf("+");
    printf("\n");
    // pentru ID am 8
    // pnetru TIP am 13
    // pentru Destinatie am 20
    // pentru Data de plecare am 19
    // pentru pret am 12
    for(int i = 0; i<numar_oferte; i++)
    {
        char* afisarea_ofertei;
        afisarea_ofertei = afisare_oferta(get_lista_oferte_service(ptr_consola->service)[i]);
        printf("%s", afisarea_ofertei);
        free(afisarea_ofertei);
        printf("+");
        for(int j=0; j<8; j++)
            printf("-");
        printf("+");
        for(int j=0; j<13; j++)
            printf("-");
        printf("+");
        for(int j=0; j<20; j++)
            printf("-");
        printf("+");
        for(int j=0; j<19; j++)
            printf("-");
        printf("+");
        for(int j=0; j<12; j++)
            printf("-");
        printf("+");
        printf("\n");
    }
}

void copiere_buffer(char buff[], char dest[])
/**
 * functia de copiere si 'strip' al bufferului citit in alt string destinatie
 * @param buff string - buffer
 * @param dest string - buff 'strip-uit' - fara caracterele '\n' si ' ' de la final
 */
{
    int j = 0;
    unsigned long i = strlen(buff) - 1;
    unsigned long k;
    int ok = 1;
    while(i > 0 && ok){
        if(buff[i] == '\n' || buff[i] == ' '){
            i--;
        }
        else{
            ok = 0;
        }
    }
    k = i;
    for(i = 0; i <= k; i++){
        dest[j] = buff[i];
        j++;
    }
    dest[j] = '\0';
}

int nr_cifre(long n)
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

void adaugare_oferta_consola(struct undo* u, PtrConsola ptr_consola)
/**
 * functia de adaugare de oferta noua
 * citeste tot ce are nevoie pentru a crea un struct de tip oferta
 * returneaza mesaje specifice in caz de succes sau insucces, impreuna cu ceea ce a provocat eroarea
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 */
{
    char buffer[30];
    int id_oferta;
    char tip[20];
    char destinatie[30];
    char data_plecare[15];
    double pret;
    char interm[20];
    int cod_eroare;
    printf("ID:");
    fflush(stdout);
    fgets(buffer, 10, stdin);
    copiere_buffer(buffer, interm);
    id_oferta = (int)strtol(interm, NULL, 10);
    //id_oferta = atoi(interm);   // totusi mai bine cu transformare =))
    if(nr_cifre(id_oferta) != strlen(interm)){
        id_oferta = -1;
    }
    printf("Tipul(Mare/Munte/City Break):");
    fflush(stdout);
    fgets(buffer, 20, stdin);
    copiere_buffer(buffer, tip);
    printf("Destinatie:");
    fflush(stdout);
    fgets(buffer, 20, stdin);
    copiere_buffer(buffer, destinatie);
    printf("Data in format <zz/ll/aaaa>:");
    fflush(stdout);
    fgets(buffer, 15, stdin);
    copiere_buffer(buffer, data_plecare);
    printf("Pretul ofertei:");
    fflush(stdout);
    fgets(buffer, 10, stdin);
    pret = strtod(buffer, NULL);
    //pret = atof(buffer);
    deepcopy(u, ptr_consola ->service -> repository);
    cod_eroare = adauga_oferta_service(ptr_consola->service,id_oferta, tip, destinatie, data_plecare, pret);
    if(cod_eroare == 0){
        printf("Oferta adaugata cu succes!\n");
        //fflush(stdout);
        return;
    }
    if(cod_eroare == 2){
        printf("Oferta deja prezenta in repository!\n");
        fflush(stdout);
        u ->length--;
        return;
    }
    int ok = 0;
    if(cod_eroare / 10000 == 1){
        printf("ID-ul este invalid!\n");
        cod_eroare = cod_eroare - 10000;
        ok = 1;
    }
    if(cod_eroare / 1000 == 1){
        printf("Tip oferta invalid!\n");
        cod_eroare = cod_eroare - 1000;
        ok = 1;
    }
    if(cod_eroare / 100 == 1){
        printf("Destinatie invalida!\n");
        cod_eroare = cod_eroare - 100;
        ok = 1;
    }
    if(cod_eroare / 10 == 1){
        printf("Data de plecare este invalida!\n");
        cod_eroare = cod_eroare - 10;
        ok = 1;
    }
    if(cod_eroare == 1){
        printf("Pretul este invalid!\n");
        ok = 1;
    }
    if(ok){
        u -> length--;
    }
    fflush(stdout);
}

void stergere_oferta_consola(struct undo* u, PtrConsola ptr_consola)
/**
 * functia de adaugare de oferta noua
 * citeste tot ce are nevoie pentru a sterge un struct de tip oferta
 * returneaza mesaje specifice in caz de succes sau insucces, impreuna cu ceea ce a provocat eroarea
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 */
{
    char buffer[30];
    int id_oferta;
    char interm[20];
    int cod_eroare;
    printf("Introduceti ID-ul ofertei:");
    fflush(stdout);
    fgets(buffer, 10, stdin);
    copiere_buffer(buffer, interm);
    //id_oferta = atoi(interm);   // totusi mai bine cu transformare =))
    id_oferta = (int)strtol(interm, NULL, 10);
    if(nr_cifre(id_oferta) != strlen(interm)){
        id_oferta = -1;
    }
    deepcopy(u, ptr_consola -> service -> repository);
    cod_eroare = sterge_oferta_service(ptr_consola->service, id_oferta);
    if(cod_eroare == 2){
        printf("Nu exista nicio oferta cu acest ID!\n");
        u ->length--;
        fflush(stdout);
        return;
    }
    if(cod_eroare == 0){
        printf("ID invalid!\n");
        u -> length--;
        fflush(stdout);
        return;
    }
    printf("Oferta stersa cu succes!\n");
    fflush(stdout);
}

void afisare_numar_oferte_consola(PtrConsola ptr_consola)
/**
 * functia de afisare al numarului de oferte din memorie
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 */
{
    int numar_oferte;
    numar_oferte = get_numar_oferte_service(ptr_consola->service);
    printf("Numarul de oferte este: %d\n", numar_oferte);
}

void modificare_oferta_consola(struct undo* u, PtrConsola ptr_consola)
/**
 * functia de modificare a unui struct de tip oferta aflat deja in memorie
 * citeste tot ce are nevoie pentru a modifica un struct de tip oferta
 * returneaza mesaje specifice in caz de succes sau insucces, impreuna cu ceea ce a provocat eroarea
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 */
{
    char buffer[30];
    int id_oferta;
    char tip[20];
    char destinatie[30];
    char data_plecare[15];
    double pret;
    char interm[20];
    int cod_eroare;
    printf("Introduceti ID-ul ofertei:");
    fflush(stdout);
    fgets(buffer, 10, stdin);
    copiere_buffer(buffer, interm);
    id_oferta = (int)strtol(interm, NULL, 10);
    //id_oferta = atoi(interm);   // totusi mai bine cu transformare =))
    if(nr_cifre(id_oferta) != strlen(interm)){
        id_oferta = -1;
    }
    printf("Daca nu doriti sa modificati respectivul aspect apasati 'Enter'\n");
    printf("Tipul (Mare/Munte/City Break):");
    fflush(stdout);
    fgets(buffer, 20, stdin);
    copiere_buffer(buffer, tip);
    printf("Destinatia:");
    fflush(stdout);
    fgets(buffer, 20, stdin);
    copiere_buffer(buffer, destinatie);
    printf("Data in format <zz/ll/aaaa>:");
    fflush(stdout);
    fgets(buffer, 15, stdin);
    copiere_buffer(buffer, data_plecare);
    printf("Pretul ofertei:");
    fflush(stdout);
    fgets(buffer, 10, stdin);
    pret = strtod(buffer, NULL);
    //pret = atof(buffer);
    deepcopy(u, ptr_consola -> service -> repository);
    cod_eroare = modifica_oferta_service(ptr_consola->service,id_oferta, tip, destinatie, data_plecare, pret);
    if(cod_eroare == 0){
        printf("Oferta modificata cu succes!\n");
        fflush(stdout);
        return;
    }
    if(cod_eroare == 2){
        printf("Oferta nu este prezenta in repository!\n");
        fflush(stdout);
        u -> length--;
        return;
    }
    int ok = 0;
    if(cod_eroare / 10000 == 1){
        printf("ID-ul este invalid!\n");
        cod_eroare = cod_eroare - 10000;
        ok = 1;
    }
    if(cod_eroare / 1000 == 1){
        printf("Tip oferta invalid!\n");
        cod_eroare = cod_eroare - 1000;
        ok = 1;
    }
    if(cod_eroare / 100 == 1){
        printf("Destinatie invalida!\n");
        cod_eroare = cod_eroare - 100;
        ok = 1;
    }
    if(cod_eroare / 10 == 1){
        printf("Data de plecare este invalida!\n");
        cod_eroare = cod_eroare - 10;
        ok = 1;
    }
    if(cod_eroare == 1){
        printf("Pretul este invalid!\n");
        ok = 1;
    }
    if(ok){
        u -> length--;
    }
    fflush(stdout);
}

void ordonare_oferta_consola(PtrConsola ptr_consola, int optiune)
/**
 * functia de ordonare a ofertelor din memorie in functie de anumite criterii
 * dupa ordonare, afiseaza toate ofertele disponibile
 * sunt disponibile atat sortari in ordine crescatoare, cat si in ordine descrescatoare,
 * in functie de ceea ce se citeste dupa promt + / -
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 * @param optiune intreg care reprezinta criteriul dupa care se face sortarea
 *          optiune = 1 => dupa pret
 *          optiune = 2 => dupa destinatie
 */
{
    char ordine;
    char altcv[20];
    if(optiune == 1){
        printf("Introdu modul in care sa fie ordonate(+ pentru crescator sau - pentru descrescator:");
        fflush(stdout);
        scanf("%c", &ordine);
        printf("\n");
        fgets(altcv, 14, stdin);
        if(ordine == '+')
            sortare_oferte_service(ptr_consola->service,optiune, ordine);
        else if(ordine == '-')
            sortare_oferte_service(ptr_consola->service,optiune, ordine);
        else{
            printf("Nu ai selectat un mod posibil!\n");
            return;
        }
    }
    else{
        printf("Introdu modul in care sa fie ordonate(+ pentru crescator sau - pentru descrescator:");
        fflush(stdout);
        scanf("%c", &ordine);
        fgets(altcv, 14, stdin);
        printf("\n");
        if(ordine == '+')
            sortare_oferte_service(ptr_consola->service,optiune, ordine);
        else if(ordine == '-')
            sortare_oferte_service(ptr_consola->service,optiune, ordine);
        else{
            printf("Nu ai selectat un mod posibil!\n");
            return;
        }
    }
    afisare_oferte_consola(ptr_consola);
    fflush(stdout);
}

void filtrare_oferta_consola(PtrConsola ptr_consola)
/**
 * functia de filtrare a ofertelor din memorie in functie de anumite criterii
 * toate se citesc de la tastatura urmand ceea ce se cere
 * dupa, se afiseaza ofertele ramase
 * in caz de erori, se vor afisa mesaje specifice
 * @param ptr_consola pointer spre structul de tip consola cu care se lucreaza
 */
{
    printf("Selecteaza criteriul dupa care se va face filtrarea:\n");
    printf("destinatie/tip/pret/data:");
    PtrOferta *array_final;
    char buffer[25];
    char ordine = 0;
    char optiune[20];
    optiune[0] = '\0';
    char string[20];
    string[0] = '\0';
    char an[20];
    an[0] = '\0';
    double pret = 0;
    int nr_elemente;
    int lungime_finala;
    fgets(buffer, 18, stdin);
    copiere_buffer(buffer, optiune);
    if(strcmp(optiune, "destinatie") == 0){
        printf("Introdu destinatia dupa care sa cautam oferte:");
        fgets(buffer, 25, stdin);
        copiere_buffer(buffer, string);
        if(strlen(string) < 2){
            printf("Destinatie invalida!\n");
            return;
        }
    }
    else if(strcmp(optiune, "tip") == 0){
        printf("Introdu tipul dupa care sa cautam oferte:");
        fgets(buffer, 25, stdin);
        copiere_buffer(buffer, string);
        if(strlen(string) < 2){
            printf("Tip invalid!\n");
            return;
        }
    }
    else if(strcmp(optiune, "data") == 0){
        printf("Introdu anul dupa care sa cautam oferte:");
        fgets(buffer, 25, stdin);
        copiere_buffer(buffer, an);
        if(strlen(an) < 4){
            printf("An invalid!\n");
            return;
        }
    }
    else if(strcmp(optiune, "pret") == 0){
        printf("Introdu pretul dupa care sa cautam oferte:");
        fgets(buffer, 25, stdin);
        copiere_buffer(buffer, string);
        pret = strtod(string, NULL);
        //pret = atof(string);
        if(pret <= 0){
            printf("Pret invalid!\n");
            return;
        }
        printf("Introdu '+' daca vrei oferte cu pretul mai mare sau egal cu cel introdus\n");
        printf("Sau '-' daca vrei oferte cu pretul mai mic sau egal cu cel introdus\n");
        fgets(buffer, 5, stdin);
        ordine = buffer[0];
        if(!(ordine == '+' || ordine == '-')){
            printf("Nu ai introdus o optiune posibila!\n");
            return;
        }
    }
    else{
        printf("Nu ai introdus o optiune posibila!\n");
        return;
    }
    array_final = filtrare_oferte_service(ptr_consola->service, &lungime_finala, optiune, string, pret, ordine, an);
    nr_elemente = lungime_finala;
    if(nr_elemente == 0)
    {
        printf("Nu a ramas nicio oferta disponibila!\n");
        return;
    }
    printf("Ofertele sunt:\n");
    printf("+");
    for(int j=0; j<8; j++)
        printf("-");
    printf("+");
    for(int j=0; j<13; j++)
        printf("-");
    printf("+");
    for(int j=0; j<20; j++)
        printf("-");
    printf("+");
    for(int j=0; j<19; j++)
        printf("-");
    printf("+");
    for(int j=0; j<12; j++)
        printf("-");
    printf("+");
    printf("\n");
    printf("|");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("ID");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("TIP");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("DESTINATIE");
    for(int j=0; j<5; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<2; j++)
        printf(" ");
    printf("DATA DE PLECARE");
    for(int j=0; j<2; j++)
        printf(" ");
    printf("|");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("PRETUL");
    for(int j=0; j<3; j++)
        printf(" ");
    printf("|\n");
    printf("+");
    for(int j=0; j<8; j++)
        printf("-");
    printf("+");
    for(int j=0; j<13; j++)
        printf("-");
    printf("+");
    for(int j=0; j<20; j++)
        printf("-");
    printf("+");
    for(int j=0; j<19; j++)
        printf("-");
    printf("+");
    for(int j=0; j<12; j++)
        printf("-");
    printf("+");
    printf("\n");
    for(int i = 0; i<nr_elemente; i++){
        char* afisarea_ofertei;
        afisarea_ofertei = afisare_oferta(array_final[i]);
        printf("%s", afisarea_ofertei);
        free(afisarea_ofertei);
        printf("+");
        for(int j=0; j<8; j++)
            printf("-");
        printf("+");
        for(int j=0; j<13; j++)
            printf("-");
        printf("+");
        for(int j=0; j<20; j++)
            printf("-");
        printf("+");
        for(int j=0; j<19; j++)
            printf("-");
        printf("+");
        for(int j=0; j<12; j++)
            printf("-");
        printf("+");
        printf("\n");
    }
    free(array_final);
}

void autopopulare(PtrConsola ptr_consola) {
    autopopulare_service(ptr_consola->service);
    printf("Lista de oferte a fost autopopulata cu succes!\n");

}
