numero = input('Digite um numero de 0 a 9999: ')
lista = numero.zfill(4)

print('Milhar: {}'.format(lista[0]))
print('Centena: {}'.format(lista[1]))
print('Dezena: {}'.format(lista[2]))
print('Unidade: {}'.format(lista[3]))
