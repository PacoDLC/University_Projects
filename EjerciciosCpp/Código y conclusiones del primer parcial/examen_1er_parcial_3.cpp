//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 14 de Octubre de 2020
//# Descripción: Programa que aproxima la raíz de un polinomio dado mediante el metodo de bisección.

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, h, i, y, a_1, b_1, x_r, f, E, f_a1, f_b1;
    int n, contador;
    double Er;
    char respuesta;
    cout << "\tMetodo de biseccion aplicado a la funcion: " << endl;
    cout << "\n\t                3   2" << endl;
    cout << "\t        f(x) = x - x - 1 = 0" << endl;
    cout << "\nIngrese el error minimo a aproximar: "; cin >> Er;

    do
    {
        system("cls");
        cout << "\tMetodo de biseccion aplicado a la funcion: " << endl;
        cout << "\n\t                3   2" << endl;
        cout << "\t        f(x) = x - x - 1 = 0" << endl;
        cout << "\nIngrese un intervalo cualquiera [a,b]: " << endl;
        cout << "\n  a = "; cin >> a;
        cout << "  b = "; cin >> b;
        cout << "\nIngrese el numero de subientervalos: "; cin >> n;
        h = (b - a) / n;
        system("cls");
        cout << "\tMetodo de biseccion aplicado a la funcion: " << endl;
        cout << "\n\t                3   2" << endl;
        cout << "\t        f(x) = x - x - 1 = 0" << endl;
        cout << "\nIntervalo seleccionado = [" << a << "," << b << "]" << endl;
        cout << "\nLa longitud de los subientravlos es: " << h << endl;
        cout << "\nSe generan " << n + 1 << " puntos." << endl;
        cout << "\n\t|   x   ||   f(x)  || Signo f(x)|" << endl;
        cout << "\t---------------------------------" << endl;
        for (i = a; i < b + h; i = i + h)
        {
            y = pow(i,3) - pow(i,2) -1;
            cout << setw(7) << fixed << setprecision(5) << "\t|" << i << "||" << setw(9) << fixed << setprecision(6) << y << "|";
            if (y <= 0)
            {
                cout << "|     -     |" << endl;
            }
            else
            {
                cout << "|     +     |" << endl;
            }
        }
        cout << "\nIngresar el intervalo de cambio de signo\? (s/n): "; cin >> respuesta;
    } while (respuesta == 'n');

    cout << "\nIngrese el intervalo adecuado para iniciar el metodo de biseccion: " << endl;
    cout << "\n a_1 = "; cin >> a_1;
    cout << " b_1 = "; cin >> b_1;

    system("cls");
    E = 1;
    contador = 0;
    while (E > Er)
    {
        x_r = (a_1 + b_1) / 2;
        f = pow(x_r,3) - pow(x_r,2) - 1;
        E = abs(f);
        //cout << E << endl;
        f_a1 = pow(a_1,3) - pow(a_1,2) - 1;
        f_b1 = pow(b_1,3) - pow(b_1,2) - 1;
        if (f_a1*f < 0)
        {
            b_1 = x_r;
        }
        else
        {
            a_1 = x_r;
        }
        contador ++;
    }
    cout << "\tMetodo de biseccion aplicado a la funcion: " << endl;
    cout << "\n\t                3   2" << endl;
    cout << "\t        f(x) = x - x - 1 = 0" << endl;
    cout << "\nLa raiz aproximada es: " << setw(20) << setprecision(18) << x_r << endl;
    cout << "\nError minimo: " << Er;
    cout << "\n\nSe requieren " << contador << " iteraciones. Error absoluto = " << E << endl;

    return 0;
}

