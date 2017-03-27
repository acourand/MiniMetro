//
// Created by pierre on 27/03/17.
//

#include "piles.h"

#include <stdlib.h>

void remplissageMetro(Pile **p_p_pile, int personne) // permet d'ajouter une personne dans le métro (en tete de pile)
{
    Pile *p_nouveau = malloc(sizeof *p_nouveau); // On créé un nouvel element

    if (p_nouveau != NULL) // si ok
    {
        p_nouveau->personne = personne; // On lui assigne la personne

        p_nouveau->precedent = *p_p_pile; // On lui met le précédent la pile

        *p_p_pile = p_nouveau; // on fait pointer la pile sur notre élément
    }
}

int sortiePersonneMetro(Pile **p_p_pile) {
    int retour = -1;

    if (p_p_pile != NULL) {
        Pile *temporaire = (*p_p_pile)->precedent; // élément temporaire vers l'avant dernier élément de la file

        retour = (*p_p_pile)->personne; // On retourne la personne

        free(*p_p_pile);  // On libère la file

        *p_p_pile = NULL; // On remet à null le pointeur au cas ou

        *p_p_pile = temporaire; // On pointe la file vers l'avant dernier élément
    }
    return retour;
}

void videMetro(Pile **p_p_pile) // Fonction récursive
{
    if(*p_p_pile != NULL){
        sortiePersonneMetro(p_p_pile); // On enlève la dernière personne
        videMetro(p_p_pile);
    }
}

int tailleMetro(Pile **p_p_pile) {
    int i = 1;

    Pile *p_tmp = *p_p_pile; // Création d'un élément temporaire pointant sur notre file

    if (p_tmp == NULL) {
        return 0;
    }

    if (*p_p_pile != NULL) {
        while (p_tmp->precedent != NULL) // On parcourt la file jusqu'a udernier élément
        {
            i++;
            p_tmp = p_tmp->precedent;
        }
    }
    return i;
}
