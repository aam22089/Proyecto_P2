#include "usuario.h"
#include "publicacion.h"
#include "redsocial.h"
#include <string>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

void Usuario::setID()
{
    this->ID=rand()%50000;
}

int Usuario::getID()
{
    int id = this->ID;
    return id;
}

void Usuario::mostrar()
{
    cout << "ID: " << ID << endl;
    cout << nombre << endl;
    cout << "Nacionalidad: " << nacionalidad << endl;
    cout << "Edad: " << edad << " anios" << endl;
}

void Usuario::mostrarAmigos()
{
    for (int i = 0; i < Amigos.size(); i++)
    {
        cout << i + 1 << ". " << Amigos[i]->nombre << endl;
    }
}

void Usuario::mostrarPublicaciones()
{
    for (int i = 0; i < Publicaciones.size(); i++)
    {
        cout << i + 1 << ". " << endl; 
        Publicaciones[i]->mostrarPublicacion();
    }
}

void Usuario::agregarAmigo(Usuario *nuevoAmigo)
{
    Usuario *amigo = nuevoAmigo;

    Amigos.push_back(amigo);
    
}

void Usuario::crearPublicacion()
{
    cout << "Nueva publicacion" << endl;
    cout << "Escribe la fecha del dia de hoy: "<< endl;
    string fesha;
    cin >> fesha;
    cout << "Escribe el contenido"<< endl;
    string contenido;
    cin >> contenido;
    Publicacion *p=new Publicacion(this, fesha, contenido);
    this->Publicaciones.push_back(p);
    
}

Usuario *Usuario::getAmigo(int ID)
{
    int i = 0;
    bool eevee = false;

    int sprigatito;

    while (i <= Amigos.size())
    {
        if (Amigos[i]->getID() == ID)
        {
            sprigatito = i;
            eevee = true;
        }
        i++;
    }
    if (eevee)
    {
        Usuario *un = Amigos[sprigatito];
        return un;
    }
    else
    {
        return nullptr;
    }
}

Usuario::Usuario(string nombre)
{
    this->nombre = nombre;
}

Usuario::Usuario(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

Usuario::Usuario(string nombre, int edad, string nacionalidad)
{
    this->nombre = nombre;
    this->edad = edad;
    this->nacionalidad = nacionalidad;
}

Usuario::Usuario(int ID, string nombre, int edad, string nacionalidad)
{
    this->ID = ID;
    this->nombre = nombre;
    this->edad = edad;
    this->nacionalidad = nacionalidad;
}
