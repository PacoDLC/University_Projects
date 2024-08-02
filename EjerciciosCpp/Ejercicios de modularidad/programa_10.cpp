//# Lenguajes de programación
//# Alumno: Francisco Javier de la Cruz Lugo
//# 06 de Noviembre de 2020
//# Descripción: Programa que usa una plantilla de funcion llamada maximo() que devuelve el valor maximo de tres argumentos que se transmitan a la funcion cuando es llamada.

# include <iostream>

using namespace std;

template <class T>
T maximo(T x,T y,T z)
{
    T num_max;
    if (x >= y && x >= z)
        num_max = x;
    else if (y >= x && y >= z)
        num_max = y;
    else if (z >= x && z >= y)
        num_max = z;
    return num_max;
}

int main()
{
    int a, b, c;
    float d, e, f;
    double g, h , i;
    cout << "\tPROGRAMA QUE OBTIENE EL VALOR MAXIMO DE TRES NUMEROS\n" << endl;
    cout << "\nIntroduzca tres numeros enteros (a,b,c):" << endl;
    cin >> a >> b >> c;
    cout << "\nIntroduzca tres numeros flotantes (d,e,f):" << endl;
    cin >> d >> e >> f;
    cout << "\nIntroduzca tres numeros doble presicion (g,h,i):" << endl;
    cin >> g >> h >> i;

    cout << "\nEl valor maximo de los numeros " << a << " , " << b << " , " << c << " es: " << maximo(a,b,c) << endl;
    cout << "\nEl valor maximo de los numeros " << d << " , " << e << " , " << f << " es: " << maximo(d,e,f) << endl;
    cout << "\nEl valor maximo de los numeros " << g << " , " << h << " , " << i << " es: " << maximo(g,h,i) << endl;

    return 0;
}
