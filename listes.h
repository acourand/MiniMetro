//
// Created by pierre on 27/03/17.
//

#ifndef MINIMETRO_LISTES_H
#define MINIMETRO_LISTES_H

#include "files.h"

typedef struct liste {
    File *station;
    struct liste *nxt;
} listeChainee;

void ajouterEnFin(listeChainee **liste, File *station);

#endif //MINIMETRO_LISTES_H
