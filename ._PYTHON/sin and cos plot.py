import numpy as np
import matplotlib.pyplot as plot
sin_amplitude = np.arange(0,4*np.pi,0.1);
cos_amplitude = np.arange(0,4*np.pi,0.1)
sin = np.sin(sin_amplitude)
cos = np.cos(cos_amplitude)
plot.plot(sin_amplitude, sin)
plot.plot(cos_amplitude, cos)
plot.title('Sine & Cos wave')
plot.xlabel('Time')
plot.ylabel('Amplitude = sin(time)')
plot.grid(True, which='both')
plot.axhline(y=0, color='k')
plot.show()
plot.show()