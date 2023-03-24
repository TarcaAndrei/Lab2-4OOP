//
// Created by Andrei on 10.03.2023.
//

#include <assert.h>
#include "teste_validator.h"
#include "../validator/validare_oferta.h"

void teste_valitare_data(){
    assert(verifica_data("29/02/2024") == 1);
    assert(verifica_data("31/07/2021") == 1);
    assert(verifica_data("31/12/2026") == 1);
    assert(verifica_data("21/34/2000") == 0);
    assert(verifica_data("29/02/2023") == 0);
    assert(verifica_data("32/01/2022") == 0);
    assert(verifica_data("00/00/2020") == 0);
    assert(verifica_data("00.00.2020") == 0);
    assert(verifica_data("00/00.2020") == 0);
    assert(verifica_data("00.00/2020") == 0);
    assert(verifica_data("  /ba/ccca") == 0);
    assert(verifica_data("bb/ba/ccca") == 0);
    assert(verifica_data("1b/ba/ccca") == 0);
    assert(verifica_data("1 /ba/ccca") == 0);
    assert(verifica_data("11/ a/ccca") == 0);
    assert(verifica_data("11/b /ccca") == 0);
    assert(verifica_data("11/ba/ccca") == 0);
    assert(verifica_data("11/1 /ccca") == 0);
    assert(verifica_data("11/1 /ccca") == 0);
    assert(verifica_data("11/1a/ccca") == 0);
    assert(verifica_data("11/10/ccca") == 0);
    assert(verifica_data("11/10/2cca") == 0);
    assert(verifica_data("11/10/201a") == 0);
    assert(verifica_data("11/10/202a") == 0);
    assert(verifica_data("11/10/202 ") == 0);
    assert(verifica_data("11/10/2052") == 0);
    assert(verifica_data("11/10/2002") == 0);
    assert(verifica_data("11/00/2022") == 0);
    assert(verifica_data("11/14/2022") == 0);
    assert(verifica_data("00/12/2022") == 0);
    assert(verifica_data("33/12/2022") == 0);
    assert(an_bisect(2000) == 1);
    assert(an_bisect(2100) == 0);
}

void teste_validator() {
    teste_valitare_data();
    PtrOferta of1, of2;
    of1 = constructor_oferta(1, "City Break", "Timisoara", "12/04/2023", 473);
    of2 = constructor_oferta(-1, "City Brea", "", "32/01/2022", -473);
    PtrValidareOferta valid;
    valid = constructor_validator();
    assert(verifica_oferta(of1) == 0);
    assert(verifica_oferta(of2) == 11111);
    destructor_validator(valid);
    destructor_oferta(of1);
    destructor_oferta(of2);
}
