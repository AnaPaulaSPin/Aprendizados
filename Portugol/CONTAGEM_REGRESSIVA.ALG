Algoritmo "Contagem_Regressiva"
Var
   Numero, Contador, Divisivel: inteiro
Inicio
    Contador <- 30
    Enquanto Contador >= 1 Faca
        Divisivel <- Contador % 4
        Se Divisivel = 0 Então
            Escreva("[",Contador, "]")
        Senao
            Escreva(Contador)
        FimSe
        Contador <- Contador - 1
    FimEnquanto
    Escreva("Acabou")
FimAlgoritmo
