//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que pide un codigo para uso de un generador

#include <iostream>

using namespace std;

int main()
{
    char codigo;
    cout << "\tCODIGO DEL GENERADOR" << endl
         << "\nFavor de ingresar el codigo para el uso del genrador: "; cin >> codigo;
    if (codigo == 's')
        cout << "\nEl capataz debe usar el generador mas pequeño." << endl;
    else
        cout << "\nEl capataz debe usar el generador mas grande." << endl;

    return 0;
}
