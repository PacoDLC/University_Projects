//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 23 de Septiembre de 2020
//# Descripción: Operaciones con formato

#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    double R_1, R_2, R_3, R_C;
    cout << "Se tiene que la Resistencia Combinada de tres resistores\n"
         << "conectados en paralelo esta dada por la siguiente ecuacion:\n" << endl
         << "\t\t                               1\n"
         << "\t\t                        _______________\n"
         << "\t\tResistencia Combinada =  1     1     1\n"
         << "\t\t                        ___ + ___ + ___\n"
         << "\t\t                        R_1   R_2   R_3\n" << endl
         << "Donde las R_i son los valores de resistencia de cada resistor i en ohmios.\n" << endl
         << "Si R_1 = 1000 , R_2 = 1000 y R_3 = 1000, entonces...\n" << endl;
    R_1 = 1000;
    R_2 = 1000;
    R_3 = 1000;
    R_C = 1 / ((1/R_1)+(1/R_2)+(1/R_3));
    cout << "La Resistencia combinadada es: " << "|" <<  setw (7) << setfill('0') << fixed << setprecision (2)
    << R_C << "|" << " ohmios" << endl;


         return 0;
}

