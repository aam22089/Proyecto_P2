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

    RedSocial rs("Xconnect"); 

    Usuario u1("Tilin123", 12, "Guatemalteco"); 
    Usuario u2("FazePepinito42", 24, "Estadounidense"); 
    rs.agregarUsuario(u1);
    rs.agregarUsuario(u2);

do {

    int op;
    cin >> op;
    cout << endl;

    string nombre; 
    int edad; 
    string nacionalidad; 
    Usuario uz(nombre, edad, nacionalidad);

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

        cout << "Ahora en el perfil de este usuario, tiene las siguientes opciones: " << endl; 
        cout << "1 ver lista de amigos." << endl; 
        cout << "2 ver publicaciones." << endl; 
        cout << "3 crear publicacion." << endl; 
        cout << "4 entrar al perfil de un amigo." << endl; 
        cout << "5 agregar un nuevo amigo." << endl; 
        cout << "6 para volver al menu de la red." << endl; 

        int verusuario; 
        cin >> verusuario; 
            switch(verusuario){
                case 1: 
                Usuario mostrarAmigos();  
                break; 






            }
        break;

        case 4: 
        cout << "Ingrese los datos del nuevo usuario:  " << endl;
         
        cout << "Username: " << endl;  
        cin >> nombre;

        cout << "Edad: " << endl; 
        cin >> edad; 

        cout << "Nacionalidad: " << endl; 
         
        cin >> nacionalidad; 

        rs.agregarUsuario(uz);  
        break; 

        case 5: 
        return 0; 
        break; 
    }

} while(true);

    //Publicacion p1( , "12-de-marzo", "ostias"); 

    return 0; 
}