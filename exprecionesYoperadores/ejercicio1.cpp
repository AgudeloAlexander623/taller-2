// escribir en C++ la exprecion(a sobre b + 1)

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
    float a, b, resultado = 0;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    resultado = pow((a+b),1);
    cout << "El resultado de la exprecion es: " << resultado << endl;
}