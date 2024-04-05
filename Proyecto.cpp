#include <bits/stdc++.h>
using namespace std; 

#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"

int main(){
    RedSocial rs("Xconnect"); 
    Usuario u1("Tilin123", 12, "Guatemalteco"); 
    Usuario *t=u1;

    rs.mostrarUsuarios(); 
    rs.mostrarPublicaciones(); 

    return 0; 
}