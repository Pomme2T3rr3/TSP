#include "genetic.h"



int main(void) {
    //test de la fonction liste_visites_aleatoire
    Visites V;
    FILE *f = fopen("ville.txt", "r");
    if (f == NULL) {
        perror("Erreur d'ouverture du fichier");
        return EXIT_FAILURE;
    }
    
    V = *text_to_struct(f);
    fclose(f);
    
    // Affichage des villes
    for (int i = 0; i < V.longueur; i++) {
        printf("Ville %c : (%d, %d)\n", V.lst_villes[i].nom, V.lst_villes[i].x, V.lst_villes[i].y);
    }
    
    free(V.lst_villes);
    
    return 0;
    
}