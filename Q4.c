#include <stdio.h>

int main() {
    int A[10], M[10];  // Vetor A de 10 números e vetor M para os resultados
    int X;
    int i;

    // Leitura dos elementos do vetor A
    for(i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Leitura do valor de X
    printf("Digite o valor de X: ");
    scanf("%d", &X);

    // Multiplicando cada elemento de A por X e armazenando no vetor M
    for(i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    // Exibindo o vetor M
    printf("\nVetor M (resultado da multiplicação):\n");
    for(i = 0; i < 10; i++) {
        printf("M[%d] = %d\n", i, M[i]);
    }

    return 0;
}

