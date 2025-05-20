#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // Pointeurs vers les variables
    int* ptrA = &a;
    int* ptrB = &b;

    // Affichage avant l'échange
    std::cout << "Avant l'échange : a = " << a << ", b = " << b << std::endl;

    // Échange des valeurs via les pointeurs
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    // Affichage après l'échange
    std::cout << "Après l'échange : a = " << a << ", b = " << b << std::endl;

    return 0;
}
