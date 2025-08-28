km = int(input("Digite a velocidade do seu carro: "))

if km > 80:
    print('Voce ultrapassou 80km/h, terá que pagar {} $'.format((km - 80)*7.0))
else:
    print('Tudo dentro do limite, siga sua viagem ^^')