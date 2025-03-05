#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    
    // Nível Novato - Movimentação das Peças
    int casas_movimentadas = 5;
    int i = 1;
    printf("Movendo o Bispo: 5 casas na diagonal superior direita\n");
    do {
        printf("Direta Cima\n");
        i++;
    } while (i <= casas_movimentadas);
    i = 1;
    printf("Movendo o Torre: 5 casas para a direita\n");
    while (i <= casas_movimentadas) {
        printf("Direta \n");
        i++;
    };

    casas_movimentadas = 8;
    
    printf("Movendo a Rainha: 8 casas para a esquerda\n");
    for (int j = 1; j <= casas_movimentadas; j++) {
        printf("Esquerda \n");
        
        
    };
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int j;
    
    
    printf("Movendo a Cavalo: para baixo e para esquerda\n");

    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    
        // Após o segundo passo vertical (i == 1), realiza o movimento para a esquerda ("Esquerda")
        if (i == 1) {
            j = 0;
            // Loop "do-while" aninhado para simular 3 passo para a esquerda
            do {
                printf("Esquerda\n");
                j++;
            } while (j < 3);
        }
        
    };


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
