#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:
    // Constructeur pour initialiser les coordonnées
    Joueur(int posX = 0, int posY = 0);

    // Affiche la position actuelle du joueur
    void afficherPosition() const;

    // Déplace le joueur selon les décalages donnés
    void deplacer(int deltaX, int deltaY);
};

#endif
