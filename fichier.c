#include"fichier.h"


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


int compte_ligne(){
    int res; 
    char c;
    FILE *f= fopen("ville.txt", "r");
    while((c=fgetc(f))!=EOF){
        if(c =='\n'){
            res++;
        }
    }
    return res;
}

// int main (){
//     printf("%d\n", compte_ligne(f));
//     return 0;
// }

