Algoritmo "CalculaValorEstacionamento"
Var
   He, Hs, Hora, i: inteiro
   Valor: real
   Sair: caractere

Inicio
      Escreva("Qual foi a hora que voce saiu e entrou no estabelecimento: ")
      Leia(He, Hs)

      Hora <- Hs - He
      i <- 1
      Valor <- 0

      Enquanto i <= Hora Faca
         Se (i = 1) ou (i = 2) Entao
            Valor <- Valor + 5.00
         Senao
            Se (i = 3) ou (i = 4) Entao
               Valor <- Valor + 2.00
            Senao
               Se (i >= 5) Entao
                  Valor <- Valor + 1.00
               FimSe
            FimSe
         FimSe
         i <- i + 1
      FimEnquanto

      Escreva("O valor que voce ira pagar e: ", Valor)

FimAlgoritmo
