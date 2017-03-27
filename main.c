#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "files.h"
#include "piles.h"
#include "listes.h"


/* ***************************************** MAIN **************************************/

void affichageConsole(char *metroDessin,int position,Pile *metro,File *stationA,File *stationB,int direction){
    int i;

    metroDessin[position]='=';
    if(direction == 0){
       metroDessin[position+1]='>';
    }else{
        metroDessin[position-1]='<';
    }


    printf("Nombre de personnes dans le metro : %d\n", tailleMetro(&metro));
    for(i=0;i< tailleMetro(&metro);i++){ printf("|");}
    printf("\n");

    printf("Nombre de personnes dans la station A : %d\n", tailleStation(&stationA));
    for(i=0;i< tailleStation(&stationA);i++){ printf("|");}
    printf("\n");

    printf("Nombre de personnes dans la station B : %d\n", tailleStation(&stationB));
    for(i=0;i< tailleStation(&stationB);i++){printf("|");}
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("%s\n",metroDessin);

    Sleep(300);
}

int main(){
    printf("*************Bienvenue sur la simulation d'un mini métro*************\n\n");

    char metroDessin[] = "{A}=>========={B}";
    int direction = 0; // 0 droite, 1 gauche
    int position = 4; // position de départ dans la chaine du métro
    int nbPersonneChangement = 0;

    int debutLigneMetro = 3;
    int finLigneMetro = strlen(metroDessin)-debutLigneMetro-1;

    listeChainee *listeStation = NULL;

    File *stationA = NULL;
    File *stationB = NULL;

    ajouterEnFin(listeStation,stationA);
    ajouterEnFin(listeStation,stationB);

    Pile *metro = NULL;

    while(1){
        if(direction == 0){
            for(position=debutLigneMetro ; position<finLigneMetro ; position++){
                if(position%2==0){
                    remplissageStation(&stationA,position);
                }
                remplissageStation(&stationB,position);
                affichageConsole(metroDessin,position,metro,stationA,stationB,direction);
            }
            videMetro(&metro);
            for(nbPersonneChangement = 0;nbPersonneChangement<tailleStation(&stationB);nbPersonneChangement++){
                remplissageMetro(&metro,nbPersonneChangement);
            }
            videStation(&stationB);
            direction=1;
        }
        else{
            for(position=finLigneMetro ; position>debutLigneMetro ; position--){
                if(position%2==0){
                    remplissageStation(&stationA,position);
                }
                remplissageStation(&stationB,position);
                affichageConsole(metroDessin,position,metro,stationA,stationB,direction);
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
