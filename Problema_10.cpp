//----------------------------------------  10  --------------------------------------------
//Suma de primos
//La suma de los primos por debajo de 10 es 2+3+5+7 = 17. Encuentre las debajo de 2 millones

#include <iostream>
using namespace std;

bool esPrimo(int n){
    int b=0;
    for (int i=1;i<=n;i++){
        if (n%i == 0){
            b++;
        }
    }

    return b == 2;
}

int main(){
    long suma = 0;
    for (int i=0; i<=2000000; i++) {
        if (esPrimo(i)==true){
            suma +=i;
        }
    }
    cout<<suma;
}

