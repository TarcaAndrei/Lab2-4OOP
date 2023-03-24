cmake_minimum_required(VERSION 3.22)
project(Lab2_4)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
add_executable(Lab2_4 main.c domeniu/oferta.h domeniu/oferta.c testing/teste_domeniu.c testing/teste_domeniu.h repository/repository.h repository/repository.c testing/teste_repository.h testing/teste_repository.c service/service.h service/service.c validator/validare_oferta.h validator/validare_oferta.c testing/teste_validator.h testing/teste_validator.c testing/teste_service.h testing/teste_service.c consola/consola.c consola/consola.h consola/consola.c utilities/sortare.c utilities/sortare.h utilities/filtrari.c utilities/filtrari.h Undo/undo.c Undo/undo.h)

