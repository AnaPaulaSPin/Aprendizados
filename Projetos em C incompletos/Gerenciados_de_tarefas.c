#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

char r;
int i=0, j,lista=0;
char Tarefas[TAM][TAM];

void Adicionartarefa();
void Listartarefas();
void limpar();
void Concluida();
void remover();
void Pausaroprograma();


int main(){

    limpar();
    
    while(1){

     printf("\n \033[1;33mBem vindo ao gereciador de tarefas\033[0m \n");
     printf("\033[1;34m1- Adicionar a tarefa\033[0m\n");
     printf("\033[1;34m2- Listar tarefa\033[0m\n");
     printf("\033[1;34m3- Marcar tarefa como concluida\033[0m\n");
     printf("\033[1;34m4- Remover Tarefa\033[0m\n");
     printf("\033[1;34m5- Sair\033[0m\n");
     
     printf("\033[1;31m\nResposta: ");
     scanf(" %c", &r);
     printf("\n\033[0m");

     switch (r)
     {
     case '1': {
         printf("\n \033[1;35m1. Adicionando uma tarefa\n\n\033[0m");
         Adicionartarefa();
         break;
     }
     case '2': {
         printf("\033[1;35m2. listar tarefa\n\033[0m");
         Listartarefas();
         break;
     }

     case '3': {
         printf("\033[1;35m 3. Marcar tarefa como concluida\n\033[0m");
         Concluida();
         break;
     }

     case '4': {
         printf("\033[1;35m 4. Remover Tarefa\n\033[0m");
         remover();
         break;
     }

     case '5': {
         printf(" Saindo do programa\n");
         Pausaroprograma();
         break;
     }
     
    }
    if(r=='5'){
        break;
     }
  }

    return 0;
}

void Adicionartarefa(){

    if (i >= TAM) {
        printf("Número máximo de tarefas atingido.\n");
        return;
    }

    printf("\033[1;36mNova tarefa: \033[0m");
    fgets(Tarefas[i], TAM, stdin);

    // Remove o caractere de nova linha, se presente
    size_t len = strlen(Tarefas[i]);
    if (len > 0 && Tarefas[i][len - 1] == '\n') {
        Tarefas[i][len - 1] = '\0';
    }

    i++;
    lista = i;
}

void Listartarefas(){
    for(i=0;i<lista;i++){
       printf(Tarefas[i]);
    }
   
}

void Concluida(){

}

void remover(){

}

void Pausaroprograma(){
    getchar();

}

void limpar(){
    for(i=0;i>TAM;i++){
        for(int j=0;j> TAM;j++){
            Tarefas[i][j]= '0';
        }
    }
}