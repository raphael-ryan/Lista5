#include <stdio.h>

int main() {
    int Q[20];         // Vetor Q de 20 posições
    int maior, posicao;
    int i;

    // Leitura dos elementos do vetor Q
    for(i = 0; i < 20; i++) {
        do {
            printf("Digite um número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);

            if(Q[i] < 0) {
                printf("Valor inválido! Somente números positivos são aceitos.\n");
            }

        } while(Q[i] < 0);  // Verifica se o número é positivo
    }

    // Inicializando o maior valor e a posição inicial
    maior = Q[0];
    posicao = 0;

    // Encontrando o maior valor e sua posição
    for(i = 1; i < 20; i++) {
        if(Q[i] > maior) {
            maior = Q[i];
            posicao = i;
        }
    }

    // Exibindo o maior valor e a posição
    printf("\nO maior valor no vetor é %d e está na posição %d.\n", maior, posicao + 1);

    return 0;
}

