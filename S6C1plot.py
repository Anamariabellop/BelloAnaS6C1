import numpy as np
import matplotlib.pylab as plt

datos= np.genfromtxt("pulso.txt")

t=datos[:,0]
x=datos[:,1]

plt.figure()
plt.plot(t,x, color= 'c', label='upasado')
plt.xlabel("Amplitud")
plt.ylabel(" ")
plt.title("Condiciones iniciales")
plt.legend()
plt.savefig("pulso.png")