#include "genetic.h"
#include "fichier.h"
#include "affichage.h"
#include <time.h>
// #include "test_moteur.c" // Removed to avoid redefinition of 'main'


int main(void) {
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    Visite *v = NULL;
    FILE *f = fopen("ville.txt", "r");

    v = text_to_struct(f);

    // Afficher la visite initiale
    afficherVisite(*v);

    // Créer une visite aléatoire
    Visite* visite_aleatoire = liste_visites_aleatoire(*v);

    // Afficher la visite aléatoire
    printf("\nVisite aléatoire :\n");
    afficherVisite(*visite_aleatoire);

    // Libérer la mémoire
    libererVisite(v);
    fclose(f);
    return 0;
}