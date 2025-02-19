#ifndef usuario_h
#define usuario_h
#include <bits/stdc++.h>
using namespace std;

class Publicacion; 
class Usuario
{
    private: 
    int ID;

public:
    string nombre;
    int edad;
    string nacionalidad;
    vector<Usuario *> Amigos;
    vector<Publicacion *> Publicaciones;
    
    void setID();
    int getID();
    void mostrar();
    void mostrarAmigos();
    void mostrarPublicaciones();
    void agregarAmigo(Usuario *nuevoAmigo);
    void crearPublicacion();
    Usuario *getAmigo(int ID);

    Usuario(string nombre);
    Usuario(string nombre, int edad);
    Usuario(string nombre, int edad, string nacionalidad);
    Usuario(int ID,string nombre, int edad, string nacionalidad);
};
#endif
