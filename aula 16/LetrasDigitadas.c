#include <stdio.h>

int main() {
    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra \"%s\" possui %d letra(s).\n", palavra, contador);

    return 0;
}