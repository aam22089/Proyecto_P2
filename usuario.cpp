#include "usuario.h"
#include "publicacion.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int Usuario::getID()
{
    int id = this->ID;
    return id;
} 

void Usuario::mostrar()
{
    cout << "El ID de este usuatio es: " << ID << endl;
    cout << "El nombre de este usuario es: "<< nombre << endl;
    cout << "Este usuario es: "<< nacionalidad << endl;
    cout << "Este usuario tiene" << edad << " anios" << endl;
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
}

void Usuario::crearPublicacion()
{
    cout << "Nueva publicacion" << endl; 
    Publicacion pn 

    

}

Usuario *Usuario::getAmigo(int ID)
{
    return nullptr;
}

Usuario::Usuario(string nombre)
{
    this->nombre = nombre; 
}

Usuario::Usuario(string nombre, int edad)
{
    this-> nombre = nombre; 
    this-> edad = edad; 
}

Usuario::Usuario(string nombre, int edad, string nacionalidad)
{
    this-> nombre = nombre; 
    this-> edad = edad; 
    this-> nacionalidad = nacionalidad; 
}
