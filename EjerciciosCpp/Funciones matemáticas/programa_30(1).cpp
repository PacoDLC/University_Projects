//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Septiembre de 2020
//# Descripción: Programa que calcula la altura maxima que alcanza una pelota lanzada a velociadad en millas/hora

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

main()
{
    double height, vel_Mh, vel_ms, alpha, rad;
    cout << "La altura maxima alcanzada por una pelota lanzada con una velocidad inicial v, en m/s," << endl
         << "en un angulo 'a' esta dada pror la formula: \n" << endl
         << "\n\t         (0.5 * v^2 * sen^2(a))" << endl
         << "\taltura = ______________________\n" << endl
         << "\t                   9.8" << endl;
    cout << "\nSabiendo esto, introduzca los datos que se piden: \n" << endl;
    cout << "Velocidad en millas/hora: ";
    cin >> vel_Mh;
    cout << "Angulo de lanzamiento en grados: ";
    cin >> alpha;
    vel_ms = vel_Mh * (1609.34) / (3600);
    rad = alpha * (3.1416 / 180);
    height = (0.5 * pow(vel_ms,2) * pow(sin(rad),2)) / 9.81;
    cout << "\nLa altura maxima alcanzada por la pelota lanzada a " << vel_Mh << " millas/hora" << endl
         << "en un angulo de " << alpha << " grados es: |" << setw(6) << fixed << setprecision(2) << setfill('0') << height << "| metros" << endl;

    return 0;
}
