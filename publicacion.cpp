#include "publicacion.h"

void Publicacion::mostrarPublicacion()
{
    cout << "Fecha: " << fesha << endl;
    cout << "Contenido: " << contenido << endl;
    cout << "Usuario: " << usuario->nombre << endl;
}

Publicacion::Publicacion(Usuario *usuario, string fesha, string contenido)
{
}
