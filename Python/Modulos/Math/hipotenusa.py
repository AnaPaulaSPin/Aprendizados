import math

catetoAdj = float(input("Digite o cateto adjacente: "))
catetoOpt = float(input("Digite o cateto Oposto: "))
hipotenusa = math.pow(catetoAdj,2) + math.pow(catetoOpt,2)

print('O comprimento da hipotenusa é {}'.format(math.sqrt(hipotenusa)))