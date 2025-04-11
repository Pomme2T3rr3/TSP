#include"moteur.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double longueur(Ville a , Ville b){
    return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
}

int compter_villes(FILE *f) {
    int count = 0;
    char line[256];
    
    long pos = ftell(f);
    rewind(f);
    
    while (fgets(line, sizeof(line), f)) {
        if (strlen(line) > 1) {
            count++;
        }
    }
    
    fseek(f, pos, SEEK_SET);
    return count;
}

Visite* initVisite(int nb_villes) {
    Visite *v = (Visite*)malloc(sizeof(Visite));
    if (v == NULL) {
        return NULL;
    }
    
    v->villes = (Ville*)malloc(nb_villes * sizeof(Ville));
    if (v->villes == NULL) {
        free(v);
        return NULL;
    }
    
    v->nb_villes = nb_villes;
    v->longueur = 0;
    return v;
}

void libererVisite(Visite *v) {
    if (v != NULL) {
        free(v->villes);
        free(v);
    }
}