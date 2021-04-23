//---------------------------------------  3  --------------------------------------------------------------
//Los factores primos de 13195 son 5,7,13 y 29. Cual es el factor primo mas grande del numero 600851475143
#include <iostream>
using namespace std;

int main ()
{
    long n = 600851475143;
    int divisor = 2;
    int primMayor = 0;
    
    cout<<"Los divisores son: ";
    while (n > 1) {
        int exponente = 0;
        
        
        while (n % divisor == 0) {
            exponente++;
            n = n / divisor;
        }
        
        
        if (exponente == 1){
            cout <<divisor <<" ";
            primMayor = divisor;
            if (primMayor<divisor) {
                primMayor=divisor;
            }
        }
        
        divisor++;
    }
    cout<<"El divisor mayor es: "<<primMayor<<endl;
    cout<<endl;
    return 0;
}

