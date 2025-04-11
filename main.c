#include "genetic.h"



int main(void) {
    FILE *f = fopen("ville.txt", "r");
    if (f == NULL) {
        perror("Erreur d'ouverture du fichier");
        return EXIT_FAILURE;
    }
    
    int nb_villes = compter_villes(f);
    
    // Initialise la structure avec nb_villes
    Visite *V = initVisite(nb_villes);
    if (V == NULL) {
        fclose(f);
        return EXIT_FAILURE;
    }
    
    printf("Nombre de villes : %d\n", nb_villes);

    
    fclose(f);
    libererVisite(V);
    return 0;
}