//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 06 de Noviembre de 2020
//# Descripción: Programa que usa una plantilla de funcion llamada alcuadrado() que calcula y devuelve el cuadrado del argumento unico transmitido a la función cuando es llamada.

# include <iostream>

using namespace std;

template <class T>
T alcuadrado(T num)
{
    T n_cuadrado;
    n_cuadrado = num * num;
    return n_cuadrado;
}

int main()
{
    int num_i;
    float num_f;
    double num_d;

    cout << "\tPROGRAMA QUE CALULA EL CUADRADO DE UN NUMERO\n" << endl;
    cout << "\nIntrduzca el numero que desea elevar al cuadrado (entero):" << endl;
    cin >> num_i;
    cout << "\nIntrduzca el numero que desea elevar al cuadrado (flotante):" << endl;
    cin >> num_f;
    cout << "\nIntrduzca el numero que desea elevar al cuadrado (doble presicion):" << endl;
    cin >> num_d;

    cout << "\nEl cuadrado del numero " << num_i << " es: " << alcuadrado(num_i) << endl;
    cout << "\nEl cuadrado del numero " << num_f << " es: " << alcuadrado(num_f) << endl;
    cout << "\nEl cuadrado del numero " << num_d << " es: " << alcuadrado(num_d) << endl;

    return 0;
}
