#include <bits/stdc++.h>
using namespace std; 

#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"

int main(){
    RedSocial rs("Xconnect"); 
    Usuario u1("Tilin123", 12, "Guatemalteco"); 
    Usuario u2("FazePepinito42", 24, "Estadounidense"); 
    rs.agregarUsuario(u1);
    rs.agregarUsuario(u2);

    Publicacion p1(); 

    rs.mostrarUsuarios(); 
    rs.mostrarPublicaciones(); 

    return 0; 
}