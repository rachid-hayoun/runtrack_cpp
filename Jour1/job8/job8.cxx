#include <iostream>
using namespace std ;

int main (){
    int years ;

    cout << "Entrez une annee, je vous dirai si elle est bissextile ou non : ";
    cin >> years;

    if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0)) { // Si l'année est divisible par 4 MAIS pas par 100 alors elle est bisextile || signifie OU
        cout << years << " est une annee bissextile." << endl;
    } else { // Sinon elle est pas 
        cout << years << " n'est pas une annee bissextile." << endl;
    }

    return 0;
}