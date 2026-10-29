
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], codigo_curso[30], confirmacao_nome[50];
    char mensagem[100] = "Ola: ";

    printf("Digite o seu nome: ");
    scanf(" %49[^\n]", nome);

    printf("Digite seu curso (CIENCIA DA COMPUTACAO ou SISTEMA DE INFORMACAO): ");
    scanf(" %29[^\n]", codigo_curso);

    printf("\n\nProduto: %s", nome);
    printf("\nNome tem %zu caracteres.\n", strlen(nome));

    if (strcmp(codigo_curso, "CIENCIA DA COMPUTACAO") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else{
        printf("Curso: Sistema de Informacao\n");
    }

    strcpy(confirmacao_nome, nome);

    strcat(mensagem, confirmacao_nome);
    strcat(mensagem, "!");

    printf("%s\n", mensagem);

    return 0;
}
