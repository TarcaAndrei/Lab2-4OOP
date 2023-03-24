//
// Created by Andrei on 08.03.2023.
//

#ifndef LAB2_4_OFERTA_H
#define LAB2_4_OFERTA_H
typedef struct Oferta{
    int id_oferta;
    char tip[20];
    char destinatie[30];
    char data_plecare[15];
    double pret;
}Oferta, *PtrOferta;

PtrOferta constructor_oferta(int id_oferta, char tip[], char destinatie[], char data_plecare[], double pret);

int get_id(PtrOferta);
char* get_tip(PtrOferta);
char* get_destinatie(PtrOferta);
char* get_data_plecare(PtrOferta);
double get_pret(PtrOferta);

void set_tip(PtrOferta, char* tip_nou);
void set_destinatie(PtrOferta, char* destinatie_noua);
void set_data_plecare(PtrOferta, char* data_plecare_noua);
void set_pret(PtrOferta, double pret_nou);

char * afisare_oferta(PtrOferta pointer_oferta);
void destructor_oferta(PtrOferta pointer_oferta);
#endif //LAB2_4_OFERTA_H
