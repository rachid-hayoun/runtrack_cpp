#include <iostream>
using namespace std ;

int main(){
    int n ;
    int m ;

    cout << " Entrez un nombre " << endl ;
    cin >> n ;

    cout << " Entrez un nombre " << endl ;
    cin >> m ;

    n = m ;
    m = n ;

    cout << "n =" << n << " m =" << m << endl;

}