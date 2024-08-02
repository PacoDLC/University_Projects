from scipy.optimize import curve_fit
import numpy as np 
from matplotlib import pyplot as plt 
from random import random

#Definiendo todas funciones que vamos a utilizar 

def linear (x, a ,b):
    return a*x + b

def parabola(x, a, b , c):
    return a*x*x + b * x + c

def normal(x, miu, sigma):
    return np.exp(-((x-miu)**2)*(2*sigma**2))

def exponencial (x, lamb):
    return lamb*np.exp(-lamb*x)

def weibull (x, alfa, beta, indice):
    return x**(indice)*np.exp(-(x/beta)**alfa)

def lognormal (x, miu, sigma):
    return (1/x)*np.exp(-((np.log(x)-miu)**2)/(2*sigma**2))

## Se hacen todos los procesos 
opcion = 8
while (opcion != 0):
    print("""¿Que tipo de funcion quieres utilizar?
    Lineal ............ [1]
    Parabolica ........ [2]
    Normal ............ [3]
    Exponencial ....... [4]
    Weibull ........... [5]
    Lognormal ......... [6]
    Salir ............. [0]
         """)

    op = int(input("Oprime la opcion que quieres: "))

    if op == 1:
        print("Escogiste un 'Ajuste lineal': y = a*x + b")
        print("Generando datos aleatorios")
        print("Empezamos con los intervalos (en enteros)")
        inf = int(input("x0: "))
        sup = int(input("x1: "))
        xx = np.linspace(inf, sup, 30)
        ca = float(input("Dame el coeficiente lineal a: "))          # Yo le mando antes los valores con los
        cb = float(input("Dame el coeficiente independiente b: "))   # que obtendrá datos aleatorios que se acomoden
        yy = []
        for val in xx:
            evaluacion_aleatoria = linear(val, ca, cb) + (random()-0.5)*5
            yy.append(evaluacion_aleatoria)
        coeficientes, covarianza = curve_fit(linear, xx, yy)
        print("Coeficientes [a,b]:",coeficientes)
        plt.scatter(xx, yy, label = "Datos aleatorios")
        plt.plot(xx, linear(xx, coeficientes[0], coeficientes[1]), 'r--', label = "Ajuste: y=" + str(coeficientes[0]) + "*x +" + str(coeficientes[1]))
        plt.legend()
        plt.grid()
        plt.show()

    if op == 2:
        print("Escogiste un 'Ajuste Parabolico': y = a*x^2 + b*x + c")
        print("Generando datos aleatorios")
        print("Empezamos con los intervalos (en enteros)")
        inf = int(input("x0: "))
        sup = int(input("x2: "))
        xx = np.linspace(inf, sup, 30)
        ca = float(input("Dame el coeficiente cuadrado a: "))    #Yo le mando antes los valores con los
        cb = float(input("Dame el coeficiente lineal b: "))   #que obtendrá datos aleatorios que se acomoden
        cc = float(input("Dame el coeficiente independiente c: "))
        yy = []
        for val in xx: #Para  hacer datos cercanos a la parabola
            evaluacion_aleatoria = parabola(val, ca, cb, cc) + (random()-0.5)*5
            yy.append(evaluacion_aleatoria)
        coeficientes, covarianza = curve_fit(parabola, xx, yy)
        print("Coeficientes [a,b,c]: ",coeficientes)
        plt.scatter(xx, yy, label = "Datos Aleatorios")
        plt.plot(xx, parabola(xx, coeficientes[0], coeficientes[1], coeficientes[2]), "r--", label = "Ajuste: y = " + str(coeficientes[0]) + "*x^2 + " + str(coeficientes[1]) + "*x + " + str(coeficientes[2]))
        plt.legend()
        plt.grid()
        plt.show()
    
    if op == 3:
        print("Escogiste un 'Ajuste Normal': y = exp(-((x-miu)**2)*(2*sigma**2))")
        print("Generando datos aleatorios")
        print("Empecemos con los intervalor (En enteros)")
        inf = int(input("x0: "))
        sup = int(input("x1: "))
        numero_datos = int(input("Dame el numero de datos (Recomendamos un valor mayor a 100): "))
        xx = np.linspace(inf, sup, numero_datos)
        miu = float(input("Dame el valor de miu: "))
        sigma = float(input("Dame el valor de sigma (El valor de sigma debe ser positivo): "))
        yy = []
        for val in xx:
            evaluacion_aleatoria = normal(val, miu, sigma) + (random()-0.5)*0.1
            yy.append(evaluacion_aleatoria)
        coeficientes, covarianza = curve_fit(normal, xx, yy)
        print("Coefiecientes [miu,sigma]: ",coeficientes)
        plt.scatter(xx, yy, label = "Datos Aleatorios")
        plt.plot(xx, normal(xx, coeficientes[0], coeficientes[1]), "r--", label = "Ajuste y = exp(-((x-"+str(coeficientes[0])+")**2)*(2*"+str(coeficientes[1])+"**2))")
        plt.legend()
        plt.grid()
        plt.show()
    
    if op == 4:
        print("Escogiste un 'Ajuste Exponencial': y = lamb*exp(-lamb*x)")
        print("Generando Datos Aleatorios")
        print("Empecemos con los intervalo (en enteros desde 0 en adelante)")
        inf = int(input("x0: "))
        sup = int(input("x2: "))
        numero_datos = int(input("Dame el numero de datos (Recomendamos un valor mayor a 100): "))
        xx = np.linspace(inf, sup, numero_datos)
        lamb = float(input("Dame el valor de lambda (debe ser positivo): "))
        yy = []
        for val in xx:
            evaluacion_aleatoria = exponencial(val, lamb) + (random()-0.5)*0.1
            yy.append(evaluacion_aleatoria)
        coeficientes, covarianza = curve_fit(exponencial, xx, yy)
        print("Coeficiente [lambda]: ",coeficientes)
        plt.scatter(xx, yy, label = "Datos Aleatorios")
        plt.plot(xx, exponencial(xx, coeficientes[0]), "r--", label = "Ajuste y = "+str(coeficientes[0])+"*exp(-"+str(coeficientes[0])+"*x)")
        plt.legend()
        plt.grid()
        plt.show()

    if op == 5:
        print("Escogiste un 'Ajuste de Weibull': y = x**(indice)*exp(-(x/beta)**alfa)")
        print("Generando Datos Aleatorios")
        print("Empecemos con los intervalo (en enteros desde 0 en adelante) ")
        inf = int(input("x0: "))
        sup = int(input("x1: "))
        numero_datos = int(input("Dame el numero de datos (Recomendamos un valor mayor a 100): "))
        xx = np.linspace(inf, sup, numero_datos)
        alfa = float(input("Dame el valor de alfa (debe ser positivo): "))
        beta = float(input("Dame el valor de beta (debe ser positivo): "))
        indicealfa_menos1 = float(alfa - 1)
        yy = []
        for val in xx:
            evaluacion_aleatoria = weibull(val, alfa, beta, indicealfa_menos1) + (random()-0.5)*0.1
            yy.append(evaluacion_aleatoria)
        coeficientes, covarianza = curve_fit(weibull, xx, yy)
        print("Coeficientes [alfa,beta,indice]: ",coeficientes)
        plt.scatter(xx, yy, label = "Datos Aleatorios")
        plt.plot(xx, weibull(xx, coeficientes[0], coeficientes[1], coeficientes[2]), "r--", label = "Ajuste: y = x**("+str(coeficientes[2])+")*exp(-(x/"+str(coeficientes[1])+")**"+str(coeficientes[0])+")")
        plt.legend()
        plt.grid()
        plt.show()

    if op == 6:
        print("Escogiste un 'Ajuste Lognormal': y = (1/x)*exp(-((log(x)-miu)**2)/(2*sigma**2))")
        print("Generando Datos Aleatorios")
        print("Empecemos con los intervalo (en enteros desde 0 en adelante) ")
        inf = int(input("x0: "))
        sup = int(input("x1: "))
        numero_datos = int(input("Dame el numero de datos (Recomendamos un valor mayor a 100): "))
        xx = np.linspace(inf, sup, numero_datos)
        if inf == 0:
            xx = xx[1:]
        miu = float(input("Dame el valor de miu: "))
        sigma = float(input("Dame el valor de sigma (debe ser positivo): "))
        yy = []
        for val in xx:
            evaluacion_aleatoria = lognormal(val, miu, sigma) + (random()-0.5)*.1
            yy.append(evaluacion_aleatoria)
        coeficientes, covarianza = curve_fit(lognormal, xx, yy)
        print("Coeficientes [miu,sigma]: ",coeficientes)
        plt.scatter(xx,yy, label = "Datos Aleatorios")
        plt.plot(xx, lognormal(xx, coeficientes[0],coeficientes[1]), "r--", label = "Ajuste: y = (1/x)*exp(-((log(x)-"+str(coeficientes[0])+")**2)/(2*"+str(coeficientes[1])+"**2))")
        plt.legend()
        plt.grid()
        plt.show()


    opcion = op
