from random import choice
al1 = input('Digite o nome do 1° aluno: ')
al2 = input('Digite o nome do 2° aluno: ')
al3 = input('Digite o nome do 3° aluno: ')
al4 = input('Digite o nome do 4° aluno: ')

print('O Aluno escolhido para limpar o quadro foi: {}'.format(choice([al1,al2,al3,al4])))
