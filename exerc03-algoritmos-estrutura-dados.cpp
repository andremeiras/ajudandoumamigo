#include <math.h>
#include <iostream>
#include <string.h>
using namespace std; // necessário para uso do cin e cout

int main() {

    float cateto_oposto, cateto_adjacente=0, hipotenusa=0;
    float sen=0, cos=0, tan=0;

    cout << "Digite o valor do CATETO OPOSTO: ";
    cin >> cateto_oposto;

    cout << "Digite o valor do CATETO ADJACENTE: ";
    cin >> cateto_adjacente;

    cout << "Digite o valor da HIPOTENUSA: ";
    cin >> hipotenusa;

    cout << "\n";

    sen = cateto_oposto / hipotenusa; 
    cos = cateto_adjacente / hipotenusa; 
    tan = cateto_oposto / cateto_adjacente;

    cout << "\nSeno: " << sen;
    cout << "\nCosseno: " << cos;
    cout << "\nTangente: " << tan;

    cout << "\n\n";
}

