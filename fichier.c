#include "fichier.h"
#include <string.h>

Visite *text_to_struct(FILE *f) {
    // Compte d'abord le nombre exact de villes
    int nb_villes = compter_villes(f);
    if (nb_villes <= 0) {
        return NULL;
    }

    // Initialise la structure avec le nombre exact de villes
    Visite *V = initVisite(nb_villes);
    if (V == NULL) {
        return NULL;
    }

    // Retourne au début du fichier
    rewind(f);

    char ligne[256];
    int index = 0;
    
    while (fgets(ligne, sizeof(ligne), f) && index < nb_villes) {
        if (strlen(ligne) <= 1) continue;
        
        Ville ville;
        if (sscanf(ligne, "%d %d %49s", &ville.x, &ville.y, ville.nom) == 3) {
            V->villes[index] = ville;
            index++;
        }
    }

    V->nb_villes = index;
    return V;
}
