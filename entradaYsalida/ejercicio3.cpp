//hacer un programa que lea sexo edad, altura, y muestre la salida de estas variables o condiciones

// las nuevas tecnologias de la informacion y las comunicaciones en la educacion
#include<iostream>
#include<string>

using namespace std;

int main(){
    int edad;
    float altura;
    string sexo, nombre;

    cout<<"ingresar nombre"<<endl;
    cin>>nombre;
    cout<<"ingresar edad"<<endl;
    cin>>edad;
    cout<<"ingresar altura"<<endl;
    cin>>altura;
    cout<<"ingresar genero"<<endl;
    cin>>sexo;

    cout<<"el usuario se llama: "<<nombre<<endl;
    cout<<"Tiene: "<<edad<<" años"<<endl;
    cout<<"Mide: "<<altura<<endl;
    cout<<"Se identifica como: "<<sexo;
}