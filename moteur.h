#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#ifndef MOTEUR_H
#define MOTEUR_H

typedef struct {
    int x;
    int y;
    char nom[50];
} Ville;

typedef struct {
    int nb_villes;
    Ville *villes;
    int longueur;
} Visite;

// Compte le nombre de villes dans le fichier
int compter_villes(FILE *f);
Visite* initVisite(int nb_villes);
int ajouterVille(Visite *v, Ville ville);
void libererVisite(Visite *v);
double distance_total(Visite v);
double longueur(Ville a, Ville b);

#endif
