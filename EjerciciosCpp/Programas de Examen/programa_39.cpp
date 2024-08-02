//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 09 de Diciembre de 2020
//# Descripción: Creación de la biblioteca de funciones. Ejercicios

#include<iostream>
/*Se incluye la dirección del archivo de C++ (.cpp) dónde se encuentra la biblioteca de funciones creada*/
#include<C:\Users\Ess Pakiny\Documents\Uni xD\3er Semestre\Lenguajes de Programación\Programas_C++\2do parcial\programa#38_Entero_Fracc.cpp>

using namespace Entero_Fracc;

int main()
{
    double numero;
    int part_ent;
    double part_fracc;

    setlocale (LC_CTYPE, "Spanish");

    cout << "Ingrese un número con decimales: "; cin >> numero;
    cout << "\nEl número ingresado es: " << numero << endl;
    /*Las siguinte dos líneas invocan las funciones creadas y guardadas en la bibioteca Entero_Fracc*/
    part_ent = entero(numero);
    part_fracc = partefracc(numero);
    cout << "\nSu parte entera es: " << part_ent << endl;
    cout << "\nSu parte fraccionaria es: " << part_fracc << endl;

    return 0;
}
