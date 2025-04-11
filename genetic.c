#include "genetic.h"




Visite *liste_visites_aleatoire(Visite *V) {
    int i, j, tmp;
    Visite *V2;
    
    V2 = (Visite *)malloc(sizeof(Visite));
    if(!V2) {
        return NULL;
    }

    V2->nb_villes = V->nb_villes;

    V2->villes = (Ville *)malloc(V->nb_villes * sizeof(Ville));
    if(!V2->villes) {
        free(V2);
        return NULL;
    }

    for(


    return V2;
}