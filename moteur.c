
#include"moteur.h"


Visites *text_to_struct(FILE *f){
    int i = 0;
    char c;
    Ville *villes = malloc(sizeof(Ville) * TAILLE_LST_VILLES);
    Visites *V = malloc(sizeof(Visites));
    V->lst_villes = villes;
    V->longueur = TAILLE_LST_VILLES;

    while((c=fgetc(f))!=EOF){
        if(c =='\n'){
            i++;
        }else{
            villes[i].nom = c;
            villes[i].x = fgetc(f);
            villes[i].y = fgetc(f);
        }
    }
    return V;
} 

double longueur(Ville a , Ville b){
    return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
}









