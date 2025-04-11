
#include"fichier.h"


#define TAILLE_LST_VILLES compte_ligne()

typedef struct {
    char nom;
    double x;
    double y;
} Ville;

typedef struct{
    Ville *lst_villes;
    int longueur;
} Visites;




Visites *text_to_struct(FILE *f){


} 

double longueur(Ville a , Ville b){
    return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
}









