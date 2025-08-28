Algoritmo "Eleição_Presidente"
Var
   i, Total, Vencedor, SegundoLugarC: inteiro
   Votos: vetor [1..5] de inteiro
   Candidatos: vetor [1..5] de inteiro
   Porcentagem: vetor [1..5] de real
   MaiorP, SegundoLugarP: real

Inicio
   i <- 1
   Total <- 0
   MaiorP <- 0
   SegundoLugarP <- 0
   SegundoLugarC <- 0

   Enquanto i <= 5 faca
      Escreva("Digite o código do Candidato ", i, ": ")
      Leia(Candidatos[i])
      Escreva("Digite o número de votos que o Candidato ", Candidatos[i], " teve: ")
      Leia(Votos[i])
      Total <- Total + Votos[i]
      i <- i + 1
   FimEnquanto

   i <- 1

   // Calcular o resultado
   Enquanto i <= 5 faca
      Porcentagem[i] <- (Votos[i] / Total) * 100
      Se Porcentagem[i] > MaiorP Entao
         MaiorP <- Porcentagem[i]
         Vencedor <- Candidatos[i]
      FimSe
      i <- i + 1
   FimEnquanto

   Escreva("Agora vamos para o Resultado...")

   i <- 1
   Enquanto i <= 5 faca
      Se MaiorP >= 50 Entao
         Escreva("O vencedor da Eleição é o Candidato ", Vencedor, " com ", MaiorP, "% dos votos.")
         Pare
      Senao
         Se Candidatos[i] =! Vencedor E Porcentagem[i] =! MaiorP Entao
            Se Porcentagem[i] > SegundoLugarP Entao
               SegundoLugarP <- Porcentagem[i]
               SegundoLugarC <- Candidatos[i]
            FimSe
         FimSe
      FimSe
      i <- i + 1
   FimEnquanto

FimAlgoritmo
