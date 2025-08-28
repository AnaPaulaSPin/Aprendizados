nome = input('Digite seu nome: ')

primeiro = nome.find(' ')
PrNome = nome[:primeiro]
ultimo = nome.rfind(' ')
UlNome = nome[ultimo:]

print('O seu primeiro nome é {}'.format(PrNome))
print('O seu ultimo nome é {}'.format(UlNome))
