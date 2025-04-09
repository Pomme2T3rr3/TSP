#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#ifndef MOTEUR_H
#define MOTEUR_H


typedef struct {
    int x;
    int y;
    char nom;
} Ville;

typedef struct{
    int *lst_villes;
    int longueur;
} Visites;

int longueur(Ville a , Ville b);
Visites *text_to_struct(FILE *f);

#endif
