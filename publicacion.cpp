#include "publicacion.h"
#include "usuario.h"
#include "redsocial.h"

void Publicacion::mostrarPublicacion()
{
    cout << "==================== " << endl; 
    cout << "| " <<  this->fesha << endl; 
    cout << "| " << this->usuario->nombre<< endl;
    cout << "| " << this-> contenido << endl;
    cout << "==================== "  << endl;
    this->mostrarComentarios();

}

Publicacion::Publicacion(Usuario *usuario, string fesha, string contenido)
{
    this-> fesha = fesha; 
    this-> contenido = contenido; 
    this-> usuario = usuario; 
}

void Publicacion::agregarComentario()
{
    string c;
    cout << "Escribe tu comentario aqui... "<< endl;
    cin >> c;
    this->comentarios.push_back(c);
}

void Publicacion::mostrarComentarios()
{
    for(int i=0;i<comentarios.size();i++)
    {
        cout << ">";
        cout << this->comentarios[i];
        cout << endl;
    }
}
