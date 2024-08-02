//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que devuleve la presion de una onda

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double tiempo, presion;
    cout << "\tPrograma que calcula la presion de una onda en psi.\n" << endl
         << "Ingrese un valor para el tiempo(s): "; cin >> tiempo;
    if (tiempo <= 35)
    {
        presion = 0.46 * tiempo;
        cout << "\nLa presion de la onda a " << tiempo << " segundos es: |" << setw(7) << fixed << setprecision(3) << setfill('0') << presion << "| psi." << endl;
    }
    else
    {
        presion = (0.19 * tiempo) + 9.45;
        cout << "\nLa presion de la onda a " << tiempo << " segundos es: |" << setw(7) << fixed << setprecision(3) << setfill('0') << presion << "| psi." << endl;
    }

    return 0;
}
