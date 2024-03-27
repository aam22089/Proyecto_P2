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
    for (int i=0; i< Usuarios; i++)
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
   if (ID == this->Usuario.ID)
   {
    Usuario *p;
    return p;
    }
    else {
        return nullptr; 
        cout << "Este usuario no existe" << endl; 

    }


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
