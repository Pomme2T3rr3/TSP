#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "fichier.h"

#define TAILLE_LST_VILLES 100

#ifndef MOTEUR_H
#define MOTEUR_H


typedef struct {
    int x;
    int y;
    char nom;
} Ville;

typedef struct{
    int lst_villes[TAILLE_LST_VILLES];
    int longueur;
} Visites;


Visites *text_to_struct(FILE *f);

double longueur(Ville a , Ville b);



#endif
