/*
escribe un programa que muestre el precio de un producto con su IVA

teniendo en cuenta el IVA = 19%
*/

// incluimos las librerias para poder hacer el proyecto
#include<iostream>
#include<math.h>

using namespace std; 

int main(){
// Definimos las variables uqe vamos a usar
    float precio,precioIVA,suma;

// Pedimos al usuario que ingrese las variables
    cout<<"ingresar precio del producto"<<endl;
    cin>>precio;
// hacemos el respectivo procedimiento para calcular el iva y mostrar el iva con el precio fijo
    precioIVA = precio * 0.19;
    suma = precio + precioIVA

// mostramos los datos que incerto el usuario
    cout<<"el precio del IVA es de:"<<precioIVA<<endl;
    cout<<"El precio del producto mas el IVA es de:"<<endl<<;
}