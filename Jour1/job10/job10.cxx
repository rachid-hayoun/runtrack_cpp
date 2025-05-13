#include <iostream>
using namespace std ;

int main (){
    float prix ;
    float kilo ;
    float TVA ;

    cout << "Tapez un HT d'un kilo de carottes : " << endl ;
    cin >> prix ;

    cout << "Tapez un nombre de kilo de carottes : " << endl ;
    cin >> kilo ;

    cout << "Tapez le taux de TVA : " << endl ;
    cin >> TVA ;

    float totalHT = prix * kilo;
    float totalTVA = totalHT * (TVA / 100);
    float totalTTC = totalHT + totalTVA;

    cout << "Le prix TTC est : " << totalTTC << " euros" << endl;

    return 0;
}

