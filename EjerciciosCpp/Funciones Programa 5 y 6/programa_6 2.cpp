//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 28 de Octubre de 2020
//# Descripción: Programa que calcula suma, resta, producto, cociente de dos numeros usando una funcion modular de tipo prototipo.

# include <iostream>

using namespace std;

void suma (double , double );
void resta (double , double );
void multiplicacion (double , double );
void division (double , double );
void modulo (int , int);

int main()
{
    char respuesta;
    double a, b;
    int option;
    do
    {
        system ("cls");
        cout << "Programa que calcula suma, resta, producto, cociente de dos numeros." << endl;
        cout << "\nIngrese dos numeros: " << endl;
        cout << " a = "; cin >> a;
        cout << " b = "; cin >> b;
        cout << "-------------------------------------" << endl;
        cout << "Ingrese una instruccion de operacion:" << endl;
        cout << "-------------------------------------" << endl;
        cout << "1. Suma: a+b\n";
        cout << "2. Resta: a-b\n";
        cout << "3. Multiplicacion: a*b\n";
        cout << "4. Division: a/b\n";
        cout << "5. Modulo: a\%b con a,b enteros y a > b" << endl;
        cout << "-------------------------------------" << endl;
        cin >> option;

        if (option == 1)
            {
                suma(a,b);
            }
        else if (option == 2)
            {
                resta(a,b);
            }
        else if (option == 3)
            {
                multiplicacion(a,b);
            }
        else if (option == 4)
            {
                division(a,b);
            }
        else if (option == 5)
            {
                modulo(a,b);
            }
        else
            {
                cout << "Lo sentimos. La opcion elegida es incorrecta." << endl;
            }

            cout << "\nDesea realizar otra operacion?(s/n): "; cin >> respuesta;

            if (respuesta == 'n')
                {
                    system("cls");
                    cout << "\nEl programa ha finalizado." << endl;
                }
    } while (respuesta == 's');


    return 0;
}

void suma (double x, double y)
{
    cout << "\nLa suma de los numeros " << x << " y " << y << " es: " << x + y << endl;
}

void resta (double x, double y)
{
    cout << "\nLa resta de los numeros " << x << " y " << y << " es: " << x - y << endl;
}

void multiplicacion (double x, double y)
{
    cout << "\nLa multiplicacion de los numeros " << x << " y " << y << " es: " << x * y << endl;
}

void division (double x, double y)
{
    if (y == 0)
        cout << "\nLo sentimos. La division entre 0 no esta definida :'(" << endl;
    else
        cout << "\nLa division de los numeros " << x << " y " << y << " es: " << x / y << endl;
}

void modulo (int x, int y)
{
    cout << "\nEl modulo de los numeros " << x << " y " << y << " es: " << x % y << endl;
}

