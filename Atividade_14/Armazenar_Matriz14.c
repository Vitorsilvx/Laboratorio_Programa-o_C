#include <stdio.h>

int main() {
    int matriz[2][2];

    printf("--- Entrada de Dados (Matriz 2x2) ---\n");
    // Loops para ler os 4 valores fornecidos pelo usuário
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n--- Matriz 2x2 (Formato Tabela) ---\n");
    // Loops para exibir os valores organizados com tabulação
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz
    }

    return 0;
}
