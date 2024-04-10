#include <bits/stdc++.h>
using namespace std;

#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"

int main()
{
    RedSocial rs("Gaynet");
    int i=1;
menu:
    cout << "                         "<<rs.nombre << endl;
    cout << "                      Bienvenido" << endl; 
 
    cout << endl;
    cout << "Ingrese: " << endl; 
    cout << "==============================================================" << endl; 
    cout << "| 1 para ver los usuarios de esta red                        |" << endl;
    cout << "| 2 para ver las publicaciones que han sido registradas.     |" << endl;
    cout << "| 3 para entrar al perfil de un usuario por medio de su ID.  |" << endl;
    cout << "| 4 para agregar un nuevo usuario.                           |" << endl;
    cout << "| 5 para salir del programa.                                 |" << endl;
    cout << "=============================================================="<< endl;  
  

    

    Usuario u1(42364,"Tilin123", 12, "Guatemalteco");
    Usuario u2(76767,"FazePepinito42", 24, "Estadounidense");
    Usuario u3(34432,"Bananin", 87, "Peruano");
    rs.agregarUsuario(u1);
    rs.agregarUsuario(u2);
    rs.agregarUsuario(u3);

    do
    {

        int op;
        cin >> op;
        cout << endl;

        string nombre;
        int edad,ID;
        string nacionalidad;
        Usuario uz(ID,nombre, edad, nacionalidad);

        switch (op)
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
            int id, ida,pub;
            cin >> id;
            cout << endl; 
 amigo:
            Usuario *u;
            u = rs.getUsuario(id);
            Usuario *na;
            
            do
            {
                u->mostrar();
                cout << "Ahora en el perfil de este usuario, tiene las siguientes opciones: " << endl;
                cout << "=============================================" << endl; 
                cout << "| 1 ver lista de amigos.                    |" << endl;
                cout << "| 2 ver publicaciones.                      |" << endl;
                cout << "| 3 crear publicacion.                      |"<< endl;
                cout << "| 4 entrar al perfil de un amigo.           |"<< endl;
                cout << "| 5 agregar un nuevo amigo.                 |"<< endl;
                cout << "| 6 agregar comentario.                     |" << endl;
                cout << "| 7 para volver al menu de la red.          |" << endl; 
                cout << "============================================="  << endl; 

                int verusuario;
                cin >> verusuario;
                switch (verusuario)
                {
                case 1:
                    u->mostrarAmigos();
                    cout << endl;
                    cout << endl; 
                    break;
                case 2:
                    u->mostrarPublicaciones();
                    cout << endl;
                    cout << endl;
                    break;
                case 3:
                    u->crearPublicacion();
                    cout << endl;
                    cout << endl; 
                    break;
                case 4:
                    cout << "Ingrese el ID del amigo: " << endl;
                    cin >> id;
                    goto amigo;

                    break; 
                case 5:
                    cout << "Ingrese el ID del nuevo amigo" << endl;
                    cin >> ida;
                    u->agregarAmigo(rs.getUsuario(ida));
                    rs.getUsuario(ida)->agregarAmigo(u);
                    break;
                case 6:
                cout << "Elige la publicacion (numero) "<< endl;
                cin >>pub;
                u->Publicaciones[pub-1]->agregarComentario();
                cout << endl; 
                    
                case 7:
                goto menu;
                break;   
 
                    
                break;          
            } }while (true);
        case 4:
            cout << "Ingrese los datos del nuevo usuario:  " << endl;

            cout << "Username: " << endl;
            cin >> uz.nombre;
            cout << "Edad: " << endl;
            cin >> uz.edad;
            cout << "Nacionalidad: " << endl;
            cin >> uz.nacionalidad;
            uz.setID();
            rs.agregarUsuario(uz);
            break;

        case 5:
            return 0;
            break;
        }

    } while (true);


    return 0;
}