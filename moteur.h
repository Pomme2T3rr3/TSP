#ifndef MOTEUR_H
#define MOTEUR_H
typedef struct {
    int x;
    int y;
    char nom;
} Ville;

typedef struct{
    int *lst_villes;
    int taille;
} Visites;

int longueur(Ville a , Ville b);

#endif
