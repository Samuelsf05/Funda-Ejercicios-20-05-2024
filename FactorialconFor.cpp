#include <iostream>

 using namespace std;
 int main(){
    int numero;

    cout << "Ingrese un numero entero positivo. \n";
    cin >> numero;

    if(numero<0){
        cout << "Los numeros negativos no tienen factorial. \n";
    
    }
    else{
        int factorial = 1;
        for(int i = numero; i >= 1; i--){
        factorial *=i;
    cout << "El factorial de " << numero << " es " << factorial << "\n"; }
    }

    return 0;
 }