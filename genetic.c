#include "genetic.h"


Visite* visite_aleatoire(Visite V) {
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
    
    // Simplement retourner le pointeur sans le libérer
    return visite_aleatoire;
}



Visite** generer_liste_visites(Visite V, int k) {
    if (k <= 0 || V.nb_villes <= 0) {
        return NULL;
    }
    
    // Allouer un tableau pour stocker les k visites
    Visite** liste_visites = (Visite**)malloc(k * sizeof(Visite*));
    if (liste_visites == NULL) {
        return NULL;
    }
    
    // Initialiser le tableau avec des valeurs NULL
    for (int i = 0; i < k; i++) {
        liste_visites[i] = NULL;
    }
    
    // Générer k visites aléatoires
    for (int i = 0; i < k; i++) {
        liste_visites[i] = visite_aleatoire(V);
        if (liste_visites[i] == NULL) {
            // En cas d'erreur, libérer les visites déjà créées
            for (int j = 0; j < i; j++) {
                libererVisite(liste_visites[j]);
            }
            free(liste_visites);
            return NULL;
        }
    }
    
    return liste_visites;
}



void liberer_liste_visites(Visite** liste_visites, int k) {
    if (liste_visites == NULL) {
        return;
    }
    
    for (int i = 0; i < k; i++) {
        if (liste_visites[i] != NULL) {
            libererVisite(liste_visites[i]);
        }
    }
    
    free(liste_visites);
}



void trier_liste_visites(Visite** liste_visites, int k) {
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (distance_total(*liste_visites[j]) > distance_total(*liste_visites[j + 1])) {
                Visite* temp = liste_visites[j];
                liste_visites[j] = liste_visites[j + 1];
                liste_visites[j + 1] = temp;
            }
        }
    }
}