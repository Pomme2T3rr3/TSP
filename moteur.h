#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#ifndef MOTEUR_H
#define MOTEUR_H

typedef struct {
    int x;
    int y;
    char nom[50];  // Changed from char *nom[50] to fixed array
} Ville;

typedef struct {
    int nb_villes;
    Ville *villes;  // Pointer to array that will be allocated with exact size
    int longueur;
} Visite;

// Compte le nombre de villes dans le fichier
int compter_villes(FILE *f);
Visite* initVisite(int nb_villes);
int ajouterVille(Visite *v, Ville ville);
void libererVisite(Visite *v);

double longueur(Ville a, Ville b);

#endif
