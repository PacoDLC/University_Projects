//# Lenguajes de programaci�n
//# Alumno: Francisco Javier de la Cruz Lugo
//# 02 de Diciembre de 2020
//# Descripci�n: Programa que detecta el caracter que invalida que la cadena sea convertida a entero.

# include <iostream>
# include <string>
# include <cctype>
# include <locale.h> // Esta biblioteca permite emplear algunos s�mbolos ortogr�ficos dentro del programa

using namespace std;

/*Esta funci�n detectar� los caracteres que invalidan la cadena a converir en n�mero:*/
void Error (string, int);

int main()
{
    // Prototipo de funci�n. Declaraci�n de la funci�n prototipo:

    /*Esta funci�n identificar� si la cadena ingresada es aceptable como un n�mero.
    Esto si esque la cadena contiene algunos caracteres que ocasiones que la cadena
    no sea considerada como un n�mero.*/
    bool num_ent_valido(string);

    // Declaraci�n de variables:

    /*Esta variable contedr� la cadena a analizar para posteriormente guardarla o no como un n�mero*/
    string valor;
    /*En esta variable se almacenar� la cadena converida a numero si es que cumple las condicones
    establecidas en la definici�n de la funci�n prototipo:*/
    int numero;
    // Uso de la biblioteca que permite usar acentos ortogr�ficos dentro del programa:
    setlocale (LC_CTYPE, "Spanish");

    // Desarrollo del programa:

    /*Se captura la cadena a analizar:*/
    cout << "\n Ingrese un n�mero entero: "; getline(cin,valor);
    /*Condici�n a evaluar. si la funci�n booleana declrada es falsa o bien si es verdadera:*/
    if (!num_ent_valido(valor))
    {
        /*En caso de ingresarse una cadena no aceptable como numero se imprime lo siguente:*/
        cout << " El n�mero ingresado no es un entero v�lido." << endl;
    }
    else
    {
        /*En caso contrario, se almacena la cadena convertida a numero en la variable asignada y se
        imprime como un n�mero al final del programa:*/
        numero = atoi(valor.c_str());
        cout << " El n�mero ingresado es: " << numero << endl;
    }

    return 0;
}

// Definici�n de la funci�n empleada en la funci�n principal:

/*Los valores booleanos (bool) almacenan valores de verdadero o falso*/
bool num_ent_valido(string cadena)
{
    /*Se asume que el n�mero ingresado es v�lido. Iniciando la variable con un valor verdadero (true):*/
    bool valido = true;
    /*Se asume que no hay signo en la posicion inicial de la cadena. Iniciando la variable un
    valor falso (false), as� mismo se asume que no hay un caracter que invalida la cadena:*/
    bool signo = false, char_inv = false;
    int inicio = 0;
    /*Se declara el iterador de la posicion de la cadena */
    int i;

    /*Se comprueba que la cadena no sea vac�a. Esto es que la longitud del cadena no se igual a 0*/
    if ( int(cadena.length() == 0) )
    {
        /*Para este caso el valor de valido se vuelve falso:*/
        valido = false;
    }

    /*Se comprueba si existe un signo a la izquierda del n�mero (al inicio de la cadena)*/
    if (cadena.at(0) == '-' || cadena.at(0) == '+')
    {
        /*Si en la primer entrada de la cadena hay un signo negativo o positivo, el valor booleano de
        signo se vuelve verdadero y al analisis del resto de la cadena se inicia en la posici�n 1:*/
        signo = true;
        /*Con esta instrucci�n el programa comprobar� los d�gitos despu�s del signo*/
        inicio = 1;
    }

    /*Se comprueba si hay alg�n caracter despu�s del signo*/
    if (signo && int(cadena.length() == 1))
    {
        /*En caso de solo haberse ingresado un signo sin m�s n�meros, el valor de valido se vuelve falso:*/
        valido = false;
    }

    /* Ahora, sabemos que la cadena tiene longitud mayor a 1, se comprueba cada elemento
    de la cadena para verificar que solo tiene d�gitos. Se inicia el iterador de la cadena con
    el valor de inicio el cual se comprueba en las instrucciones anteriores, esto es, en caso de
    haber o noun signo al inicio de la cadena:*/
    i = inicio;
    /*Mientras valido sea verdadero y el iterador sea menor a la longitud de la cadena. Se ejecuta
    el ciclo a continuaci�n:*/
    while (valido && i < int(cadena.length()))
    {
        /*Se eval�a la condici�n para digitos en la cadena:*/
        if (!isdigit(cadena.at(i)))
        {
            /*Si se encuentra un caracter que no es un n�mero, entonces el valor de valido se vuelve falso:*/
            valido = false;
            /*Para este caso el caracter inv�lido se vuelver verdadero*/
            char_inv = true;
        }
        /*El siguiente ciclo eval�a la funci�n error en cada caracter inv�lido*/
        while (char_inv && i < int(cadena.length()))
        {
            Error (cadena,i);
            i++;
        }
        /*El iterador aumenta en uno cada vez que analiza un caracter en la cadena*/
        i ++;
    }
    /*Se imprime el valor de valido. Si es verdadero (true) se imprime 1 y si es falso (false) se imprime 0*/
    cout << " El valor de la variable 'v�lido\' es: " << valido << endl;

    /*Al final de la funci�n se devuelve el valor de valido:*/
    return valido;
}

/*Esta funci�n detectar� los caracteres que invalidan la cadena*/
void Error (string err, int i_inv)
{
    if (isalpha (err.at(i_inv)))
    {
        /*Si el caracter inv�lido es una letra, entonces se indica dicha letra*/
        cout << " El n�mero no pueder ser validado debido al caracter '" << err.at(i_inv) << "'" << endl;
    }
    else if (!isdigit (err.at(i_inv)))
    {
        /*Si el caracter inv�lido es cualquier otro s�mbolo, entonces se indica imprimemndolo en la pantalla*/
        cout << " El n�mero no pueder ser validado debido al caracter '" << err.at(i_inv) << "'" << endl;
    }
}
