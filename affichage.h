#include "genetic.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef AFFICHAGE_H
#define AFFICHAGE_H


void afficherVisite(Visite v);
void afficherVisiteFichier(Visite v, FILE *f);
void afficherListeVisites(Visite **liste_visites, int k);

#endif