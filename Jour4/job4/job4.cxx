#include <iostream>

int main() {
    // Déclaration des variables
    int a = 1, b = 2, c = 3;

    // Création des pointeurs vers chaque variable
    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;

    // Affichage des valeurs initiales
    std::cout << "Valeurs initiales :" << std::endl;
    std::cout << "a = " << *ptrA << ", b = " << *ptrB << ", c = " << *ptrC << std::endl;

    // Modification des valeurs via les pointeurs
    *ptrA = 10;
    *ptrB = 20;
    *ptrC = 30;

    // Affichage des nouvelles valeurs des variables
    std::cout << "Nouvelles valeurs après modification via les pointeurs :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}
