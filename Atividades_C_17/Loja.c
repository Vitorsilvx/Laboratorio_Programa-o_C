#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], categoria[20], confirmacao_nome[50];
    char descrição[100] = "O profuto escolhido foi o: ";

    // 1 e 2. Solicitar nome e perfil
    printf("Digite o nome do produto: ");
    scanf("%49s", nome);
    printf("Digite a Categoria (HARDWARE ou PERIFÉRICO): ");
    scanf("%19s", categoria);
    
    printf("\n\nProduto %s", nome);

    printf("\nNome tem %lu caracteres.\n", strlen(nome));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else {
        printf("Categoria: Perifério\n");
    }

    strcpy(confirmacao_nome, nome);

    strcat(descrição, confirmacao_nome);

    printf(descrição);

    return 0;
}
