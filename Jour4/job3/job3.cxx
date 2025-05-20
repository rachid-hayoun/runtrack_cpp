#include <iostream>
#include <cstring>  // pour strlen

int main() {
    char str[100];

    std::cout << "Entrez une chaîne de caractères : ";
    std::cin.getline(str, 100);  // lecture de la chaîne

    char* start = str;                      // pointeur sur le début
    char* end = str + std::strlen(str) - 1; // pointeur sur la fin

    // Inversion de la chaîne en utilisant les pointeurs
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    std::cout << "Chaîne inversée : " << str << std::endl;

    return 0;
}
