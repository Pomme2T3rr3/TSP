#include "genetic.h"




Visite liste_visites_aleatoire(Visite V) {
    Visite *visite_aleatoire = initVisite(V.nb_villes);
    if (visite_aleatoire == NULL) {
        exit(EXIT_FAILURE);
    }

    // Créer un tableau pour stocker les indices des villes
    int *indices = malloc(V.nb_villes * sizeof(int));
    if (indices == NULL) {
        libererVisite(visite_aleatoire);
        exit(EXIT_FAILURE);
    }

    // Initialiser les indices
    for (int i = 0; i < V.nb_villes; i++) {
        indices[i] = i;
    }

    // Mélanger les indices
    for (int i = V.nb_villes - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = indices[i];
        indices[i] = indices[j];
        indices[j] = temp;
    }

    // Remplir la visite aléatoire avec les villes mélangées
    for (int i = 0; i < V.nb_villes; i++) {
        visite_aleatoire->villes[i] = V.villes[indices[i]];
    }

    free(indices);
    Visite result = *visite_aleatoire;
    libererVisite(visite_aleatoire);
    return result;
}