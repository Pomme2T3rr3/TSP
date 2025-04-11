#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "moteur.h"

#ifndef FICHIER_H
#define FICHIER_H


Visites *text_to_struct(FILE *f);

int compte_ligne(void);

#endif