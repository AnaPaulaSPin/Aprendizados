km = int(input("Digite a distancia da viagem: "))

if km <= 200:
    print("Sua pagassagem ficou {}$".format(0.50*km))
else:
    print("Sua pagassagem ficou {}$".format(0.45*km))