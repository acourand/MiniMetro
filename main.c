#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


/* *********************************************** FILE ******************************************************************** */

typedef struct file // station de metro, first in first out
{
    int personne; // Entier désignant une personne
    struct file *suivant; // Lien vers l'élément suivant
} File;

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
        }
        else
        {
            File *p_tmp = *p_p_file; // Création d'un élément temporaire pointant sur notre file

            while (p_tmp->suivant != NULL) // On parcourt la file jusqu'a udernier élément
            {
                p_tmp = p_tmp->suivant;
            }
            p_tmp->suivant = p_nouveau; // On pointe vers le nouvel élément
        }
    }
}

int sortiePersonneStation(File **p_p_file)
{
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

void videStation(File **p_p_file) // Fonction récursive
{
    if(*p_p_file != NULL){
        sortiePersonneStation(p_p_file); // On enlève la dernière personne
        videStation(p_p_file);
    }
}

int tailleStation(File **p_p_file)
{
    int i = 1;

    File *p_tmp = *p_p_file; // Création d'un élément temporaire pointant sur notre file
    if(p_tmp == NULL){
        return 0;
    }
    if (*p_p_file != NULL){
        while (p_tmp->suivant != NULL) // On parcourt la file jusqu'a udernier élément
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
    int personne; // Entier désignant une personne
    struct pile *precedent; // Lien vers l'élément précédent
} Pile;

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

int sortiePersonneMetro(Pile **p_p_pile)
{
    int retour = -1;

    if (p_p_pile != NULL)
    {
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

int tailleMetro(Pile **p_p_pile)
{
     int i = 1;

    Pile *p_tmp = *p_p_pile; // Création d'un élément temporaire pointant sur notre file

    if(p_tmp == NULL){
        return 0;
    }

    if (*p_p_pile != NULL){
        while (p_tmp->precedent != NULL) // On parcourt la file jusqu'a udernier élément
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
    listeChainee *nouvelElement = malloc(sizeof(listeChainee)); // On crée un nouvel élément

    nouvelElement->station = station; // On met la valeur à l'élément

    nouvelElement->nxt = NULL; //On ajoute en fin, donc aucun élément ne va suivre

    if(liste == NULL)
    {
        liste = nouvelElement; // Si la liste est vide, on renvoi le nouvel élément
    }
    else
    {
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier élément de la liste est relié au nouvel élément */
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
    printf("*************Bienvenue sur la simulation d'un mini métro*************\n\n");
    char metroDessin[] = "{A}=>========={B}";
    int direction = 0; // 0 droite, 1 gauche
    int position = 4; // position de départ dans la chaine du métro
    int nbPersonneChangement = 0;
    int i;

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
                printf("Nombre de personnes dans le metro : %d\n", tailleMetro(&metro));
                 for(i=0;i< tailleMetro(&metro);i++){
                    printf("|");
                }
                printf("\n");
                printf("Nombre de personnes dans la station A : %d\n", tailleStation(&stationA));
                for(i=0;i< tailleStation(&stationA);i++){
                    printf("|");
                }
                printf("\n");
                printf("Nombre de personnes dans la station B : %d\n", tailleStation(&stationB));
                for(i=0;i< tailleStation(&stationB);i++){
                    printf("|");
                }
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
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
                printf("Nombre de personnes dans le metro : %d\n", tailleMetro(&metro));
                for(i=0;i< tailleMetro(&metro);i++){
                    printf("|");
                }
                printf("\n");
                printf("Nombre de personnes dans la station A : %d\n", tailleStation(&stationA));
                for(i=0;i< tailleStation(&stationA);i++){
                    printf("|");
                }
                printf("\n");
                printf("Nombre de personnes dans le station B : %d\n", tailleStation(&stationB));
                for(i=0;i< tailleStation(&stationB);i++){
                    printf("|");
                }
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
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
