// realizar un programa que la entrada estandar dos numeros y muestrey muestre en la salida standar
//suma, resta, multiplicacion y divicion
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int suma=0,resta=0,multipli=0,divi=0, a,b;

//ingresamos el los datos para realisar las respuestas
    cout<<"ingresar el plimer numero";
    cin>>a;
    cout<<"ingresar el segundo numero";
    cin>>b;

    suma = a+b;
    resta = a-b;
    multipli = a*b;
    divi = a/b;
    
    cout<<"el resultado de las operaciones es:"<<endl<<suma<<endl<<resta<<endl<<multipli<<endl<<divi; 
}