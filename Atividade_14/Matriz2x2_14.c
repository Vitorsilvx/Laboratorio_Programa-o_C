#include <stdio.h>

int main() {
    int matriz[2][2] = {
        {12, 35},
        {56, 78}
    };

    printf("Matriz 2x2\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}