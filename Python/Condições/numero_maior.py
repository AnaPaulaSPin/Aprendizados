num1 = int(input('Digite o 1° num: '))
num2 = int(input('Digite o 2° num: '))
num3 = int(input('Digite o 3° num: '))

if num1 >= num2 or num1 >= num3:
  maior = num1
else: 
   if num2 >= num3:
     maior = num2
   else:
     maior = num3

if num1 <= num2 or num1<= num3:
  menor = num1

else:
   if num2 <= num3:
     menor = num2
   else:
     menor = num3

print('O maior numero é {}, e o menor numero é: {}!'.format(maior,menor))