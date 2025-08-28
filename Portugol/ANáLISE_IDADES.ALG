Algoritmo "Análise_Idades"
Var
   idade_lida, contador, soma_idades, contador_mais_de_18, contador_menos_de_18, maior_idade: inteiro

Inicio
    soma_idades <- 0
    contador_mais_de_18 <- 0
    contador_menos_de_18 <- 0
    maior_idade <- 0
    contador <- 1

    Enquanto contador <= 10 Faca
        Escreva("Digite a idade da pessoa ", contador, ": ")
        Leia(idade_lida)

        // Calcula a soma das idades
        soma_idades <- soma_idades + idade_lida

        // Verifica se a idade é maior que 18
        Se idade_lida > 18 Entao
            contador_mais_de_18 <- contador_mais_de_18 + 1
        FimSe

        // Verifica se a idade é menor que 18
        Se idade_lida < 18 Entao
            contador_menos_de_18 <- contador_menos_de_18 + 1
        FimSe

        // Atualiza a maior idade, se necessário
        Se contador = 1 OU idade_lida > maior_idade Entao
            maior_idade <- idade_lida
        FimSe

        contador <- contador + 1
    FimEnquanto

    // Calcula a média das idades
    media_idades <- soma_idades / 10

    // Exibe os resultados
    Escreva("a) A média de idade do grupo é: ", media_idades)
    Escreva("b) O número de pessoas com mais de 18 anos é: ", contador_mais_de_18)
    Escreva("c) O número de pessoas com menos de 18 anos é: ", contador_menos_de_18)
    Escreva("d) A maior idade registrada é: ", maior_idade)

FimAlgoritmo
