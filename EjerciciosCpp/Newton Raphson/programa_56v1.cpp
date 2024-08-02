//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 16 de Octubre de 2020
//# Descripción: Programa que aproxima raíces de pilonomios usando el metodo de Newton-Rapson dada una ecuación.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x_0, x_i, numerador, denominador, aprox_i, er, er_abs, a, b, h, n, y, i;
    int cont_i;
    char respuesta, resp_2;

    cont_i = 0;
    cout << "\tAPROXIMACION DE RAICES POR NEWTON-RAPSON" << endl;
    cout << "\n\t                      y(x_i)" << endl;
    cout << "\t     x_(i+1) = x_i + _________" << endl;
    cout << "\t                      y'(x_i)" << endl;
    cout << "\nDada la ecuacion y(x) = (3x^2) + (2x) - (2) = 0" << endl;
    cout << "\nIngresar el error minimo a aproximar: "; cin >> er;
    do
    {
    do
    {
        system("cls");
        cout << "\tAPROXIMACION DE RAICES POR NEWTON-RAPSON" << endl;
        cout << "\n\t                      y(x_i)" << endl;
        cout << "\t     x_(i+1) = x_i + _________" << endl;
        cout << "\t                      y'(x_i)" << endl;
        cout << "\nDada la ecuacion y(x) = (3x^2) + (2x) - (2) = 0" << endl;
        cout << "\nIngrese un intervalo cualquiera [a,b]: " << endl;
        cout << "\n  a = "; cin >> a;
        cout << "  b = "; cin >> b;
        cout << "\nIngrese el numero de subientervalos: "; cin >> n;
        h = (b - a) / n;
        cout << "\nIntervalo seleccionado = [" << a << "," << b << "]" << endl;
        cout << "\nLa longitud de los subientravlos es: " << h << endl;
        cout << "\nSe generan " << n + 1 << " puntos." << endl;
        cout << "\n\t|   x   ||   f(x)  || Signo f(x)|" << endl;
        cout << "\t---------------------------------" << endl;
        for (i = a; i < b + h; i = i + h)
        {
            y = 3*(pow(i,2)) + 2*(i) - 2;
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
        cout << "\nIngresar el valor para x_0\? (s/n): "; cin >> respuesta;
    } while (respuesta == 'n');

    cout << "\nIngrese el valor inicial para x: "; cin >> x_0;
    cout << "\nValor inicial para x_0 = " << x_0;
    cout << endl;
    x_i = x_0;

    do
    {
        numerador = 3*(pow(x_i,2)) + 2*(x_i) - 2;
        denominador = 6*(x_i) + 2;
        aprox_i = x_i - (numerador/denominador);
        system ("cls");
        cont_i ++;
        cout << "\tAPROXIMACION DE RAICES POR NEWTON-RAPSON" << endl;
        cout << "\n\t                      y(x_i)" << endl;
        cout << "\t     x_(i+1) = x_i + _________" << endl;
        cout << "\t                      y'(x_i)" << endl;
        cout << "\nDada la ecuacion y(x) = (3x^2) + (2x) - (2) = 0" << endl;
        cout << "\nAproximacion_(" << cont_i << ") = |" << /*setw(27) << fixed << setprecision(25)*/ setw(20) << setprecision(15) << aprox_i << "|" << endl;
        er_abs = abs(aprox_i - x_i);
        cout << "\nError minimo: " << er;
        x_i = aprox_i;

    } while (er <= er_abs);//( respuesta == 's');//

        cout << "\n\nSe requieren " << cont_i << " iteraciones. Error absoluto: " << er_abs << endl;
        cout << "desde un valor inicial = " << x_0 << endl;
        cout << "\nDesea encontrar otra raiz\? (s/n): "; cin >> resp_2;
    } while (resp_2 == 's');
    if (resp_2 == 'n')
    {
        system("cls");
        cout << "\n\tPROGRAMA FINALIZADO." << endl;
    }

    return 0;
}
