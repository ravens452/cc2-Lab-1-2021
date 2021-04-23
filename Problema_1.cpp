//-------------------------------------------  1  -----------------------------------------

#include <iostream>
using namespace std;


// Si enumeramos todos los numeros naturales por debajo de 10 que son multiplos de 3 o 5 obtenemos 3, 5, 6, 9. La suma de estos multiplos es 23. Encuentra la suma de todos los multiplos de 3 o 5 por debajo de 1000.
int main() {
    int a = 0;
    for (int i = 0; i < 1000;i++){
        if(i % 3==0 || i % 5 ==0){
            a = a+i;
        }
    }
    cout<<a<<" ";

    return 0;
}
