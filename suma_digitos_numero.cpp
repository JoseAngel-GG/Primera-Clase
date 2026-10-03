#include <iostream>
using namespace std;

int main(){

    //4931

    long long n;
    cout << "introduce un numero para sumar sus digitos" << endl;
    cin >> n;

    long long suma=0;

    while (n>0)
    {   
        int digito = n%10;
        n/=10;
        suma = suma+digito;


    }
    
    cout << "Resultado de la suma " << endl;
    cout << suma;


}