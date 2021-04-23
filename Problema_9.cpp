//---------------------------------  9  ---------------------------------------------------------
//Un triplete putagorico es un conjunto de numeros naturales, a<b<c para los cuales
//a^2+b^2 = c^2. Existe exactamente uno para el tipo a+b+c = 1000

#include <iostream>
using namespace std;
int main(){
    int a = 0, b = 0, c = 0;
    int perimetro = 1000;
    bool stop = false;
    for (a = 1; a < perimetro; a++) {
        for (b = a; b < perimetro; b++) {
            c = perimetro - a - b;
     
            if (a * a + b * b == c * c) {
                stop = true;
                break;
            }
        }
     
        if (stop) {
            break;
        }
    }
    cout<<"a es: "<<a<<endl;
    cout<<"b es: "<<b<<endl;
    cout<<"c es: "<<c<<endl;
}

