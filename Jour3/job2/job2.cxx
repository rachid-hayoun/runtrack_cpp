#include <iostream>
#include <string>
using namespace std;

int main() {
    string phrase = "vive la plateforme !";
    string resultat = "";

    for (char c : phrase) {
        // Si le caractère n'est pas une voyelle, on l'ajoute au résultat
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y') {
            resultat += c;
        }
    }

    cout << resultat << endl;

    return 0;
}
