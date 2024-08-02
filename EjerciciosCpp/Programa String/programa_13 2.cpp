//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 11 de Noviembre de 2020
//# Descripción: Programa String

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre, apellido_pat, apellido_mat, fecha_nat, calle, num_dir, barrio_col, municipio, edo, pais, telefono, licenciatura, hobbie, coment;
    char respuesta_1, respuesta_3;
    int respuesta_2;

    cout << "\t<<< REGISTRO DE DATOS PERSONALES >>>\n" << endl;
    cout << "Favor de ingresar la informacion solicitada.\n" << endl;
    cout << "Nombre(s): "; getline(cin,nombre);
    cout << "Apellido paterno: "; getline(cin,apellido_pat);
    cout << "Apellido materno: "; getline(cin,apellido_mat);
    cout << "Fecha de Nacimiento : "; getline(cin,fecha_nat);
    cout << "Direccion: " << endl;
    cout << " > Calle: "; getline(cin,calle);
    cout << " > Numero: "; getline(cin,num_dir);
    cout << " > Barrio/Colonia: "; getline(cin,barrio_col);
    cout << " > Municipio: "; getline(cin,municipio);
    cout << " > Estado: "; getline(cin,edo);
    cout << " > Pais: "; getline(cin,pais);
    cout << "Telefono: "; getline(cin,telefono);
    cout << "Licenciatura: "; getline(cin,licenciatura);
    cout << "Pasatiempo favorito: "; getline(cin,hobbie);

    do
    {
        system("cls");
        cout << "\t<<< REGISTRO DE DATOS PERSONALES >>>\n" << endl;
        cout << "Favor de verificar datos\n" << endl;
        cout << "Usuario: " << nombre << " " << apellido_pat << " " << apellido_mat << endl;
        cout << "Fecha de Nacimiento: " << fecha_nat << endl;
        cout << "Direccion: " << calle << " / No. " << num_dir << " / " << barrio_col << " / " << municipio << " / " << edo << " / " << pais << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Licenciatura: " << licenciatura << endl;
        cout << "Pasatiempo favorito: " << hobbie << endl;

        cout << "\nDesea corregir algun dato antes de proceder? (s/n): "; cin >> respuesta_1;
        if (respuesta_1 == 's')
        {
            cout << "\n >> 1. Usuario" << endl;
            cout << " >> 2. Fecha de Nacimiento" << endl;
            cout << " >> 3. Direccion" << endl;
            cout << " >> 4. Telefono" << endl;
            cout << " >> 5. Licenciatura" << endl;
            cout << " >> 6. Pasatiempo favorito" << endl;
            cout << "\n Que desea corregir?: "; cin >> respuesta_2;
            switch(respuesta_2)
            {
            case 1:
                {
                    cin.ignore();
                    cout << "\nNombre(s): "; getline(cin,nombre);
                    cout << "Apellido paterno: "; getline(cin,apellido_pat);
                    cout << "Apellido materno: "; getline(cin,apellido_mat);
                    break;
                }
            case 2:
                {
                    cin.ignore();
                    cout << "\nFecha de Nacimiento : "; getline(cin,fecha_nat);
                    break;
                }
            case 3:
                {
                    cin.ignore();
                    cout << "\nDireccion: " << endl;
                    cout << " > Calle: "; getline(cin,calle);
                    cout << " > Numero: "; getline(cin,num_dir);
                    cout << " > Barrio/Colonia: "; getline(cin,barrio_col);
                    cout << " > Municipio: "; getline(cin,municipio);
                    cout << " > Estado: "; getline(cin,edo);
                    cout << " > Pais: "; getline(cin,pais);
                    break;
                }
            case 4:
                {
                    cin.ignore();
                    cout << "\nTelefono: "; getline(cin,telefono);
                    break;
                }
            case 5:
                {
                    cin.ignore();
                    cout << "Licenciatura: "; getline(cin,licenciatura);
                    break;
                }
            case 6:
                {
                    cin.ignore();
                    cout << "Pasatiempo favorito: "; getline(cin,hobbie);
                    break;
                }
            }
            cout << "Desea volver a verificar datos?(s/n): "; cin >> respuesta_3;
        }
        else
        {
            respuesta_3 = 'n';
        }
    }
    while (respuesta_3 == 's');

    system("cls");
    cout << "\t<<< REGISTRO DE DATOS PERSONALES >>>\n" << endl;
    cout << "Favor de ingresar una breve descripcion de su persona (delimitador *): " << endl;
    getline(cin,coment,'*');
    system("cls");
    cout << "\t<<< REGISTRO DE DATOS PERSONALES >>>\n" << endl;
    cout << "Usuario: " << nombre << endl;
    cout << "\nDescripcion: " << coment << endl;
    cout << "\nSUS DATOS SE HAN GUARDADO EXITOSAMENTE :)" << endl;

    return 0;
}
