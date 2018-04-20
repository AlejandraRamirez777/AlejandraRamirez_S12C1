import numpy as np
import matplotlib.pyplot as plt

x = np.genfromtxt("datax.txt", usecols = 0)
A = np.genfromtxt("datax.txt", usecols = 1)

plt.plot(x,A)
plt.show()
