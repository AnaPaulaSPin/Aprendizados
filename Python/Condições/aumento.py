salario = float(input('Digite seu salario: '))

if salario >= 1250:
    print('Parabens vc recebeu um aumento de 10%, agora seu salario é {}$'.format(salario + (salario*0.10)))
else:
    print('Parabens vc recebeu um aumento de 15%, agora seu salario é {}$'.format(salario + (salario*0.15)))