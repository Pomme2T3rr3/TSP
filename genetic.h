#include <stdio.h>
#include <stdlib.h>
#include "moteur.h"

#ifndef GENETIC_H
#define GENETIC_H

/**
 * Génère une visite aléatoire à partir d'une visite de référence
 * 
 * @param V La visite de référence contenant toutes les villes
 * @return Un pointeur vers une nouvelle visite aléatoire, ou NULL en cas d'erreur
 */
Visite* visite_aleatoire(Visite V);

/**
 * Génère une liste de k visites aléatoires à partir d'une visite de référence
 * @param V La visite de référence contenant toutes les villes
 * @param k Le nombre de visites aléatoires à générer
 * @return Un tableau de k visites aléatoires, ou NULL en cas d'erreur
 */
Visite** generer_liste_visites(Visite V, int k);

/**
 * Libère la mémoire allouée pour une liste de visites
 * @param liste_visites Le tableau de visites à libérer
 * @param k Le nombre de visites dans le tableau
 */
void liberer_liste_visites(Visite** liste_visites, int k);


void trier_liste_visites(Visite** liste_visites, int k);


#endif
