#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "moteur.h"

#define TAILLE_LST_VILLES 100

#ifndef FICHIER_H
#define FICHIER_H



Visite *text_to_struct(FILE *f);

int compte_ligne(void);

#endif
