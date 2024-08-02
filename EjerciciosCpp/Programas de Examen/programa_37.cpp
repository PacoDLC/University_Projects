//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 09 de Diciembre de 2020
//# Descripción: Creación de funciones para una bibioteca personal de funciones

#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    int entero(double); // Declaración de la función prototipo para parte entera de un número
    double partefracc(double); // Declaración de la función prototipo para parte fraccionaria de un número

    double numero;
    int part_ent;
    double part_fracc;

    setlocale (LC_CTYPE, "Spanish");

    cout << "Ingrese un número con decimales: "; cin >> numero;
    cout << "\nEl número ingresado es: " << numero << endl;
    part_ent = entero(numero);
    cout << "\nSu parte entera es: " << part_ent << endl;
    part_fracc = partefracc(numero);
    cout << "\nSu parte fraccionaria es: " << part_fracc << endl;

    return 0;
}

// Asignación de las funciones prototipo como funciones ejecutables:

int entero(double num_dec)
{
    /*Esta variable almacenará el número que se le transfiera en su forma entera*/
    int parte_entera;
    /*La siguiente instrucción almacena el número transmitodo en la variable tipo entera*/
    parte_entera = num_dec;
    /*Al final de la función se devuelve el valor guardado en la variable tipo entera,
    por lo que retiraría la parte decimal/fraccionaria del número*/
    return parte_entera;
}

double partefracc(double num_dec)
{
    /*Esta variable almacenará el número que se le transfiera pero solo su parte fraccionaría*/
    double parte_fraccionaria;
    /*La función llama a la función entero() anterior para que al número ingresado desde main se le reste su parte
    entera, de esta forma se almacenará la parte fraccionaría del número en cuestión*/
    parte_fraccionaria = num_dec - entero(num_dec);
    /*Al final de la función se devuelve el valor guardado en la variable de tipo double,
    por lo que solo devuelve la parte fraccionaría del número*/
    return parte_fraccionaria;
}
