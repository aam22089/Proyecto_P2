#include <bits/stdc++.h>
using namespace std; 

#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"

int main(){
    cout << "Bienvenido a nuestra red, que desea hacer?" << endl;
    cout << "Ingrese: " << endl; 
    cout << "1 para ver los usuarios de esta red." << endl; 
    cout << "2 para ver las publicaciones que han sido registradas." << endl; 
    cout << "3 para entrar al perfil de un usuario por medio de su ID." << endl; 
    cout << "4 para agregar un nuevo usuario. " << endl; 
    cout << "Ninguna de las anteriores para salir del programa. " << endl; 

    int op;
    cin >> op;
    cout << endl; 

    RedSocial rs("Xconnect"); 

    Usuario u1("Tilin123", 12, "Guatemalteco"); 
    Usuario u2("FazePepinito42", 24, "Estadounidense"); 
    rs.agregarUsuario(u1);
    rs.agregarUsuario(u2);

    switch(op)
    {
        case 1: 
        cout << endl; 
        rs.mostrarUsuarios(); 
        break; 

        case 2: 
        rs.mostrarPublicaciones(); 

        break; 

        case 3:
        cout << "Ingrese el ID del usuario: " << endl;
        int id;
        cin >> id; 
        rs.getUsuario(id);
        break;

        case 4: 
        cout << "Ingrese los datos del nuevo usuario:  " << endl;
         
        cout << "Username: " << endl; 
        string nombre; 
        cin >> nombre;

        cout << "Edad: " << endl; 
        int edad; 
        cin >> edad; 

        cout << "Nacionalidad: " << endl; 
        string nacionalidad; 
        cin >> nacionalidad; 

        Usuario uz(nombre, edad, nacionalidad);

        rs.agregarUsuario(uz);  
        break; 
    }

   
    

    //redsocial:Publicacion p1( , "12-de-marzo", "ostias"); 

    
    
    return 0; 
}