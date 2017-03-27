//
// Created by pierre on 27/03/17.
//
#include <stdio.h>
#include <stdlib.h>
#include "files.h"



void remplissageStation(File **p_p_file, int personne) // permet d'ajouter une personne dans une station (en queue de file)
{
    File *p_nouveau = malloc(sizeof *p_nouveau); // On créé un nouvel element

    if (p_nouveau != NULL) // Si création okay
    {
        p_nouveau->suivant = NULL; // On met à NULL le suivant car c'est le dernier élément

        p_nouveau->personne = personne; // On lui assigne la personne

        if (*p_p_file == NULL) // Si la file est vide
        {
            *p_p_file = p_nouveau; //notre file pointera sur le premier élément
        } else {
            File *p_tmp = *p_p_file; // Création d'un élément temporaire pointant sur notre file

            while (p_tmp->suivant != NULL) // On parcourt la file jusqu'a udernier élément
            {
                p_tmp = p_tmp->suivant;
            }
            p_tmp->suivant = p_nouveau; // On pointe vers le nouvel élément
        }
    }
}

int sortiePersonneStation(File **p_p_file) {
    int retour = -1;

    if (*p_p_file != NULL) // si le file n'est pas vide
    {
        File *p_tmp = (*p_p_file)->suivant; // élément temporaire vers le deuxième élément de la file

        retour = (*p_p_file)->personne; // On retourne la personne

        free(*p_p_file); // On libère la file

        *p_p_file = NULL; // On remet à null le pointeur au cas ou

        *p_p_file = p_tmp; // On pointe la file vers le deuxième élément
    }
    return retour;
}

void videStation(File **p_p_file, int nb) // Fonction récursive
{
    int i;
     for(i=0;i<nb;i++){
        sortiePersonneStation(p_p_file); // On enlève la dernière personne
    }
}

int tailleStation(File **p_p_file) {
    int i = 1;

    File *p_tmp = *p_p_file; // Création d'un élément temporaire pointant sur notre file
    if (p_tmp == NULL) {
        return 0;
    }
    if (*p_p_file != NULL) {
        while (p_tmp->suivant != NULL) // On parcourt la file jusqu'a udernier élément
        {
            i++;
            p_tmp = p_tmp->suivant;
        }
    }
    return i;
}
