import numpy as np
import matplotlib.pylab as plt

datos= np.genfromtxt("pulso.txt")

t=datos[:,0]
upasado=datos[:,1]
ufuturo=datos[:,2]

plt.figure()

plt.subplot(2,1,1)
plt.plot(t,upasado, color= 'c', label='upasado')
plt.xlabel("Amplitud")
plt.ylabel(" ")
plt.legend()
plt.grid()
plt.title("Condiciones iniciales")

plt.subplot(2,1,2)
plt.plot(t,ufuturo, color= 'g', label='ufuturo')
plt.xlabel("Amplitud")
plt.ylabel(" ")
plt.legend()
plt.grid()
plt.title("Condiciones finales")
plt.subplots_adjust(hspace=.5)
plt.savefig("pulso.png")