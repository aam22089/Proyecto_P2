#include "publicacion.h"
#include "usuario.h"

void Publicacion::mostrarPublicacion()
{
    cout << fesha << endl;
    cout << usuario->nombre << endl;
    cout << contenido << endl;
   
}

Publicacion::Publicacion(Usuario *usuario, string fesha, string contenido)
{
    this-> fesha = fesha; 
    this-> contenido = contenido; 
    this-> usuario = usuario; 
}
