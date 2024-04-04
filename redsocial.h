#ifndef redsocial_h
#define redsocial_h
#include <bits/stdc++.h>
using namespace std;
#include "usuario.h"
#include "publicacion.h"

class RedSocial
{
    vector<Usuario*> Usuarios;
    vector<Publicacion *> Publicaciones;

public:
    string nombre;
    int numeroDeUsuario;
    int numeroDePublicaciones;

    void agregarUsuario(Usuario* up);
    void mostrarUsuarios();
    void mostrarPublicaciones();
    Usuario *getUsuario(int ID);

    RedSocial(string nombre);
    RedSocial(string nombre, vector<Usuario *> Usuarios);
    RedSocial(string nombre, vector<Usuario *> Usuarios, vector<Publicacion *> Publicaciones);
};

#endif
