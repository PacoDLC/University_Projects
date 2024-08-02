import pandas as pd
import matplotlib.pyplot as plt
from sklearn.metrics import mean_squared_error as mse, mean_absolute_error as mae, r2_score as r2
import seaborn as sns

# Importar datos de la simulacion recabados en el archivo "DensEpsSim.csv"
datos_sim_df = pd.read_csv("DensEpsSim.csv")

print("\n   Resultados de la Simulacion: \n")
print(datos_sim_df,"\n")

'''print("\n", Temp_Sim_df, "\n", Dens_Sim_df, "\n", Eps_Sim_df)'''

# Capturar datos experimentales

datos_exp = {
             "#Temp(K)": [90, 103, 108, 118, 130, 138, 147, 155, 175, 180, 185],
             "#DensExp(g/m^3)": [1.571, 1.533, 1.517, 1.486, 1.449, 1.425, 1.397, 1.372, 1.310, 1.295, 1.279],
             "#EpsExp(*)": [4.75, 4.33, 4.15, 3.85, 3.64, 3.46, 3.33, 3.20, 2.91, 2.84, 2.78]
}

datos_exp_df = pd.DataFrame(datos_exp)

print("\n   Datos Experimentales: \n")
print(datos_exp_df,"\n")

# Combinar datos experimentales con resultados de simulacion por Temperatura

datos_merged = pd.merge(datos_exp_df, datos_sim_df, on = '#Temp(K)',\
                        suffixes = ('_datos_exp_df', '_datos_sim_df'))

print("\n   Datos a comparar: \n")
print(datos_merged,"\n")

# Analisis Estadistico

mse_dens = mse(datos_merged["#DensExp(g/m^3)"], datos_merged["#DensSim(g/m^3)"])
mae_dens = mae(datos_merged["#DensExp(g/m^3)"], datos_merged["#DensSim(g/m^3)"])
r2_dens = r2(datos_merged["#DensExp(g/m^3)"], datos_merged["#DensSim(g/m^3)"])

mse_eps = mse(datos_merged["#EpsExp(*)"], datos_merged["#EpsSim(*)"])
mae_eps = mae(datos_merged["#EpsExp(*)"], datos_merged["#EpsSim(*)"])
r2_eps = r2(datos_merged["#EpsExp(*)"], datos_merged["#EpsSim(*)"])

print(f"\n Error Cuadratico Medio (Densidad): {mse_dens:.10f}")
print(f" Error Absoluto Medio (Densidad):   {mae_dens:.10f}")
print(f" Coeficiente R^2 (Densidad):        {r2_dens:.10f}")

print(f"\n Error Cuadratico Medio (Epsilon): {mse_eps:.10f}")
print(f" Error Absoluto Medio (Epsilon):   {mae_eps:.10f}")
print(f" Coeficiente R^2 (Epsilon):        {r2_eps:.10f}")

# Crear Graficas para visualizar resultados

sns.set(style = 'whitegrid')
plt.figure(figsize=(6, 5))
plt.plot(datos_exp_df["#Temp(K)"], datos_exp_df["#DensExp(g/m^3)"], linestyle = '--', linewidth = 3, label = 'Experimental', color = "magenta")
plt.scatter(datos_merged["#Temp(K)"], datos_merged["#DensSim(g/m^3)"], label = 'Simulación', marker='o', s = 100, color = "purple")
plt.xlabel('Temperatura (K)')
plt.ylabel('Densidad (g/cm^3)')
plt.legend()
plt.title('Densidad VS Temperatura')
plt.annotate(f'MSE: {mse_dens:.6f}\nMAE: {mae_dens:.6f}\nR^2: {r2_dens:.6f}', xy=(95, datos_exp_df["#DensExp(g/m^3)"].min()), xytext = (95, datos_exp_df["#DensExp(g/m^3)"].min()),
             fontsize=12, bbox=dict(boxstyle="round,pad=0.3", edgecolor = 'black', facecolor = 'lightgray'))
plt.savefig('1DensVSTemp.png', dpi=300, bbox_inches='tight')
plt.show()

sns.set(style = 'whitegrid')
plt.figure(figsize=(6, 5))
plt.plot(datos_exp_df["#Temp(K)"], datos_exp_df["#EpsExp(*)"], linestyle = '--', linewidth = 3, label = 'Experimental', color = "cyan")
plt.scatter(datos_merged["#Temp(K)"], datos_merged["#EpsSim(*)"], label = 'Simulación', marker='o', s = 100, color = "blue")
plt.xlabel('Temperatura (K)')
plt.ylabel('Epsilon (*)')
plt.legend()
plt.title('Epsilon VS Temperatura')
plt.annotate(f'MSE: {mse_eps:.6f}\nMAE: {mae_eps:.6f}\nR^2: {r2_eps:.6f}', xy=(95, datos_exp_df["#EpsExp(*)"].min()), xytext = (95, datos_exp_df["#EpsExp(*)"].min()),
             fontsize=12, bbox=dict(boxstyle="round,pad=0.3", edgecolor = 'black', facecolor = 'lightgray'))
plt.savefig('2EpsVSTemp.png', dpi=300, bbox_inches='tight')
plt.show()

print("\n  ### Graficas guardadas :3 ###  \n")
