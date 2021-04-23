//----------------------------------------------  4  ----------------------------------------------------------
//El producto de palindrome mas grande
//Un numero palindromo se lee igual en ambos sentidos. El palindromo mas grande hecho del producto de dos numeros de dos digitos es 9009 = 91*99
//Encuentre el palindromo mas grande hecho del producto de dos numeros de 3 digitos

 #include <iostream>
 using namespace std;
int main(){
    int productoMaximo = 0;
    for (int i = 999; i >= 100; i--)
    {
        for (int j = 999; j >= 100; j--)
        {
            // calculating product of
            // two n-digit numbers
            int producto = i * j;
            int numero2 = producto;
            int numRevez = 0;

            while (numero2 != 0)//Hallamos el reverso
            {
                numRevez = numRevez * 10 + numero2 % 10;
                numero2 /= 10;
            }
            
            if (producto == numRevez && producto > productoMaximo)
                productoMaximo = producto;
        }
    }
    cout<< productoMaximo<<endl;
    return 0;
}

