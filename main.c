#include "genetic.h"
#include "fichier.h"
#include "affichage.h"
#include <time.h>
#define NB_VISITES 128
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
    Visite* visite = visite_aleatoire(*v);

    // Afficher la visite aléatoire
    printf("\nVisite aléatoire :\n");
    afficherVisite(*visite);

    // création liste visites
    Visite **liste_visites = generer_liste_visites(*v, NB_VISITES);
    afficherListeVisites(liste_visites, NB_VISITES);
    trier_liste_visites(liste_visites, NB_VISITES);
    afficherListeVisites(liste_visites, NB_VISITES);

    // Libérer la mémoire
    libererVisite(v);
    fclose(f);
    return 0;
}