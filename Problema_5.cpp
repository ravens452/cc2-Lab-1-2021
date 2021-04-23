//---------------------------------------------  5  -------------------------------------------------------------------------
//El múltiplo mas pequeño:  2520 es el numero mas perqueño que se puede divir por cada uno de los miembros del 1 al 10
//sin nigun resto. Cual es el numero positivo mas pequeño que es de divisible por todod los numeros del 1 al 20?const unsigned NUM = 10;


#include <iostream>
using namespace std;

bool esDivisible(int numero) {
    for (int i = 1; i < 21; i++) {
        if (numero%i != 0){
            return false;
        }

    }
    return true;
}


int main() {
    int numero = 1;
    while (true){
        if (esDivisible(numero))
            break;
        numero++;
    }
    cout<<numero;
}

