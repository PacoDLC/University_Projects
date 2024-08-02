//# Lenguajes de programaci�n
//# Alumno: Francisco Javier de la Cruz Lugo
//# 09 de Diciembre de 2020
//# Descripci�n: Creaci�n de funciones para una bibioteca personal de funciones

#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    int entero(double); // Declaraci�n de la funci�n prototipo para parte entera de un n�mero
    double partefracc(double); // Declaraci�n de la funci�n prototipo para parte fraccionaria de un n�mero

    double numero;
    int part_ent;
    double part_fracc;

    setlocale (LC_CTYPE, "Spanish");

    cout << "Ingrese un n�mero con decimales: "; cin >> numero;
    cout << "\nEl n�mero ingresado es: " << numero << endl;
    part_ent = entero(numero);
    cout << "\nSu parte entera es: " << part_ent << endl;
    part_fracc = partefracc(numero);
    cout << "\nSu parte fraccionaria es: " << part_fracc << endl;

    return 0;
}

// Asignaci�n de las funciones prototipo como funciones ejecutables:

int entero(double num_dec)
{
    /*Esta variable almacenar� el n�mero que se le transfiera en su forma entera*/
    int parte_entera;
    /*La siguiente instrucci�n almacena el n�mero transmitodo en la variable tipo entera*/
    parte_entera = num_dec;
    /*Al final de la funci�n se devuelve el valor guardado en la variable tipo entera,
    por lo que retirar�a la parte decimal/fraccionaria del n�mero*/
    return parte_entera;
}

double partefracc(double num_dec)
{
    /*Esta variable almacenar� el n�mero que se le transfiera pero solo su parte fraccionar�a*/
    double parte_fraccionaria;
    /*La funci�n llama a la funci�n entero() anterior para que al n�mero ingresado desde main se le reste su parte
    entera, de esta forma se almacenar� la parte fraccionar�a del n�mero en cuesti�n*/
    parte_fraccionaria = num_dec - entero(num_dec);
    /*Al final de la funci�n se devuelve el valor guardado en la variable de tipo double,
    por lo que solo devuelve la parte fraccionar�a del n�mero*/
    return parte_fraccionaria;
}
