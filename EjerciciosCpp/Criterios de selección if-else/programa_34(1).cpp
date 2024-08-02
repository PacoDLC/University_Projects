//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que devuleve el valor para una onda

#include <iostream>

using namespace std;

int main()
{
    double tiempo;
    cout << "\tPrograma que devueleve el valor para una onda.\n";
    cout << "\nIngrese un valor para el tiempo: "; cin >> tiempo;
    if (tiempo >= 2)
        cout << "\nLa onda es de |" << 3 << "| voltios." << endl;
    else
        cout << "\nLa onda es de |" << 0 << "| voltios." << endl;

    return 0;
}
