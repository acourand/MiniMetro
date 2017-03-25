#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//#include <richedit.h>
//#include <unistd.h>


/* *********************************************** FILE ******************************************************************** */

typedef struct file // station de metro, first in first out
{
    int personne; // Entier d�signant une personne
    struct file *suivant; // Lien vers l'�l�ment suivant
} File;

void remplissageStation(File **p_p_file, int personne) // permet d'ajouter une personne dans une station (en queue de file)
{
    File *p_nouveau = malloc(sizeof *p_nouveau); // On cr�� un nouvel element

    if (p_nouveau != NULL) // Si cr�ation okay
    {
        p_nouveau->suivant = NULL; // On met � NULL le suivant car c'est le dernier �l�ment

        p_nouveau->personne = personne; // On lui assigne la personne

        if (*p_p_file == NULL) // Si la file est vide
        {
            *p_p_file = p_nouveau; //notre file pointera sur le premier �l�ment
        }
        else
        {
            File *p_tmp = *p_p_file; // Cr�ation d'un �l�ment temporaire pointant sur notre file

            while (p_tmp->suivant != NULL) // On parcourt la file jusqu'a udernier �l�ment
            {
                p_tmp = p_tmp->suivant;
            }
            p_tmp->suivant = p_nouveau; // On pointe vers le nouvel �l�ment
        }
    }
}

int sortiePersonneStation(File **p_p_file)
{
    int retour = -1;

    if (*p_p_file != NULL) // si le file n'est pas vide
    {
        File *p_tmp = (*p_p_file)->suivant; // �l�ment temporaire vers le deuxi�me �l�ment de la file

        retour = (*p_p_file)->personne; // On retourne la personne

        free(*p_p_file); // On lib�re la file

        *p_p_file = NULL; // On remet � null le pointeur au cas ou

        *p_p_file = p_tmp; // On pointe la file vers le deuxi�me �l�ment
    }
    return retour;
}

void videStation(File **p_p_file)
{
    while (*p_p_file != NULL) // Tant que la station n'est pas vide.
    {
        sortiePersonneStation(p_p_file); // On enl�ve la premi�re personne
    }
}

int tailleStation(File **p_p_file)
{
    int i = 1;

    File *p_tmp = *p_p_file; // Cr�ation d'un �l�ment temporaire pointant sur notre file
    if(p_tmp == NULL){
        return 0;
    }
    if (*p_p_file != NULL){
        while (p_tmp->suivant != NULL) // On parcourt la file jusqu'a udernier �l�ment
        {
            i++;
            p_tmp = p_tmp->suivant;
        }
    }
    return i;
}

/* *********************************************** PILE ******************************************************************** */

typedef struct pile
{
    int personne; // Entier d�signant une personne
    struct pile *precedent; // Lien vers l'�l�ment pr�c�dent
} Pile;

void remplissageMetro(Pile **p_p_pile, int personne) // permet d'ajouter une personne dans le m�tro (en tete de pile)
{
        Pile *p_nouveau = malloc(sizeof *p_nouveau); // On cr�� un nouvel element

        if (p_nouveau != NULL) // si ok
        {
                p_nouveau->personne = personne; // On lui assigne la personne

                p_nouveau->precedent = *p_p_pile; // On lui met le pr�c�dent la pile

                *p_p_pile = p_nouveau; // on fait pointer la pile sur notre �l�ment
        }
}

int sortiePersonneMetro(Pile **p_p_pile)
{
    int retour = -1;

    if (p_p_pile != NULL)
    {
        Pile *temporaire = (*p_p_pile)->precedent; // �l�ment temporaire vers l'avant dernier �l�ment de la file

        retour = (*p_p_pile)->personne; // On retourne la personne

        free(*p_p_pile);  // On lib�re la file

        *p_p_pile = NULL; // On remet � null le pointeur au cas ou

        *p_p_pile = temporaire; // On pointe la file vers l'avant dernier �l�ment
    }
    return retour;
}

void videMetro(Pile **p_p_pile)
{
    while (*p_p_pile != NULL) // Tant que le m�tro n'est pas vide.
    {
        sortiePersonneMetro(p_p_pile); // On enl�ve la derni�re personne
    }
}

int tailleMetro(Pile **p_p_pile)
{
     int i = 1;

    Pile *p_tmp = *p_p_pile; // Cr�ation d'un �l�ment temporaire pointant sur notre file

    if(p_tmp == NULL){
        return 0;
    }

    if (*p_p_pile != NULL){
        while (p_tmp->precedent != NULL) // On parcourt la file jusqu'a udernier �l�ment
        {
            i++;
            p_tmp = p_tmp->precedent;
        }
    }
    return i;
}

/* *********************************************** LISTE CHAINEE ******************************************************************** */

typedef struct liste
{
    File *station;
    struct liste *nxt;
} listeChainee;


void ajouterEnFin(listeChainee *liste, File *station)
{
    listeChainee *nouvelElement = malloc(sizeof(listeChainee)); // On cr�e un nouvel �l�ment

    nouvelElement->station = station; // On met la valeur � l'�l�ment

    nouvelElement->nxt = NULL; //On ajoute en fin, donc aucun �l�ment ne va suivre

    if(liste == NULL)
    {
        liste = nouvelElement; // Si la liste est vide, on renvoi le nouvel �l�ment
    }
    else
    {
        /* Sinon, on parcourt la liste � l'aide d'un pointeur temporaire et on
        indique que le dernier �l�ment de la liste est reli� au nouvel �l�ment */
        listeChainee *temp=liste;
        while(temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
    }
}


/* ***************************************** MAIN **************************************/

int main()
{
    printf("*************Bienvenue sur la simulation d'un mini m�tro*************\n\n");
    char metroDessin[] = "{A}=>========={B}";
    int direction = 0; // 0 droite, 1 gauche
    int position = 4; // position de d�part dans la chaine du m�tro
    int nbPersonneChangement = 0;

    listeChainee *listeStation = NULL;

    File *stationA = NULL;

    File *stationB = NULL;

    ajouterEnFin(listeStation,stationA);

    ajouterEnFin(listeStation,stationB);

    Pile *metro = NULL;

    while(1){
        if(direction == 0){
            for(position = 3;position<13;position++){
                if(position%2==0){
                    remplissageStation(&stationA,position);
                }
                remplissageStation(&stationB,position);
                metroDessin[position]='=';
                metroDessin[position+1]='>';
                printf("Nombre de personnes dans le m�tro : %d\n", tailleMetro(&metro));
                printf("Nombre de personnes dans le metro A : %d\n", tailleStation(&stationA));
                printf("Nombre de personnes dans le metro B : %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", tailleStation(&stationB));
                printf("%s\n",metroDessin);
                Sleep(300);
            }
            videMetro(&metro);
            for(nbPersonneChangement = 0;nbPersonneChangement<tailleStation(&stationB);nbPersonneChangement++){
                remplissageMetro(&metro,nbPersonneChangement);
            }
            videStation(&stationB);
            direction=1;
        }
        else{
            for(position = 13;position>3;position--){
                if(position%2==0){
                    remplissageStation(&stationA,position);
                }
                remplissageStation(&stationB,position);
                metroDessin[position]='=';
                metroDessin[position-1]='<';
                printf("Nombre de personnes dans le m�tro : %d\n", tailleMetro(&metro));
                printf("Nombre de personnes dans le metro A : %d\n", tailleStation(&stationA));
                printf("Nombre de personnes dans le metro B : %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", tailleStation(&stationB));
                printf("%s\n",metroDessin);
                Sleep(300);
            }
            videMetro(&metro);
            for(nbPersonneChangement = 0;nbPersonneChangement<tailleStation(&stationA);nbPersonneChangement++){
                remplissageMetro(&metro,nbPersonneChangement);
            }
            videStation(&stationA);
            direction=0;
        }
        Sleep(2000);
    }
    return 0;
}
