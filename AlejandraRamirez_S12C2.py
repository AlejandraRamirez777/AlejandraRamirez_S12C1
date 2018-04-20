import numpy as np
import matplotlib.pyplot as plt

xi = np.genfromtxt("dataini.txt", usecols = 0)
Ai = np.genfromtxt("dataini.txt", usecols = 1)

x = np.genfromtxt("datax2.txt", usecols = 0)
A = np.genfromtxt("datax2.txt", usecols = 1)

plt.plot(xi,Ai, c = "g")

plt.plot(x[:78],A[:78])
print x[77]
plt.ylim(0.9,2.2)
#plt.xlim(0,10)

end = np.shape(x)
print end
a = 0
c = 78

while(c<end[0]):
    
    plt.plot(x[a:c],A[a:c])
    a += 78
    c +=78
    print c
    


plt.show()
