#include "usuario.h"
#include "publicacion.h"
#include <bits/stdc++.h>
using namespace std;

int Usuario::getID()
{
    int id = this->ID;
    return id;
}

void Usuario::mostrar()
{
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
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
        cout << i + 1 << ". " << Publicaciones[i]->mostrarPublicacion() << endl;
    }
}

void Usuario::agregarAmigo(Usuario *nuevoAmigo)
{
}

void Usuario::crearPublicacion()
{
}

Usuario *Usuario::getAmigo(int ID)
{
    return nullptr;
}

Usuario::Usuario(string nombre)
{
}

Usuario::Usuario(string nombre, int edad)
{
}

Usuario::Usuario(string nombre, int edad, string nacionalidad)
{
}
