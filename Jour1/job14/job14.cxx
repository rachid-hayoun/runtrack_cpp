#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string chiffres;

    cout << "Entrez une succession de chiffres : ";
    cin >> chiffres;

    reverse(chiffres.begin(), chiffres.end());

    cout << "Chiffres inverses : " << chiffres << endl;

    return 0;
}
