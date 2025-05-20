#include <iostream>
#include <string>
#include <cctype> // pour toupper

using namespace std;

int main() {
    string phrase = "vive la plateforme !";

    for (size_t i = 0; i < phrase.length(); i++) {
        phrase[i] = toupper(phrase[i]); // toupper permet de chaque lettre en majuscule
    }

    cout << phrase << endl;

    return 0;
}
