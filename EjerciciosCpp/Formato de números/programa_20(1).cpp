//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 23 de Septiembre de 2020
//# Descripción: Operaciones con formato

# include <iostream>
# include <iomanip>

using namespace std;

main()
{
    cout << setw(3) << fixed << setprecision(1) << 3.0 << endl
         << setw(3) << fixed << setprecision(1) << 5.0 << endl
         << "--- (*)" << endl
         << 3.0 * 5.0 << " = Respuesta\n" << endl;

    cout << setw(3) << fixed << setprecision(1) << 7.1 << endl
         << setw(3) << fixed << setprecision(1) << 8.3 << endl
         << "--- (*)" << endl
         << setw(3) << fixed << setprecision(1) << 2.2 << endl
         << "--- (-)" << endl
         << (7.1 * 8.3) - 2.2 << " = Respuesta\n" << endl;

    cout << setw(3) << fixed << setprecision(1) << 3.2 << endl
         << "--- (/)" << endl
         << setw(3) << fixed << setprecision(1) << 6.1 << endl
         << setw(3) << fixed << setprecision(1) << 5 << endl
         << "--- (*)" << endl
         << 3.2 / (6.1 * 5) << " = Respuesta"<< endl;

    return 0;
}
