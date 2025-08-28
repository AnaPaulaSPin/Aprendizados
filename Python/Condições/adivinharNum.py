from random import randint

num = randint(1, 5)
print("Tente advinhar que numero o computador escolheu!")
UserNum = int(input("Digite um numero de 1 a 5: "))

if num == UserNum:
    print('Parabens vc acertou!!!')

else:
  print('Vc errou, o numero era {} tente novamente'.format(num))