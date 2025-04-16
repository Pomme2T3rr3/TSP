#include "affichage.h"


void afficherVisite(Visite v) {
    printf("Visite :\n");
    for (int i = 0; i < v.nb_villes; i++) {
        printf("Ville %d : (%d, %d) - %s\n", i + 1, v.villes[i].x, v.villes[i].y, v.villes[i].nom);
    }
    printf("Longueur totale : %.2f\n", distance_total(v));
}



void afficherVisiteFichier(Visite v, FILE *f) {
    fprintf(f, "Visite :\n");
    for (int i = 0; i < v.nb_villes; i++) {
        fprintf(f, "Ville %d : (%d, %d) - %s\n", i + 1, v.villes[i].x, v.villes[i].y, v.villes[i].nom);
    }
    fprintf(f, "Longueur totale : %.2f\n", distance_total(v));
}