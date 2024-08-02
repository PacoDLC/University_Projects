//# Lenguajes de programaci�n
//# Alumno: Francisco Javier de la Cruz Lugo
//# 09 de Diciembre de 2020
//# Descripci�n: Creaci�n de la biblioteca de funciones. Ejercicios 5c y 6c

//#include<iostream>

using namespace std;

namespace Entero_Fracc
{
    /*Aqu� inicia la funci�n entero:*/
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
    /*Aqu� termina la funci�n entero*/

    /*Aqu� inicia la func�on partefracc*/
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
    /*Aqu� termina la funci�n partefracc*/
}
