//----------------------------------------------  6  ------------------------------------------------------------------------
//Suma de diferencia cuadrada
//La suma de los cuadrados de los primeros diez numeros naturales es: 1^2+2^2+...+10^2=385
//El cuadrado de la suma de los diez primeros diez numeros es: (1+2+...+10)^2=55^2=3025
//Por lo tanto la diferencia de ambos es 3025−385=2640 .
//Encuentre con el mismo procedimiento pero para los 100 primeros numeros.

#include <iostream>
using namespace std;

int sumaCuadrado (int n){
    int suma = 0;
    for (int i = 1; i<=n;i++){
        int cuadrado = i*i;
        suma += cuadrado;
    }
    return suma;
}

int cuadradoSuma (int n){
    int suma = 0;
    for (int i = 1; i<=n;i++){
        suma += i;
    }
    return suma*suma;
}

int main(){
    cout<<sumaCuadrado(100)<<endl;
    cout<<cuadradoSuma(100)<<endl;
    cout<<"La Diferencia es: "<<cuadradoSuma(100)-sumaCuadrado(100)<<endl;
    
}

