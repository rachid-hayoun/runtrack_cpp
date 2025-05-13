#include <iostream>
using namespace std ;

int main (){
    int n ;
    cout << "Entrez un nombre je vous dirai s'il est pair ou impair = ";
    cin >> n;

    if (n % 2 == 0){
        cout<< n << " est un nombre pair" << endl;
    }
    else {
        cout<< n << " est un nombre impair"<< endl;
    }
}