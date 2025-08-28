from math import sin, cos, tan, trunc

ang = int(input('Digite um angulo: '))

print('Seno: {} Coseno: {} Tangente: {}'.format(trunc(sin(ang)), trunc(cos(ang)), trunc(tan(ang))))