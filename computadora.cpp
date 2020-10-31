#include "computadora.h"

Computadora::Computadora(){

}

Computadora::Computadora(const string &nombre, const string &sistema, int ram, int memoria){
    this->nombre_equipo=nombre;
    this->sistema_operativo=sistema;
    this->ram=ram;
    this->memoria_video=memoria;
}

void Computadora::setNombre(const string &n){
    nombre_equipo=n;
}

string Computadora::getNombre(){
    return nombre_equipo;
}

void Computadora::setSistema(const string &s){
    sistema_operativo=s;
}

string Computadora::getSistema(){
    return sistema_operativo;
}

void Computadora::setRam(int r){
    ram=r;
}

int Computadora::getRam(){
    return ram;
}

void Computadora::setMemoriavideo(int m){
    memoria_video=m;
}

int Computadora::getMemoriavideo(){
    return memoria_video;
}