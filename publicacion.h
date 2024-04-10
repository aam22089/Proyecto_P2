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
    int idn; 

    void mostrarPublicacion();

    Publicacion(Usuario *usuario, int idn, string fesha, string contenido);
};
#endif
