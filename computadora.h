#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
private:
    string nombre_equipo;
    string sistema_operativo;
    int ram;
    int memoria_video;
public:
    Computadora();
    Computadora(const string &nombre, const string &sistema, int ram, int memoria);
    void setNombre(const string &n);
    string getNombre();
    void setSistema(const string &s);
    string getSistema();
    void setRam(int r);
    int getRam();
    void setMemoriavideo(int m);
    int getMemoriavideo();

    friend ostream& operator<<(ostream &out, const Computadora &c )
    {
        out << left;
        out << setw(18)<< c.nombre_equipo;
        out << setw(18)<< c.sistema_operativo;
        out << setw(8)<< c.ram;
        out << setw(16)<< c.memoria_video;
        out << endl;
        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c)
    {
        cout << "Nombre: ";
        getline(cin, c.nombre_equipo);
        fflush(stdin);

        cout << "Sistema operativo: ";
        getline(cin, c.sistema_operativo);
        fflush(stdin);

        cout << "RAM: ";
        cin>>c.ram;
        fflush(stdin);

        cout << "Memoria de video: ";
        cin>>c.memoria_video;
        fflush(stdin);

        return in;
    }

    bool operator==(const Computadora& c)
    {
        return nombre_equipo == c.nombre_equipo;
    }
    bool operator==(const Computadora& c) const
    {
        return nombre_equipo == c.nombre_equipo;
    }
};


#endif