#include "redsocial.h"

void RedSocial::agregarUsuario()
{
    cout << "Escribe el username"<< endl;
    cin >> nombre;
    cout << "Escribe numero de usuario"<< endl;
    cin >> numeroDeUsuario;
    cout << "Escribe el numero de publicaciones"<< endl;
    cin >> numeroDePublicaciones;
    
}

void RedSocial::mostrarUsuarios()
{
}

void RedSocial::mostrarPublicaciones()
{
}

Usuario *RedSocial::getUsuario(int ID)
{
    return nullptr;
}

RedSocial::RedSocial(string nombre)
{
    this->nombre=nombre;
}

RedSocial::RedSocial(string nombre, vector<Usuario *> Usuarios)
{
    this->nombre=nombre;
    this->Usuarios=Usuarios;
}

RedSocial::RedSocial(string nombre, vector<Usuario *> Usuarios, vector<Publicacion *> Publicaciones)
{
    this->nombre=nombre;
    this->Usuarios=Usuarios;
    this->Publicaciones=Publicaciones;
}
