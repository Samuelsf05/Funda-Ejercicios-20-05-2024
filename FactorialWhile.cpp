#include <iostream>

 using namespace std;
 int main(){
    int numero, factorial =1;

    cout << "Ingrese un numero entero positivo. \n";
    cin >> numero;

    if(numero<0){
        cout << "Los numeros negativos no tienen factorial. \n";
    
    }
    else{

        cout << "El factorial de el numero: "<<numero<< " es: "; 
        while(numero>0){
        factorial = factorial * numero;
        numero--;
        }

        cout << factorial;
    }

    return 0;
 }