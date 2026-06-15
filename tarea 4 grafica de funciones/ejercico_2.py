import numpy as np
import sympy as sp
import matplotlib.pyplot as plt
from scipy.integrate import simpson

t = sp.symbols('t')

x = sp.exp(-t/3) * sp.cos(2*sp.pi*t + sp.pi/4)

v = sp.diff(x, t)

fv = sp.lambdify(t, v, 'numpy')

T = np.linspace(0, 6, 1000)

V = fv(T)

Iv = []

for i in range(1, len(T)+1):
    Iv.append(simpson(V[:i], x=T[:i]))

plt.plot(T, Iv)
plt.title("Integral acumulada de v(t)")
plt.xlabel("Tiempo (s)")
plt.ylabel("Integral")
plt.grid()
plt.show()