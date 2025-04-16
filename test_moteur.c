#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moteur.h"

void test_init_visite() {
    // Test d'initialisation avec un nombre valide de villes
    Visite *v = initVisite(5);
    assert(v != NULL);
    assert(v->nb_villes == 5);
    assert(v->villes != NULL);
    libererVisite(v);
}

void test_longueur() {
    Ville a = {0, 0, "A"};
    Ville b = {3, 4, "B"};
    
    // Test distance connue (triangle 3-4-5)
    double dist = longueur(a, b);
    assert(fabs(dist - 5.0) < 0.0001);
    
    // Test distance nulle
    assert(longueur(a, a) == 0.0);
}

void test_ajouter_ville() {
    Visite *v = initVisite(2);
    Ville a = {0, 0, "A"};
    Ville b = {3, 4, "B"};
    
    // Test ajout première ville
    assert(ajouterVille(v, a) == 1);
    assert(v->villes[0].x == 0);
    assert(strcmp(v->villes[0].nom, "A") == 0);
    
    // Test ajout deuxième ville
    assert(ajouterVille(v, b) == 1);
    
    libererVisite(v);
}


void test_distance_total() {
    Visite *v = initVisite(3);
    Ville a = {0, 0, "A"};
    Ville b = {3, 4, "B"};
    Ville c = {6, 8, "C"};
    
    ajouterVille(v, a);
    ajouterVille(v, b);
    ajouterVille(v, c);
    
    double dist = distance_total(*v);
    assert(fabs(dist - 10.0) < 0.0001);
    
    libererVisite(v);
}


int main(void) {
    // Test d'initialisation
    test_init_visite();
    printf("Test initVisite: OK\n");
    
    // Test de longueur
    test_longueur();
    printf("Test longueur: OK\n");
    
    // Test d'ajout de ville
    test_ajouter_ville();
    printf("Test ajouterVille: OK\n");
    
    // Test de distance totale
    test_distance_total();
    printf("Test distance_total: OK\n");

    printf("Tous les tests ont réussi!\n");
    
    return 0;
}