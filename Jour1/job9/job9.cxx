#include <iostream>
using namespace std ;

int main (){
    int n1 ;
    int n2 ;
    int n3 ;

    cout << " Entrez 1er nombre : " << endl ;
    cin >> n1 ;
    cout << " Entrez 2ème nombre : " << endl ;
    cin >> n2 ;
    cout << " Entrez 3ème nombre : " << endl ;
    cin >> n3 ;

    int max = n1;

    if (n2 > max) {
        max = n2;
    }

    if (n3 > max) {
        max = n3;
    }

    cout << "Le plus grand nombre est : " << max << endl;

    return 0;
}