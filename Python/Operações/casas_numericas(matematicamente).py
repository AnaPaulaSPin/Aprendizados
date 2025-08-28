numero = int(input('Digite um numero de 0 a 9999: '))

milhar = numero // 1000 

centena = numero // 100
centena = centena % 10

dezena = numero // 10
dezena = dezena % 10

unidade = numero % 10

print('Milhar: {}'.format(milhar))
print('Centena: {}'.format(centena))
print('Dezena: {}'.format(dezena))
print('Unidade: {}'.format(unidade))


