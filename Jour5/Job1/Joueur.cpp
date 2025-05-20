#include "Joueur.hpp"

// Constructeur
Joueur::Joueur(int posX, int posY) : x(posX), y(posY) {}

// Affiche la position
void Joueur::afficherPosition() const {
    std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
}

// Déplace le joueur
void Joueur::deplacer(int deltaX, int deltaY) {
    x += deltaX;
    y += deltaY;
}
