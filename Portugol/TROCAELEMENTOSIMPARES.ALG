Algoritmo "TrocaElementosImpares"
Var
   N: vetor[0..9] de inteiro
   i, temp: inteiro

Inicio
    // Leitura do vetor
    Para i de 0 ate 9 faca
        leia(N[i])
     FimPara

    // Troca dos elementos de posição ímpar
    Para i de 0 ate 8 passo 2 faca
        temp <- N[i]
        N[i] <- N[i+1]
        N[i+1] <- temp
      FimPara

    // Escrita do vetor após as trocas
    Para i de 0 ate 9 faca
        escreva(N[i], " ")
    FimPara
FimAlgoritmo
