#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include <vector>

void RedSocial::agregarUsuario(Usuario up)
{
    Usuario *nu = new Usuario(up); 
    
    this->Usuarios.push_back(nu);
}

void RedSocial::agregarPublicacion(Publicacion* p)
{
    Publicaciones.push_back(p);
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
    for (int i = 0; i < Usuarios.size(); i++)
    {
        for (int j=0; j<Publicaciones.size();j++)
        {
            this->Usuarios[i]->Publicaciones[j]->mostrarPublicacion(); 
        }
    }
}

Usuario *RedSocial::getUsuario(int ID)
{
    /* for (int i= 0; this->ID == ID; i++ )*/
    int i = 0;
    bool dracovish = false;
    int snivy; 

    while (i < Usuarios.size())
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
        cout << "El usuario no existe." << endl;
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
