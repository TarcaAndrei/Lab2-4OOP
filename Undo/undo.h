//
// Created by Valentin Serban on 24.03.2023.
//

#ifndef LAB2_4_UNDO_H
#define LAB2_4_UNDO_H


#include "../repository/repository.h"

struct undo{
    void* stack;
    int length;
    int lungime_absoluta;
};

struct undo* initializare_undo();
void deepcopy(struct undo* undo, PtrRepositoryOferte oferte);
PtrRepositoryOferte undo(struct undo* undo, PtrRepositoryOferte oferte);
void distrugere_undo(struct undo* u);

#endif //LAB2_4_UNDO_H
