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
    
    // Test avec 0 villes
    v = initVisite(0);
    assert(v == NULL);
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
