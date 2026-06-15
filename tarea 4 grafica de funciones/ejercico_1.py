import numpy as np
import matplotlib.pyplot as plt

# Tiempo
t = np.linspace(0, 6, 1000)

# Función x(t)
x = np.exp(-t/3) * np.cos(2*np.pi*t + np.pi/4)

# Derivadas numéricas
v = np.gradient(x, t)
a = np.gradient(v, t)

# Gráficas
plt.figure(figsize=(8,8))

plt.subplot(3,1,1)
plt.plot(t, x, 'r')
plt.title("Posición x(t)")
plt.grid()

plt.subplot(3,1,2)
plt.plot(t, v, 'b')
plt.title("Velocidad v(t)")
plt.grid()

plt.subplot(3,1,3)
plt.plot(t, a, 'g')
plt.title("Aceleración a(t)")
plt.grid()

plt.tight_layout()
plt.show()