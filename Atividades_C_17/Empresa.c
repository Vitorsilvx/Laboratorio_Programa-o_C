#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], perfil[20], confirmacao_nome[50];
    char mensagem[100] = "Bem-vindo, ";

    // 1 e 2. Solicitar nome e perfil
    printf("Digite o nome: ");
    scanf("%49s", nome);
    printf("Digite o perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    // 3. strlen() para contar caracteres
    printf("\nNome tem %lu caracteres.\n", strlen(nome));

    // 4. strcmp() para verificar o perfil
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else {
        printf("Perfil: Comum\n");
    }

    // 5. strcpy() para copiar o nome
    strcpy(confirmacao_nome, nome);

    // 6. strcat() para montar a mensagem de boas-vindas
    strcat(mensagem, confirmacao_nome);
    strcat(mensagem, "!");

    // 7. Exibir dados finais
    printf("Mensagem: %s\n", mensagem);

    return 0;
}
