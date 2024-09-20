#include <stdio.h>

int main() {
    int numeros[10];  // Vetor para armazenar os 10 números
    int i, j, temp;

    // Leitura dos 10 números
    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordenando o vetor em ordem crescente (usando o método de ordenação "Bubble Sort")
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(numeros[i] > numeros[j]) {
                // Troca de posição dos elementos
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Exibindo o vetor ordenado
    printf("\nVetor ordenado em ordem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

