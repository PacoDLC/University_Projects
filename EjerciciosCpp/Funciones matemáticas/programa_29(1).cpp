//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que calcula la altura de una escalera inclinada

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

main()
{
   double height_ft, height_m, length, alpha, rad;
   cout << "Si se coloca una escalera de 20 pies de largo con una inclinacion de un angulo de" <<  endl
        << "85 grados sobre un lado de un edificio, la altura a la que la escalera toca el" << endl
        << "edificio esta dada por la expresion: \n" << endl;
   cout << "\t \th = L * sen(a)\n" << endl
        << "Donde: h = altura a la que toca el edificio" << endl
        << "       L = longitud de la escalera" << endl
        << "       a = angulo de inclinacion\n" << endl
        << "Sabiendo esto, introduzca los valores que se piden: \n" << endl;
   cout << "Longitud de la escalera (pies): "; cin >> length;
   cout << "Angulo de inclinacion en grados: "; cin >> alpha;
   rad = alpha*(3.1416/180);
   height_ft = length * sin(rad);
   height_m = height_ft / 3.2808;
   cout << "\nLa altura a la que la escalera toca el edificio es: |" << setw(6) << fixed << setprecision(2) << setfill('0') << height_ft << "| pies" << endl;
   cout << "O bien, tambien pueden ser: |" << setw(6) << fixed << setprecision(2) << setfill('0') << height_m << "| metros" << endl;


        return 0;
}
