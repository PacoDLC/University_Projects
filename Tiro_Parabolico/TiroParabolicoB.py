import math

archivo = open("tiroparabolico_conaire.xyz","w")
archiva = open("tiroparabolico_conaire.dat","w")

print(" ")

v0 = float(input('v0: '))
theta = float(input('theta: '))
x0 = float(input('x0: '))
y0 = float(input('y0: '))
b = float(input('b: '))
n = int(input('npasos: '))

print(" ")

sigmar = 3.16
pi = 3.1416
fact = pi/180.0
theta = theta*fact
gravedad = 9.81
b2 = b*b

v0x = v0*math.cos(theta)
v0y = v0*math.sin(theta)
dt = 0.05
tiempo = 0.0

for i in range(0,n+1,1):
    cotay = 0.0
    archivo.write(str(1) + ' ' + '\n');
    archivo.write(str(' ') + ' ' + '\n');
    x = x0 + (v0x/b)*(1.0 - math.exp(-b*tiempo))
    y = y0 + (1.0/b2)*(gravedad+b*v0y)*(1.0 - math.exp(-b*tiempo)) - tiempo*gravedad/b
    x = x*sigmar
    y = y*sigmar
    z = 0.0
    tiempo = tiempo + dt
    if (y >= cotay):
       archiva.write(str(x) + ' ' + str(y) + '\n');
       archivo.write("H" + ' ' + str(x) + ' ' + str(y) + ' ' + str(z) + '\n');

archivo.close;
archiva.close;

print("\n Archivo 'tiroparabolico_conaire.xyz' generado");
print("\n Archivo 'tiroparabolico_conaire.dat' generado \n");
 
