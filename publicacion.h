#ifndef publicacion_h
#define publicacion_h
#include <bits/stdc++.h>
using namespace std;

class Usuario; 
class Publicacion
{
    int ID;

public:
    string fesha;
    string contenido;
    Usuario *usuario;
    vector <string> comentarios; 

    void mostrarPublicacion();
    void agregarComentario(); 
    void mostrarComentarios();

    Publicacion(Usuario *usuario, string fesha, string contenido);
};
#endif
