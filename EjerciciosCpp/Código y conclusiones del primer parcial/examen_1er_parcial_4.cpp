//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 21 de Octubre de 2020
//# Descripción: Examen Metodo de falsa posicion 2

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double Er, a, b, h, i, y, a_1, b_1, E_abs, f_a, f_b, numerador, denominador, x_r, f, E;
    int n, contador;
    char respuesta;
    cout << "\tMetodo de falsa posicion aplicado a la funcion: " << endl;
    cout << "\n\t                4" << endl;
    cout << "\t        f(x) = x - 1 = 0" << endl;
    cout << "\nIngrese el error minimo a aproximar: "; cin >> Er;
    // Er = 0.000001;
    cout << "\nIngrese un intervalo cualquiera [a,b]: " << endl;
    cout << "\n  a = "; cin >> a;
    cout << "  b = "; cin >> b;
    cout << "\nIngrese el numero de subientervalos: "; cin >> n;
    h = (b - a) / n;
    cout << "\n\t|   x   ||   f(x)  || Signo f(x)|" << endl;
    cout << "\t---------------------------------" << endl;
    do
    {
    for (i = a; i < b + h; i = i + h)
        {
            y = pow(i,4) -1;
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

    cout << "\nIngrese el intervalo adecuado para iniciar la aproximacion: " << endl;
    cout << "\n a_1 = "; cin >> a_1;
    cout << " b_1 = "; cin >> b_1;

    E_abs = 1;
    contador = 0;
    while (E_abs > Er)
    {
        f_a = pow(a_1,4) - 1;
        f_b = pow(b_1,4) - 1;
        numerador = f_b * (a_1 - b_1);
        denominador = f_a - f_b;
        x_r = b_1 - (numerador / denominador);
        f = pow(x_r,4) - 1;
        E_abs = abs(f);

        if (f_a*f < 0)
        {
            b_1 = x_r;
        }
        else
        {
            a_1 = x_r;
        }
        contador ++;
    }

    cout << "\nLa raiz aproximada es: " << setw(20) << setprecision(18) << x_r << endl;
    cout << "\nError minimo: " << Er;
    cout << "\n\nSe requieren " << contador << " iteraciones. Error absoluto = " << E_abs << endl;

    return 0;
}
