//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 07 de Octubre de 2020
//# Descripción: Programa que usa la serie de Maclaurin para aproximar el valor del seno(x)

# include <iostream>
# include <cmath>
# include <iomanip>

using namespace std;

int main()
{
    double angulo, pi, ang_rad, n_exp, signo, arg, numerador, den_fact, suma_t, n_term, termino_n, error_min, error, error_abs, cont_n;
    int contador_i;

    pi = 3.141592653589793238462643383; // Asignaión del valor de pi para la conversion a radianes
    n_exp = 0; // Inicializa el "n" elemento de la serie de Maclaurin
    den_fact = 1; // Inicializa el valor del denominador (Elemento factorial) en la serie
    suma_t = 0; // Inicializa el valor de la suma de los terminos de la serie
    // error_min = 0.000000000001; // Asignacion del valor del error minimo a considerar
    contador_i = 1000000;

    cout << "\tPrograma que aproxima el valor de sen(x) para un angulo dado" << endl;
    cout << "\t      con un error minimo de 1x10^(-6) usando \"For\"." << endl;
    // cout << "\n\t       | Radian.....(r) <-> Grados.....(g) |" << endl;
    cout << "\nIngrese el valor del angulo en grados: "; cin >> angulo; // Se ingresa el valor del angulo en grados para realizar la conversion a radines
    ang_rad = angulo * (pi / 180); // Conversion del angulo a radianes
    // cout << ang_rad << endl;
    cout << "\nEl angulo de " << angulo << " en grados equivale a |" << setw(28) << fixed << setprecision(26) << ang_rad << "| en radianes." << endl;
    cout << "\nIngrese el error minimo al que desea aproximar : "; cin >> error_min;

    for (n_exp = 0; n_exp < contador_i; n_exp ++)
    {
        n_term = n_exp + 1;
        signo = pow((-1),(n_exp));
        if (signo == 1)
        {
            //cout << "\n|" << setw(40) << setprecision(0) << right << "+" << "| : Signo del termino " << setw(9) << setprecision(0) << left  << n_term << endl;
        }
        else if (signo == -1)
        {
            //cout << "\n|" << setw(40) << setprecision(0) << right << "-" << "| : Signo del termino " << setw(9) << setprecision(0) << left  << n_term << endl;
        }
        arg = (2*n_exp) + 1;
        numerador = pow(ang_rad,arg);
        //cout << "|" << setw(40) << fixed << setprecision(37) << numerador << "| : Numerador del termino " << setw(9) << setprecision(0) << left  << n_term << endl;
        for (cont_n = 1; cont_n <= arg; arg --)
        {
            den_fact = arg * den_fact;
            // arg --;
        }
        //cout << "|" << setw(40) << setprecision(0) << right << den_fact << "| : Denominador del termino " << setw(9) << setprecision(0) << left  << n_term << endl;
        termino_n = signo * (numerador / den_fact);
        //cout << "|" << setw(40) << fixed << setprecision(37) << termino_n << "| : Valor del termino " << setw(9) << setprecision(0) << left << n_term << endl;
        suma_t = suma_t + termino_n; // Realiza la suma por cada termino calulado en las funciones anteriores
        //cout << "|" << setw(40) << fixed << setprecision(37) << suma_t << "| : Valor suma hasta el termino " << setw(9) << setprecision(0) << left << n_term << endl;
        error = sin(ang_rad) - suma_t; // Calcula el valor del seno con la palabra reservada en C++ y obtiene la diferencia con el valor aproximado en el proceso anterior
        error_abs = abs(error);
        //cout << "|" << setw(40) << fixed << setprecision(37) << error_abs << "| : Error absoluto" << endl; // Imprime el error o deviación absoluta
        if (error_abs > error_min)
        {
            // n_exp ++;
            contador_i --;
            den_fact = 1;
        }
        else if (error_abs < error_min)
        {
            n_exp = contador_i;
        }
    }
    cout << "\nSe sumaron en total " << setw(3) << setprecision(0) << n_term << " terminos de la serie de Maclaurin" << endl;
    cout << "para aproximar el valor del seno de " << angulo << endl;
    cout << "Con un error menor a " << setw(8) << fixed << setprecision(6) << error_min << endl;
    cout << "\n\t\tRESULTADOS:" << endl;
    cout << "\nValor del sen(" << setprecision(3) << angulo << ") = |" << setw(18) << fixed << setprecision(12) << sin(ang_rad) << "|" << endl;
    cout << "Valor aproximado      = |" << setw(18) << fixed << setprecision(16) << suma_t << "|" << endl;
    cout << "Error minimo          = |" << setw(18) << fixed << setprecision(16) << error_min << "|" << endl;
    cout << "Error absoluto        = |" << setw(18) << fixed << setprecision(16) << error_abs << "|" << endl;

    return 0;
}
