//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que aproxima el valor del seno mediante la serie de Taylor

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, rad, sen_aprox, desv;
    cout << "Para valores pequeños de x, el valor del sen(x) puede aproximarse\n" << endl
         << "con la serie de potencias siguiente:\n" << endl
         << "               x^3       x^5       x^7\n" << endl
         << "sen(x) = 1 - _______ + _______ - _______ + ...\n" << endl
         << "                6        120      5040\n" << endl;
    cout << "\nFavor de introducir un valor para x en radianes: ";
    cin >> rad;
    sen_aprox = rad - ((pow(rad,3))/6) + ((pow(rad,5))/120) - ((pow(rad,7))/5040);
    x = rad * (180/3.1416);
    desv = sin(rad) - sen_aprox;
    cout << "El angulo " << rad << " en radianes es igual a " << setw(5) << fixed << setprecision(2) << x << " en grados\n" << endl
         << "El valor aproximado para sen(" << setw(5) << fixed << setprecision(2) << x << ") mediante la serie anterior es:\n" << endl
         << "\t|" << setw(12) << fixed << setprecision(10) << sen_aprox << "|\n" <<endl;
    cout << "El cual tiene una diferencia absoluta de: " << setw(12) << fixed << setprecision(10) << desv << endl
         << "\ncon el valor del seno integrada en C++";

    return 0;
}

