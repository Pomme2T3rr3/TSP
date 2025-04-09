* Découpage du projet :

moteur : fonction longueur (calcul la distance entre deux villes)
                  longueur visites (calcul la distance d'un parcours de plusieurs villes)


affichage : fonctions d'affichage du parcours des villes


genetic : gestion du calcul du meilleur chemin.
        generer : génère une liste V aleatoire de k visites (k = 128 généralement)
        trie : trie la liste de visites générée, par ordre croissant selon la longueur des visites.
        construire : créé une nouvelle liste V', avec une partie des visites créées grâce à la fonction de mutation (u visites), v visites tirées de V, et w visites générées aléatoirement. Avec u + v + w = k, donc autant de visites dans V et V'.