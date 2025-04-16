#include "genetic.h"




Visites liste_visites_aleatoire(Visites V) {
    int i, j, tmp;
    Visites V2;
    V2.longueur = V.longueur;
    V2.lst_villes = malloc(V.longueur * sizeof(int));
    for (i = 0; i < V.longueur; i++) {
        V2.lst_villes[i] = V.lst_villes[i];
    }
    for (i = 0; i < V.longueur; i++) {
        j = rand() % V.longueur;
        tmp = V2.lst_villes[i];
        V2.lst_villes[i] = V2.lst_villes[j];
        V2.lst_villes[j] = tmp;
    }
    return V2;
}