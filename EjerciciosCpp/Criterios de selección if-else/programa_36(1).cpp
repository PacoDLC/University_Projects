//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que pide un codigo

#include <iostream>

using namespace std;

int main()
{
    char codigo;
    cout << "\t¡¡¡HABILITACION DEL DESPLIEGUE!!!" << endl
         << "\nFavor de ingresar el codigo para el despliegue: "; cin >> codigo;
    if (codigo == 'g')
        cout << "\nProceder con el despliegue" << endl;
    else
        cout << "\nCancelar despliegue" << endl;

    return 0;
}
