import math

archivo_1 = open("mcua.xyz","w")
archivo_2 = open("mcua.dat","w")

print("\n => MOVIMIENTO CIRCULAR UNIFORMEMENTE ACELERADO <=")
print("\n Favor de ingrasar lo que se pide :3")
r = float(input("\n RADIO DE LA TRAYECTORIA (r):"))
w0 = float(input(" VELOCIDAD ANGULAR INICIAL (w0): "))
a = float(input(" ACELERACION ANGULAR (a): "))
n = int(input(" NUMERO DE PASOS: "))

sigmar = 3.16
theta = 0.0
dt = 0.05
tiempo = 0.0

for i in range(0, n+1, 1):
    archivo_1.write(str(1) + ' ' + '\n');
    archivo_1.write(str(' ') + ' ' + '\n');
    theta = w0*tiempo + 0.5*a*tiempo*tiempo
    x = r*math.cos(theta)
    y = r*math.sin(theta)
    x = x*sigmar
    y = y*sigmar
    z = 0.0
    tiempo = tiempo + dt
    archivo_2.write(str(x) + ' ' + str(y) + '\n')
    archivo_1.write("H" + ' ' + str(x) + ' ' + str(y) + ' ' + str(z) + '\n')

archivo_1.close;
archivo_2.close;

print("\n Archivo mcua.xyz generado")
print("\n Archivo mcua.dat generado")

print("\n LISTO CALIXTO :3 \n")
