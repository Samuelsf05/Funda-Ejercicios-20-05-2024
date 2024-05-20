#include <iostream>
#include <cstdlib>

 using namespace std;
 int main(){
    int a=0, b=0;

    cout << "Esto es Piedra, Papel o Tijera!! \n";

    do
    {
        cout << "Haz yu eleccion:\n";
        cout << "1.Piedra. \n";
        cout << "2.Papel. \n";
        cout << "3.Tijera. \n";
        cout << "Salir = 0 \n";
        cin >> a;
        b = 1 + rand()%3;

        if(a>3 || a<0){
            cout << "Error. Seleccionar opcion valida. \n";
        }
        else { 
        cout << a << "vs" << b << "\n";
        if(a==b){
            cout << "Empate!! \n";
        }
        else if((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2)){
            cout << "Ganastee!!! \n.";
        }
        else if(a==0){
            cout << "Buen viaje. \n";
        }
        else{
            cout << "Perdiste... vuelvo a intentar. \n";
        }
    }
     }
    while(a==1 || a==2 || a==3);

    return 0;

 }