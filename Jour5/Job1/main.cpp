#include "Joueur.hpp"

int main() {
    Joueur joueur1(0, 0);  // Création du joueur à la position (0,0)

    joueur1.afficherPosition();

    // Simuler quelques mouvements
    joueur1.deplacer(5, 3);
    joueur1.afficherPosition();

    joueur1.deplacer(-2, 4);
    joueur1.afficherPosition();

    joueur1.deplacer(0, -7);
    joueur1.afficherPosition();

    return 0;
}
