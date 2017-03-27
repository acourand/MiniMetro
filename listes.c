//
// Created by pierre on 27/03/17.
#include <stdio.h>
#include <stdlib.h>

#include "listes.h"
#include "piles.h"

void ajouterEnFin(listeChainee *liste, File *station) {
    listeChainee *nouvelElement = malloc(sizeof(listeChainee)); // On crée un nouvel élément

    nouvelElement->station = station; // On met la valeur à l'élément

    nouvelElement->nxt = NULL; //On ajoute en fin, donc aucun élément ne va suivre

    if (liste == NULL) {
        liste = nouvelElement; // Si la liste est vide, on renvoi le nouvel élément
    } else {
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier élément de la liste est relié au nouvel élément */
        listeChainee *temp = liste;
        while (temp->nxt != NULL) {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
    }
}

