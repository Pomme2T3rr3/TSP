#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"fichier.h"

typedef struct {
    char nom;
    double x;
    double y;
} Ville;

typedef struct{
    int *lst_villes;
    int taille;
} Visites;


int longueur(Ville a , Ville b){
    return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
}







