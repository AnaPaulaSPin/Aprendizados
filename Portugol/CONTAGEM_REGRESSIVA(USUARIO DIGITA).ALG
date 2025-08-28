Algoritmo "Contagem_Regressiva(Usuario digita)"
Var
   Numero, Contador, Divisivel: inteiro
Inicio
    Escreva("Digite o numero que deseja: ")
    Leia(Numero)
    Contador <- Numero
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
