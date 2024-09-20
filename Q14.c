#include <stdio.h>

int main() {
    // Declaração da matriz 3x3
    int matriz[3][3];
    int i, j;
    int determinante;

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo do determinante
    determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
                 - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
                 + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

    // Exibindo o determinante
    printf("\nO determinante da matriz 3x3 é: %d\n", determinante);

    return 0;
}

