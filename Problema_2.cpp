//----------------------------------------  2  ------------------------------
//Cada nuevo termino en la secuencia de Fibonacci se genera agregando los dos terminos anteriores.
//Al comenzar con 1 y 2, los primeroas 10 terminos seran: 1,2,3,5,8,13,21,34,55,89.
//Al considerar los terminos en la secuencia de Fibonacci cuyos valores no exceden los 4 millones, encuentre la suma de los terminos del valor par.

#include <iostream>

int main() {
    long long int F1 = 1;
    long long int F2= 1;
    cout<<F1;
    long long int sum = 0;
    while (F2 < 4000000)
    {
        F2= F2 + F1;
        F1= F2 - F1;
        if (F2%2==0)
            {sum = sum + F2;
            cout<<"num es:" << F2<<endl; }
    }
    cout<<sum;
    return 0;
}

