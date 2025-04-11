#include "genetic.h"
#include "test_moteur.c"



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

    // tests fct moteur
    printf("Début des tests...\n");
    
    test_init_visite();
    printf("Test initVisite: OK\n");
    
    test_longueur();
    printf("Test longueur: OK\n");
    
    test_ajouter_ville();
    printf("Test ajouterVille: OK\n");
    
    printf("Tous les tests ont réussi!\n");
    return 0;

    
    fclose(f);
    libererVisite(V);
    return 0;
}
