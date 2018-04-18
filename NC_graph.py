import numpy as np
import matplotlib.pyplot as plt



datos =np.loadtxt("tray.txt")

x=datos[:,0]
v=datos[:,1]
t=datos[:,2]

plt.scatter(t,x)
plt.xlabel("t")
plt.ylabel("x")
plt.savefig("pos.png")
plt.clf()
plt.scatter(t,v)
plt.xlabel("t")
plt.ylabel("v")
plt.savefig("vel.png")
plt.clf()
plt.scatter(x,v)
plt.xlabel("x")
plt.ylabel("v")
plt.savefig("phase.png")
