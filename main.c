//problema 9 - agentie de turism
/**
 * 9. Agentie de turism

Creati o aplicatie care permite gestiunea ofertelor de la o agentie de turism.
Fiecare oferta are: tip (munte,mare, citiy break), destinatie, data plecare, pret
Aplicatia permite:
 a) Adaugarea de noi oferte.
 b) Actualizare oferte
 c) Stergere oferta
 d) Vizualizare oferete ordonat dupa pret, destinatie (crescator/descrescator)
 e) Vizualizare oferta filtrate dupa un criteriu (destinatie, tip, pret)
 */
#include<stdio.h>
#include <stdlib.h>
#include "testing/teste_domeniu.h"
#include "testing/teste_repository.h"
#include "testing/teste_validator.h"
#include "testing/teste_service.h"
#include "repository/repository.h"
#include "validator/validare_oferta.h"
#include "service/service.h"
#include "consola/consola.h"

void ruleaza_toate_testele()
/**
 * functia de apel de teste
 */
{
    teste_domeniu();
    teste_validator();
    teste_repository();
    teste_service();
    printf("Toate testele au rulat cu succes!\n");
}

int main()
/**
 * functia principala in care se creeaza toate structurile de care avem nevoie si care apeleaza si testele
 * @return 1 daca nu s-a generat nicio eroare si totul a functionat corect
 */
{
    ruleaza_toate_testele();
    PtrRepositoryOferte repository_agentie;
    repository_agentie = constructor_repository();
    PtrValidareOferta validator_agentie;
    validator_agentie = constructor_validator();
    PtrServiceOferte service_agentie;
    service_agentie = constructor_service(repository_agentie, validator_agentie);
    PtrConsola consola_agentie;
    consola_agentie = constructor_consola(service_agentie);
    run(consola_agentie);
    destructor_consola(consola_agentie);
}