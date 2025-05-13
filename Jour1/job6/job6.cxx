#include <iostream>
using namespace std ;

int main (){
    int n ;
    cout<< "Entrez un nombre entre 1 et 9 = " ;
    cin >> n; //==== cin permet de rendre la phrase en input dans la console

    for (int i = 1 ; i <= 10 ; i ++){
        cout << n << " X " << i << " = " << n * i << endl; //=== Affiche Le nombre saisie X de 1 à 10 est  égale à Le nombre saisie mulitiplier par un entier inférieur à 10 et endl pour retourner à la ligne
    }

    return 0 ;

}