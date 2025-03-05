#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movimentoVertical(int n){
    if (n > 0) {
        printf("Cima\n");  // Imprime o valor atual de n
        movimentoHorizontal(n);  // Chama movimento horizontal n
    }
}
void movimentoHorizontal(int n){
    if (n > 0) {
        printf("Direita\n");  // Imprime o valor atual de n
        movimentoVertical(n - 1);  // Chama movimento vertical n-1
    }
}
void movimentoBispo(int n) {
    
    for(int i = 1; i<=n;i++){
        printf("Cima\n");
        int j = i;
        do {
            printf("Direita\n");
        } while ( i != j);
    }
    
}
void movimentoRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");  // Imprime o valor atual de n
        movimentoRainha(n - 1);  // Chama a si mesma com n - 1
    }
}
void movimentoTorre(int n) {
    if (n > 0) {
        printf("Direita\n");  // Imprime o valor atual de n
        movimentoTorre(n - 1);  // Chama a si mesma com n - 1
    }
}

void movimentoCavalo(){
    int j;
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    
        // Após o segundo passo vertical (i == 1), realiza o movimento para a esquerda ("Esquerda")
        if (i == 1) {
            j = 0;
            // Loop "do-while" aninhado para simular 3 passo para a esquerda
            do {
                printf("Direita\n");
                j++;
            } while (j < 3);
        }
        
    };
}
int main() {
    //nivel avancado
    //recursividade

   
    // Nível Novato - Movimentação das Peças
    int casas_movimentadas = 5;
    int i = 1;
    // printf("Movendo o Bispo: 5 casas na diagonal superior direita\n");
    // do {
    //     printf("Direta Cima\n");
    //     i++;
    // } while (i <= casas_movimentadas);
    i = 1;
    printf("Movendo o Torre: 5 casas para a direita\n");
    movimentoTorre(5);

   
    
    printf("Movendo a Rainha: 8 casas para a esquerda\n");
    movimentoRainha(8);

    printf("Movendo o Bispo: 5 casas na diagonal superior direita\n");
    movimentoBispo(5);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int j;
    
    
    printf("Movendo o Cavalo: para cima e direta\n");

    movimentoCavalo();


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
