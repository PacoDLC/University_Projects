//# Programa Ejercicio 1
//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 21 de Septiembre de 2020
/* Descripción: Ejercicio 1: Escriba un programa en C++ que calcule el n-ésimo termino en una sucesión aritmética,
                usando una instrucción de asignación. (sin usar la instrucción cin).*/

#include <iostream>

using namespace std;

int main()
{
    int a_n, n, a_m, m, d;
    cout << "Dada la formula general para el n-esimo termino de una";
    cout << "\nprogresion o sucesion aritmetica:\n";
    cout << "\n\ta_n = a_m + ( n - m ) * d\n";
    cout << "\nDonde:\n";
    cout << "a_n = el termino n-esimo de la sucesion\n";
    cout << "a_m = un termino aleatorio con posicion m fija dentro de la sucesion\n";
    cout << "d = la diferencia comun entre terminos sucesivos de la secuencia\n";
    cout << "Ademas 'm' y 'n' son naturales y 'm < n'\n";
    /* Se utiliza el operador de asignación "=" para asignar valores a las variables establecidas previamente*/
    n = 10;
    a_m = 13;
    m = 5;
    d = 3;
    a_n = a_m + ( n - m ) * d;
    cout << "\nPor lo tanto, se tiene que para la sucesion con:\n";
    cout << a_m << " = el valor en la posicion numero " << m << " dentro de la sucesion\n";
    cout << d << " = la diferencia entre terminos sucesivos\n";
    cout << "El valor del termino numero " << n << " dentro de la secuencia es: " << a_n << endl;

    return 0;
}
