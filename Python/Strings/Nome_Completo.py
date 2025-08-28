nome = input("Digite seu nome completo: ")

print('Seu nome em maiúsculo: {}'.format(nome.upper()))
print('Seu nome em minusculo: {}'.format(nome.lower()))
print('Seu nome tem: {} letras'.format(len(nome)))
cont = len(nome) - nome.count(' ')
print('Seu nome tem: {} letras, tirando os espaços'.format(cont))
ocor = nome.find(' ')
print('Seu primeiro nome é: {}'.format(nome[:ocor]))


