//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que calcula la distancia entre dos puntos

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

main()
{
    double d, x_1, y_1, x_2, y_2;
    cout << "Este programa calcula la distancia entre dos puntos en un plano (x,y).\n" << endl;
    cout << "Ingrese un valor para x_1: ";
    cin >> x_1;
    cout << "Ingrese un valor para y_1: ";
    cin >> y_1;
    cout << "Ingrese un valor para x_2: ";
    cin >> x_2;
    cout << "Ingrese un valor para y_2: ";
    cin >> y_2;
    d = sqrt(pow((x_2 - x_1),2) + pow((y_2 - y_1),2));
    cout << "\nLa distancia entre el punto (" << x_1 << "," << y_1 << ") y el punto (" << x_2 << "," << y_2 << ") es :" << endl;
    cout << "\nDistancia = |" << setw(8) << fixed << setprecision(3) << setfill('0') << d << "|" << " unidades" << endl;

    return 0;
}
