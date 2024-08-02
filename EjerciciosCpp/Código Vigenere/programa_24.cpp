//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 23 de Noviembre de 2020
//# Descripción: Programa que permite codificar o decodificar un mensaje a partir de una palabra mediante el cifrado de tipo Vigenere.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* DECLARACION DE VARIABLES: */
    /* Variables de tipo String para el mensaje a codificar o decodificar y la palabra clave */
    string mensaje, clave;
    /* Variables de tipo Entero para las longitudes del mensaje, la palabra clave,
       los auxilares del mensaje y la clave en ASCII y para el desplazamiento en el abecedario */
    char resp_2;
    int longitud_m, longitud_c, aux_m, aux_c, desp, resp_act;

    do
    {
        system("cls");
        /* Se inicializa el iterador del caracter de la palabra clave en 0*/
        int i_c = 0;

        cout << "\t <<< Programa que codifica o decodifica un mensaje en Vigenere >>>" << endl;

        /* CAPTURA DE DATOS INGRESADOS POR EL USUARIO: */
        cout << "\n Ingresar mensaje: \n" << endl;
        getline(cin,mensaje);
        /* Se obtiene el numero de caracteres del mensaje incluyendo los espacios
           y se guardan en la variable */
        longitud_m = int(mensaje.length());
        cout << "\n Ingrese la palabra clave: \n" << endl;
        getline(cin,clave);
        /* Se obtiene el numero de caracteres de la palabra clave y se guardan en la variable */
        longitud_c = int(clave.length());

        /* Se pregunta al usuario si el mensaje se codificara o decodificara */
        cout << "\n---------------------------------------------" << endl;
        cout << " Codificar(1)    <<<--->>>    Decodificar(2) " << endl;
        cout << "---------------------------------------------" << endl;
        cout << " Elija una opcion: "; cin >> resp_act;

        /* Se evalua la accion de acuerdo a la opcion seleccionada con el siguiente ciclo: */
        switch (resp_act)
        {
        /* En caso de seleccionar codificar mensaje (1) se evalua lo siguente: */
        case 1:
            {
                /*Se inicia el iterador del caracter en el mensaje en 0 y mientras este sea menor a la longitud del mensaje
                el ciclo se reetira hasta que se igualen sumando en 1 al final de este*/
                for (int i = 0 ; i < longitud_m  ; i++)
                {
                     /*Si el iterador de la clave es igual a su longitud, se reinica a 0*/
                     if (i_c == longitud_c)
                     {
                        i_c = 0;
                     }

                     /*Se obtiene el valor del caracter en ASCII en la posicion i_c en la palabra clave y se guarda como aux_c*/
                     aux_c = clave.at(i_c);

                     /*Se estima un desplazaiento en el alfabeto restando 97 al valor en ASCII del caracter de la clave
                     (97 es el valor ASCII de la letra a del alfabeto)*/
                     desp = aux_c - 97;

                     /*Se obtiene el valor del caracter en ASCII en la posicion i en el mensaje y se guarda como aux_m*/
                     aux_m = mensaje.at(i);

                     /*Se suman el valor ASCII del caracter del mensaje con el desplazamineto para encontrar el valor ASCII de la letra que sustituye a la original
                     En caso de que se pase de 122 (valor de z en ASCII), a la suma se le resta 122 y se suma 96*/
                     if (aux_m + desp > 122)
                     {
                         aux_m = ((aux_m + desp) - 122) + 96;
                     }
                     /*En caso contrario solo se encuentra el valor ASCII de la letra para reemplazar*/
                     else
                     {
                         aux_m = aux_m + desp;
                     }

                     /*Si el caracter en la posicion i del mensaje es un espacio, entonces el programa lo guarda con el mismo valor*/
                     if (mensaje.at(i) != ' ')
                     {
                         mensaje.at(i) = aux_m;
                     }

                     /*El iterador del caracter de la clave aumenta en 1 al final de cada repeticion del ciclo*/
                     i_c++;
                }
                /*Se imprime el mensaje codificado*/
                cout << "\n Texto codificado a: \n" << endl;
                cout << mensaje << endl;
                break;
            }
        /* En caso de seleccionar decodificar mensaje (2) se evalua lo siguente: */
        case 2:
            {
                /*Se inicia el iterador del caracter en el mensaje en 0 y mientras este sea menor a la longitud del mensaje
                el ciclo se reetira hasta que se igualen sumando en 1 al final de este*/
                for (int i = 0 ; i < longitud_m  ; i++)
                {
                     /*Si el iterador de la clave es igual a su longitud, se reinica a 0*/
                     if (i_c == longitud_c)
                     {
                         i_c = 0;
                     }

                     /*Se obtiene el valor del caracter en ASCII en la posicion i_c en la palabra clave y se guarda como aux_c*/
                     aux_c = clave.at(i_c);

                     /*Se estima un desplazaiento en el alfabeto restando 97 al valor en ASCII del caracter de la clave
                     (97 es el valor ASCII de la letra a del alfabeto)*/
                     desp = aux_c - 97;

                     /*Se obtiene el valor del caracter en ASCII en la posicion i en el mensaje y se guarda como aux_m*/
                     aux_m = mensaje.at(i);

                     /*Se restan a el valor ASCII del caracter del mensaje el desplazamineto para encontrar el valor ASCII de la letra que sustituye a la original
                     En caso de que sea menor a 97 (valor de a en ASCII), se suma 122 y se restan 96 con el desplazaimeto*/
                     if (aux_m - desp < 97)
                     {
                         aux_m = aux_m + 122 - (96 + desp);
                     }

                     /*En caso contrario solo se encuentra el valor ASCII de la letra para reemplazar restando el desplazamiento*/
                     else
                     {
                         aux_m = aux_m - desp;
                     }

                     /*Si el caracter en la posicion i del mensaje es un espacio, entonces el programa lo guarda con el mismo valor*/
                     if (mensaje.at(i) != ' ')
                     {
                         mensaje.at(i) = aux_m;
                     }

                     /*El iterador del caracter de la clave aumenta en 1 al final de cada repeticion del ciclo*/
                     i_c++;
                }
                /*Se imprime el mensaje codificado*/
                cout << "\n Texto decodificado a: \n" << endl;
                cout << mensaje << endl;
                break;
            }
        }
        /*Se pregunta al usuario se desea volver a correr el programa*/
        cout << "\n Desea volver a ejecutar el programa\? (s/n): "; cin >> resp_2;
        cin.ignore();
        /*Las instrucciones anteriores se repiten siempre que la respuesta sea "s" en la pregunta antrior*/
    }while (resp_2 == 's');

    /*En caso de responder "n" El ciclo se detiene y el programa finaliza */
    if (resp_2 == 'n')
    {
        system("cls");
        cout << "\t <<< Programa que codifica o decodifica un mensaje en Vigenere >>>" << endl;
        cout << "\n El programa ha finalizado." << endl;
    }

    /*Si se introduce una respuesta diferente de las disponibles el programa finaliza inmediatamente*/
    else { system("cls"); cout << " \n\t Lo sentimos. Respuesta no valida :'(" << endl; }

    return 0;
}
