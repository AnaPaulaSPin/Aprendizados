print('Bem vindo ao Alugues Carros, porfavor preencha as informações abaixo pro pagamento')

dias = float(input('Por quantos dias vc usou nosso carro?: '))
km = float(input('E por quantos quilometros foi pecorrido?: '))

total = (60*dias) + (km*0.15)

print("Ao total vc precisara pagar: {} R$".format(total))




