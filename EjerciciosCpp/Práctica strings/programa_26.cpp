//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 27 de Noviembre de 2020
//# Descripción: Programa que cuanta el numero de palabras de una cadena ingresada.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string cadena;
    int i, longitud, cuenta_palabras = 1, cuenta_M = 0, cuenta_m = 0;
    char caracter;

    cout << "\n Ingresar cadena: " << endl;
    getline(cin,cadena);
    longitud = int(cadena.length());

    for (i = 0 ; i < longitud ; i ++)
    {
        caracter = cadena.at(i);

        if (isspace(caracter))
        {
            cuenta_palabras ++;
        }
        /*Para contar las letras mayusculas y las minusculas*/
        else if (isupper(caracter))
        {
            cuenta_M ++;
        }
        else if (islower(caracter))
        {
            cuenta_m ++;
        }
    }
    cout << "\n La cadena tiene " << cuenta_palabras << " palabras." << endl;
    cout << " La cadena tiene " << cuenta_M << " MAYUSCULAS." << endl;
    cout << " La cadena tiene " << cuenta_m << " minusculas." << endl;

    return 0;
}

/* ¿que pasa si la palabra incluye numeros? P.ejemplo:
   La pandemia fue provocada por el Covid19

   R. El programa cuenta la cadena "covid-19" pero si se introduce "covid 19" lo consider como 2 palabras */
