//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 09 de Diciembre de 2020
//# Descripción: Creación de la biblioteca de funciones. Ejercicios 5c y 6c

//#include<iostream>

using namespace std;

namespace Entero_Fracc
{
    /*Aquí inicia la función entero:*/
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
    /*Aquí termina la función entero*/

    /*Aquí inicia la funcíon partefracc*/
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
    /*Aquí termina la función partefracc*/
}
