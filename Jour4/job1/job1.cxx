#include <iostream>

int main() {
    int number = 2019;      // Déclaration de la variable
    int* ptr = &number;     // Déclaration du pointeur qui pointe vers number

    std::cout << "La valeur de number via le pointeur est : " << *ptr << std::endl;

    return 0;
}
