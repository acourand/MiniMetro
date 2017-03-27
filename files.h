//
// Created by pierre on 27/03/17.
//

#ifndef MINIMETRO_STRUCTURES_H
#define MINIMETRO_STRUCTURES_H

typedef struct file // station de metro, first in first out
{
    int personne; // Entier désignant une personne
    struct file *suivant; // Lien vers l'élément suivant
} File;

void
remplissageStation(File **p_p_file, int personne);
int sortiePersonneStation(File **p_p_file);

void videStation(File **p_p_file);
int tailleStation(File **p_p_file);






#endif //MINIMETRO_STRUCTURES_H
