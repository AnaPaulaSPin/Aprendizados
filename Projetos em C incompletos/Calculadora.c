#include <stdio.h>
// declarando as funcoes
void CalculadoraBasica();
void CalculadoraCientifica();
void CalculadoraFinanceira();
void CalculadoraConversao();

// Funcao para pausar o programa, o system nao esta funcionando.
void pausarPrograma() {
    printf("\nPressione Enter para continuar...\n\n");
    getchar(); // Espera o usuario pressionar Enter
    int main();
}

// Menu principal
int main() {
    char r;
    do {
        printf("Bem vindo a Calculus\n");
        printf("Para prosseguirmos escolha qual calculo voce quer fazer hoje: ");
        // Opcoes para o usuario clicar:
        printf("\nA- Calculadora Basica (Realiza calculos de Adicao, Subtracao, Multiplicacao e divisao\n");
        printf("\nB- Calculadora Cientifica (Calculos como exponenciais e outras operacoes avancadas.\n");
        printf("\nC- Calculadora Financeira (como juros compostos, amortizacao de emprestimos, valuation de investimentos, etc.\n");
        printf("\nD- Calculadora de Conversao (permite a conversao entre diferentes bases numericas (binario, octal, hexadecimal)\n");
        printf("\nE- Para sair do sistema \n");

        // Escolha do usuario 
        scanf(" %c", r);
        
        switch (r) {
            case 'a': {
                printf("Calculadora Basica\n");
                CalculadoraBasica();
                pausarPrograma();
                break;
            }
            case 'b': {
                printf("Calculadora Cientifica\n");
                CalculadoraCientifica();
                break;
            }
            case 'c': {
                printf("Calculadora Financeira\n");
                CalculadoraFinanceira();
                pausarPrograma();
                break;
            }
            case 'd': {
                printf("Calculadora de Conversao\n");
                CalculadoraConversao();
                pausarPrograma();
                break;
            }
            case 'e': {
                printf("Saindo do programa...\n");
                pausarPrograma();
                break;
            }
            default: {
                printf("Opcao invalida, tente novamente\n");
                pausarPrograma();
                break;
            }
        }
    } while (r != 'e'); // sempre voltara ao menu principal, so saira do loop se o caso e for concedido
    return 0;
}

void CalculadoraBasica() {
    // declaracao das variaveis:
    int Operando1, Operando2, Operacao;
    char r, Operador;
    do {
        printf("\nDigite sua operacao (+, -, x, /): ");
        scanf("%d", &Operando1);
        scanf(" %c", &Operador);
        scanf("%d", &Operando2);

        // reconhecendo o operador:
        if (Operador == '+') {
            Operacao = Operando1 + Operando2;
            printf("\n%d\n", Operacao);
        } else if (Operador == '-') {
            Operacao = Operando1 - Operando2;
            printf("\n%d\n", Operacao);
        } else if (Operador == 'x') {
            Operacao = Operando1 * Operando2;
            printf("\n%d\n", Operacao);
        } else if (Operador == '/') {
            Operacao = Operando1 / Operando2;
            printf("\n%d\n", Operacao);
        } else {
            printf("Voce digitou um sinal invalido\n");
        }

        // o usuario pode continuar com outros valores ou pode sair dessa parte:
        printf("\nDeseja continuar com outra operacao? (s/n)\n");
        scanf(" %c", &r);
    } while (r == 's' || r != 'n');
}

void CalculadoraCientifica() {
    printf("Digite sua operacao:");
}

void CalculadoraFinanceira() {
    printf("Digite sua operacao:");
}

void CalculadoraConversao() {
    printf("Digite sua operacao:");
}
