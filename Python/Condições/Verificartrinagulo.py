reta1 = int(input("Digite o comprimento da primeira reta: "))
reta2 = int(input("Digite o comprimento da segunda reta: "))
reta3 = int(input("Digite o comprimento da terceira reta: "))

if reta1 + reta2 >= reta3:
    if reta1 + reta2 >= reta2:
        if reta2 + reta3 >= reta1:
            print('é possivel formar um triangulo!')
        else:
            print('Não é possivel formar um triangulo')
    else:
        print('Não é possivel formar um triangulo')
else:
    print('Não é possivel formar um triangulo')