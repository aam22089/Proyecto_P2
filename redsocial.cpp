#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include <vector>

void RedSocial::agregarUsuario(Usuario up)
{
    Usuario *nu = &up; 
    
    this->Usuarios.push_back(nu);
}

void RedSocial::mostrarUsuarios()
{
    for (int i = 0; i < Usuarios.size(); i++)
    {
        Usuarios[i]->  mostrar();
        cout << endl; 
    }
}

void RedSocial::mostrarPublicaciones()
{
    for (int i = 0; i < Publicaciones.size(); i++)
    {
        Publicaciones[i]->mostrarPublicacion();
    }
}

Usuario *RedSocial::getUsuario(int ID)
{
    /* for (int i= 0; this->ID == ID; i++ )*/
    int i = 0;
    bool dracovish = false;
    
    int snivy; 

    while (i <= Usuarios.size())
    {
        if (Usuarios[i]->getID() == ID)
        {
            snivy = i; 
            dracovish = true;
        }
        i++;
    }
    if (dracovish)
    {
        Usuario* un = Usuarios[snivy]; 
        return un; 
    }
    else
    {
        return nullptr;
    }
}

RedSocial::RedSocial(string nombre)
{
    this->nombre = nombre;
}

RedSocial::RedSocial(string nombre, vector<Usuario *> Usuarios)
{
    this->nombre = nombre;
    this->Usuarios = Usuarios;
}

RedSocial::RedSocial(string nombre, vector<Usuario *> Usuarios, vector<Publicacion *> Publicaciones)
{
    this->nombre = nombre;
    this->Usuarios = Usuarios;
    this->Publicaciones = Publicaciones;
}
