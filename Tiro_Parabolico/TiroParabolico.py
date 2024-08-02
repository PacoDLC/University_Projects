import math

archivo = open("tiro_parabolico.xyz","w")
archiva = open("tiro_parabolico.dat","w")

print(" ")

print(" <<< TIRO PARABOLICO XD >>> \n")
v0 = float(input("Velocidad Inicial (v0): "))
theta = float(input("Angulo de Lanzamiento (theta): "))
x0 = float(input("Posicion en 'x' (x0): "))
y0 = float(input("Posicion en 'y' (y0): "))
n = int(input("Numero de pasos: "))

print(" ")

sigmar = 3.16
pi = 3.1416
fact = pi/180.0
theta = theta*fact
gravedad = 9.81
v0x = v0*math.cos(theta)
v0y = v0*math.sin(theta)
xmax = (v0*v0/(2.0*gravedad))*math.sin(2.0*theta)
ymax = (v0*v0/(2.0*gravedad))*math.sin(theta)*math.sin(theta)
print("Distancia Maxima en 'x': " + str(xmax))
print("Altura Maxima en 'y': " + str(ymax))
dt = 0.05
tiempo = 0.0

for i in range(0,n+1,1):
    cotay = 0.0
    archivo.write(str(1) + ' ' + '\n');
    archivo.write(str(' ') + ' ' + '\n');
    x = x0 + v0x*tiempo
    y = y0 + v0y*tiempo - 0.5*gravedad*tiempo*tiempo
    x = x*sigmar
    y = y*sigmar
    z = 0.0
    tiempo = tiempo + dt
    if (y >= cotay):
       archiva.write(str(x) + ' ' + str(y) + '\n')
       archivo.write("H" + ' ' + str(x) + ' ' + str(y) + ' ' + str(z) + '\n')

archivo.close;
archiva.close;

print("\n Archivo 'tiroparabolico.xyz' generado")
print("\n Archivo 'tiroparabolico.dat' generado \n")
print("LISTO CALIXTO :3")

print(" ")

