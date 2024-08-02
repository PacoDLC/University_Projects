//# Programa Ejercicio 2
//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 21 de Septiembre de 2020
/* Descripción: Ejercicio 2: Escriba un programa en C++ que calcule el n-ésimo termino en una sucesión aritmética,
                usando una instrucción de asignación. (usando la instrucción cin).*/

#include <iostream>

using namespace std;

int main()
{
    float a_n, a_m, d;
    int n, m;
    cout << "Dada la formula general para el n-esimo termino de una";
    cout << "\nprogresion o sucesion aritmetica:\n";
    cout << "\n\ta_n = a_m + ( n - m ) * d\n";
    cout << "\nDonde:\n";
    cout << "a_n = el termino n-esimo de la sucesion\n";
    cout << "a_m = un termino aleatorio con posicion m fija dentro de la sucesion\n";
    cout << "d = la diferencia comun entre terminos sucesivos de la secuencia\n";
    cout << "Ademas 'm' y 'n' son naturales y 'm < n'\n";
    /* Se utiliza la instrucción "cin >>" para asignar valores a las variables establecidas previamente por medio del teclado */
    cout << "\n   Ingrese la posicion n del termino que desea encontrar: ";
    cin >> n;
    cout << "\n   Ingrese un termino aleatorio de su sucesion: ";
    cin >> a_m;
    cout << "\n   Ingrese la posicion m (menor a n) del termino aleatorio elegido: ";
    cin >> m;
    cout << "\n   Ingrese el valor de la diferencia entre terminos sucesivos: ";
    cin >> d;
    /* Se utiliza el operador de asignación "=" para asignar valores a las variables establecidas previamente */
    a_n = a_m + ( n - m ) * d;
    cout << "\nPor lo tanto, se tiene que para la sucesion con:\n";
    cout << a_m << " = el valor en la posicion numero " << m << " dentro de la sucesion, y\n";
    cout << d << " = la diferencia entre terminos sucesivos\n";
    cout << "\nEl valor del termino numero " << n << " dentro de la secuencia es: " << a_n << endl;

    return 0;
}
