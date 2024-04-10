#include "usuario.h"
#include "publicacion.h"
#include "redsocial.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


void Usuario::setID(Usuario idu)
{
    //Usuario* au = &idu; 
    this->ID &idu.edad;  
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
        cout << i + 1 << ". ";
        Publicaciones[i]->mostrarPublicacion();
    }
}

void Usuario::agregarAmigo(Usuario *nuevoAmigo)
{
    Usuario *amigo = nuevoAmigo;

    Amigos.push_back(amigo);
    
}

void Usuario::crearPublicacion(int odp)
{
    cout << "Nueva publicacion" << endl;
    cout << "Ingrese la fesha de su publicacion: " ; 
    string fesha;
    cin >> fesha;
    cout << endl; 

    cout << "Ingrese el contenido: " << endl; 
    string contenido;
    cin >> contenido;
    cout << endl; 
  
    Publicacion* np = new Publicacion(odp, this, fesha, contenido);;
    this->Publicaciones.push_back(np);
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
