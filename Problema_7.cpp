//------------------------------------------  7  --------------------------------------------------
//10001st Prime
//Al enumerar los primeros seis numeros primos: 2,3,5,7,11,13 podemos ver
//que el sexto primo es 13. Cual es el numero primero 10001?

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

void stPrime(int n){//n es ubicacion
    int n2 = n;
    int b = 1; //aumentara Ubicacion
    int numero = 2; //empezamos con el 2,3,...
    
    while (b <= n2) {//b es posicion 1
        if (esPrimo(numero)==true) {
            if (b==n2) {
                cout<<"La posicion " <<b<< " tiene al numero "<<numero<<endl;
            }
            
            
            numero += 1;
            b += 1;
        }else
            numero++;
    }

}

int main(){
    //Que el primer primo aslga 1
    stPrime(10001);
}

