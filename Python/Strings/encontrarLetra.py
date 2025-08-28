frase = input('Digite uma frase: ')

print("A letra 'a' aparece cerca de {} vezes na frase".format(frase.count('a')))
print("Na letra 'a', ela aparece a primeira vez no indice {}".format(frase.find('a')+1))
print("Na letra 'a', ela aparece a ulitma vez no indice {}".format(frase.rfind('a')+1))