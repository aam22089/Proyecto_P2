#include "redsocial.h"
#include "usuario.h"
void RedSocial::agregarUsuario(Usuario u)
{
    cout << "Escribe el username"<< endl;
    cin >> u.nombre;
    cout << "Escribe la edad"<< endl;
    cin >> u.edad;
    cout << "Escribe la nacionalidads"<< endl;
    cin >> u.nacionalidad;
    
}

void RedSocial::mostrarUsuarios()
{

}

void RedSocial::mostrarPublicaciones()
{

}

Usuario *RedSocial::getUsuario(int ID)
{
    Usuario *p;
    return p;
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
