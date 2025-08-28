from random import shuffle

al1 = input('Digite o nome do 1° aluno: ')
al2 = input('Digite o nome do 2° aluno: ')
al3 = input('Digite o nome do 3° aluno: ')
al4 = input('Digite o nome do 4° aluno: ')

alunos = [al1,al2,al3,al4]
shuffle(alunos)
print('Ordem que os alunos irão se apresentar será: ' + ', '.join(alunos))