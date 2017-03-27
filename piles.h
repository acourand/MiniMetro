//
// Created by pierre on 27/03/17.
//

#ifndef MINIMETRO_PILES_H
#define MINIMETRO_PILES_H

#include "listes.h"

typedef struct pile {
    int personne; // Entier désignant une personne
    struct pile *precedent; // Lien vers l'élément précédent
} Pile;


void remplissageMetro(Pile **p_p_pile, int personne);

int sortiePersonneMetro(Pile **p_p_pile);

void videMetro(Pile **p_p_pile);

int tailleMetro(Pile **p_p_pile);
void ajouterEnFin(listeChainee *liste, File *station)
#endif //MINIMETRO_PILES_H
