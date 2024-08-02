import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Definir un parser para leer los archivos con extension ".xvg"

def parse_xvg(archivo_xvg):
    datos = []
    with open(archivo_xvg, 'r') as file:
        capturar = False
        for line in file:
            if '@ s2 legend "g\sk"' in line:
                capturar = True
            #elif capturar and line.startswith('#'):
            #    continue
            elif capturar and line.startswith('#'):
                capturar = False
            elif capturar:
                registros = line.split()
                datos.append(registros)
    return pd.DataFrame(datos, columns = ['Tiempo(ps)','Epsilon(*)','KF1','KF2'])

# Capturar datos de los archivos con extension ".xvg"

eps103_df = parse_xvg("epsilon103.xvg")
eps118_df = parse_xvg("epsilon118.xvg")
eps138_df = parse_xvg("epsilon138.xvg")
eps155_df = parse_xvg("epsilon155.xvg")
eps180_df = parse_xvg("epsilon180.xvg")

eps103_df['Tiempo(ps)'] = pd.to_numeric(eps103_df['Tiempo(ps)'])
eps103_df['Epsilon(*)'] = pd.to_numeric(eps103_df['Epsilon(*)'])
print("\n Archivo 'epsilon103.xvg' capturado :3")
eps118_df['Epsilon(*)'] = pd.to_numeric(eps118_df['Epsilon(*)'])
print("\n Archivo 'epsilon118.xvg' capturado :3")
eps138_df['Epsilon(*)'] = pd.to_numeric(eps138_df['Epsilon(*)'])
print("\n Archivo 'epsilon138.xvg' capturado :3")
eps155_df['Epsilon(*)'] = pd.to_numeric(eps155_df['Epsilon(*)'])
print("\n Archivo 'epsilon155.xvg' capturado :3")
eps180_df['Epsilon(*)'] = pd.to_numeric(eps180_df['Epsilon(*)'])
print("\n Archivo 'epsilon180.xvg' capturado :3")

tiempo_serie = eps103_df["Tiempo(ps)"]
eps103_datos = eps103_df["Epsilon(*)"]
eps118_datos = eps118_df["Epsilon(*)"]
eps138_datos = eps138_df["Epsilon(*)"]
eps155_datos = eps155_df["Epsilon(*)"]
eps180_datos = eps180_df["Epsilon(*)"]

# Crear gráfico para visualizar evolucion de epsilon durante la simulacion

sns.set(style = "whitegrid")
plt.figure(figsize = (8,6))
plt.plot(tiempo_serie, eps103_datos, label="T = 103 K", color="purple", linestyle='-', linewidth = 3)
plt.plot(tiempo_serie, eps118_datos, label="T = 118 K", color="red", linestyle='-', linewidth = 3)
plt.plot(tiempo_serie, eps138_datos, label="T = 138 K", color="blue", linestyle='-', linewidth = 3)
plt.plot(tiempo_serie, eps155_datos, label="T = 155 K", color="green", linestyle='-', linewidth = 3)
plt.plot(tiempo_serie, eps180_datos, label="T = 180 K", color="magenta", linestyle='-', linewidth = 3)
plt.xlabel("Tiempo (ps)", fontsize = 16)
plt.gca().xaxis.set_major_locator(plt.MaxNLocator(integer=True, prune='both'))
plt.ylabel("Epsilon (*)", fontsize = 16)
plt.gca().yaxis.set_major_locator(plt.MaxNLocator(integer=True, prune='both'))
plt.legend(fontsize = 14)
plt.title("Evolucion de Epsilon", fontsize = 18)
plt.grid(True)
plt.tight_layout()
plt.savefig("3Epsilon.png", dpi = 300, bbox_inches = "tight")
plt.show()

print("\n ### Grafica '3Epsilon.png' generada :) ### \n")
