import numpy as np
import sympy as sp
import matplotlib.pyplot as plt
from scipy.integrate import simpson

t = sp.symbols('t')

x = sp.exp(-t/3) * sp.cos(2*sp.pi*t + sp.pi/4)

v = sp.diff(x, t)
a = sp.diff(v, t)

fa = sp.lambdify(t, a, 'numpy')

T = np.linspace(0, 6, 1000)

A = fa(T)

Ia = []

for i in range(1, len(T)+1):
    Ia.append(simpson(A[:i], x=T[:i]))

plt.plot(T, Ia)
plt.title("Integral acumulada de a(t)")
plt.xlabel("Tiempo (s)")
plt.ylabel("Integral")
plt.grid()
plt.show()