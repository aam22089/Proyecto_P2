#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include <vector>

void RedSocial::agregarUsuario(Usuario* up)
{
    cout << "Escribe el username"<< endl;
    cin >> up->nombre;
    cout << "Escribe la edad"<< endl;
    cin >> up->edad;
    cout << "Escribe la nacionalidad"<< endl;
    cin >> up->nacionalidad;
    this->Usuarios.push_back(up);
}

void RedSocial::mostrarUsuarios()
{
    for (int i=0; i< Usuarios.size(); i++)
    {
        cout << Usuarios[i] << endl; 
    }
}

void RedSocial::mostrarPublicaciones()
{
 for (int i=0; i< Publicaciones.size(); i++)
    {
        cout << Publicaciones[i] << endl; 
    }
}

Usuario *RedSocial::getUsuario(int ID)
{
    
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
