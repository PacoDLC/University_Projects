//# Lenguajes de programaci�n
//# Alumno: Francisco Javier de la Cruz Lugo
//# 09 de Diciembre de 2020
//# Descripci�n: Creaci�n de la biblioteca de funciones. Ejercicios

#include<iostream>
/*Se incluye la direcci�n del archivo de C++ (.cpp) d�nde se encuentra la biblioteca de funciones creada*/
#include<C:\Users\Ess Pakiny\Documents\Uni xD\3er Semestre\Lenguajes de Programaci�n\Programas_C++\2do parcial\programa#38_Entero_Fracc.cpp>

using namespace Entero_Fracc;

int main()
{
    double numero;
    int part_ent;
    double part_fracc;

    setlocale (LC_CTYPE, "Spanish");

    cout << "Ingrese un n�mero con decimales: "; cin >> numero;
    cout << "\nEl n�mero ingresado es: " << numero << endl;
    /*Las siguinte dos l�neas invocan las funciones creadas y guardadas en la bibioteca Entero_Fracc*/
    part_ent = entero(numero);
    part_fracc = partefracc(numero);
    cout << "\nSu parte entera es: " << part_ent << endl;
    cout << "\nSu parte fraccionaria es: " << part_fracc << endl;

    return 0;
}
