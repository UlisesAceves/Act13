#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main(){
    Arreglo<Computadora> computadoras;


    Computadora c01("Alienware", "Windows 10", 16, 8);
    Computadora c02("Omen", "Windows 10 ", 8, 8);
    Computadora c03("Alienware", "Windows 10", 16, 8);


    computadoras << c01 << c02 << c03 << c01 << c03;

    Computadora c06("Alienware", "Windows 10", 16, 8);

    Computadora c07("HP", "Windows 7", 8, 4);

    Computadora c08("Alienware", "Windows 7", 8, 4);

    Computadora c09("Ulises", "Windows 10", 4, 0);

    Computadora *ptr = computadoras.buscar(c06);

    cout<<"Busequeda 1:\n";
    if (ptr != nullptr){
        cout << *ptr << endl;
    }else{
        cout<<"No existe\n\n";
    }



    Computadora *ptr1 = computadoras.buscar(c07);

    cout<<"Busequeda 2:\n";
    if (ptr1 != nullptr){
        cout << *ptr1 << endl;
    }else{
        cout<<"No existe\n\n";
    }

    Computadora *ptr2 = computadoras.buscar(c08);

    cout<<"Busequeda 3:\n";
    if (ptr2 != nullptr){
        cout << *ptr2 << endl;
    }else{
        cout<<"No existe\n\n";
    }

    Computadora *ptr3 = computadoras.buscar(c09);

    cout<<"Busequeda 4:\n";
    if (ptr3 != nullptr){
        cout << *ptr3 << endl;
    }else{
        cout<<"No existe\n\n";
    }

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c06);

    cout<<"Busqueda general 1:\n";
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++){
            Computadora *c = ptrs[i];
            cout<<*c<<endl;
        }
    }else{
        cout<<"No se encontro ninguna coincidencia\n\n";
    }


    Arreglo<Computadora*> ptrs1 = computadoras.buscar_todos(c07);

    cout<<"Busqueda general 2:\n";
    if(ptrs1.size() > 0){
        for (size_t i = 0; i < ptrs1.size(); i++){
            Computadora *c = ptrs1[i];
            cout<<*c<<endl;
        }
    }else{
        cout<<"No se encontro ninguna coincidencia\n\n";
    }

    Arreglo<Computadora*> ptrs2 = computadoras.buscar_todos(c08);

    cout<<"Busqueda general 3:\n";
    if(ptrs2.size() > 0){
        for (size_t i = 0; i < ptrs2.size(); i++){
            Computadora *c = ptrs2[i];
            cout<<*c<<endl;
        }
    }else{
        cout<<"No se encontro ninguna coincidencia\n\n";
    }

    Arreglo<Computadora*> ptrs3 = computadoras.buscar_todos(c09);

    //La busqueda solo funciono cuando el nombre de la computadora coincidia, si se hacia la busqueda utilizando otra
    //caracteristica en comun no se encontraron coincidencias
    
    cout<<"Busqueda general 4:\n";
    if(ptrs3.size() > 0){
        for (size_t i = 0; i < ptrs3.size(); i++){
            Computadora *c = ptrs3[i];
            cout<<*c<<endl;
        }
    }else{
        cout<<"No se encontro ninguna coincidencia\n\n";
    }

    cout<<"\n\n";
    return 0;
}