#include "publicacion.h"
#include "usuario.h"
#include "redsocial.h"

void Publicacion::mostrarPublicacion()
{
    cout << this->fesha << endl;
    cout << this->usuario->nombre << endl;
    cout << this->contenido << endl;
    cout << this-> idn << endl; 
}

Publicacion::Publicacion(Usuario *usuario, int id, string fesha, string contenido)
{
    this-> fesha = fesha; 
    this-> contenido = contenido; 
    this-> usuario = usuario; 
    this-> idn = id;  
}