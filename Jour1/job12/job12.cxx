#include <iostream>
using namespace std ;

int main() {
    int n;            
    float somme = 0;  

    cout << "Entrez 5 nombres : " << endl;

    for (int i = 0; i < 5; ++i) {
        cin >> n;
        somme += n;
    }

    cout << "La moyenne des 5 nombres est : " << somme / 5 << endl;

    return 0;
}