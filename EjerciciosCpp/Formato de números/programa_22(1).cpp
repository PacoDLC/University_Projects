//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 23 de Septiembre de 2020
//# Descripción: Operaciones con formato

#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    double x, W, L, M_fmax;
    cout << "La formula para el momento de flexion maximo es ls siguiente: \n" << endl
         << "\t                         x * W (L - x) \n"
         << "\tMomento de flexion Max = ______________\n"
         << "\t                               L\n"
         << "Donde:\n" << endl
         << "x = distancia del extremo de la viga en el que se coloca un peso" << endl
         << "W = peso colocado al extremo" << endl
         << "L = largo de la viga\n" << endl;
    cout << "Introduzca un valor para x: "; cin >> x;
    cout << "Introduzca un valor para W: "; cin >> W;
    cout << "Introduzca un valor para L: "; cin >> L;
    M_fmax = ((x)*(W)*(L - x))/L;
    cout << "\nEl momento de flexion maxima es: " << "|" <<  setw (9) << setfill('0') << fixed << setprecision (4)
         << M_fmax << "|" << endl;

    return 0;
}
