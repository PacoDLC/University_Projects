//# Programa 9
//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 18 de Septiembre de 2020
//# Descripción: Creación de un lista de datos personales

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char name[100], paternal_surname[100], maternal_surname[100], birth_date[100], address[100], tel[100], degree[100], favorite_hobbie[1000];
    cout << "\t REGISTRO DE DATOS PERSONALES \n";
    cout << "\nFavor de introducir la informacion solicitada \n";
    cout << "\nIntroduzca su nombre(s): ";
    cin.getline(name,50,'\n');
    cout << "Introduzca su apellido paterno: ";
    cin.getline(paternal_surname,50,'\n');
    cout << "Introduzca su apellido materno: ";
    cin.getline(maternal_surname,50,'\n');
    cout << "Introduzca su fecha de nacimiento: ";
    cin.getline(birth_date,50);
    cout << "Introduzca su direccion: ";
    cin.getline(address,100,'\n');
    cout << "Introduzca su numero telefonico (10 digitos): ";
    cin.getline(tel,20,'\n');
    cout << "Introduzca la licenciatura que cursa: ";
    cin.getline(degree,50,'\n');
    cout << "Introduzca su pasatiempo favorito: ";
    cin.getline(favorite_hobbie,100,'\n');

    cout << "\n\nDATOS DEL USUARIO \n";
    cout << "\nNombre del Usuario: " << name << endl;
    cout << "Apellido Paterno: " << paternal_surname << endl;
    cout << "Apellido Materno: " << maternal_surname << endl;
    cout << "Fecha de nacimiento: " << birth_date << endl;
    cout << "Direccion: " << address << endl;
    cout << "Telefono: " << tel << endl;
    cout << "Licenciatura: " << degree << endl;
    cout << "Pasatiempo favorito: " << favorite_hobbie << endl;

    return 0;
}

/* Comentario: Utilizé las librerías "conio.h" y "string.h" por que uno de mis apellidos lleva espacios
   y con cin>> estos espacios no se guardaban, sólo me guardaba la primer palabra antes del espacio.
   La fuente de donde obtuve la info es: https://youtu.be/D7hbaJhgzBs */

