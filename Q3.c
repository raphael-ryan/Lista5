#include <stdio.h>

int main() {
    int Q[20];         // Vetor Q de 20 posi��es
    int menor, posicao;
    int i;

    // Leitura dos elementos do vetor Q
    for(i = 0; i < 20; i++) {
        do {
            printf("Digite um n�mero positivo para a posi��o %d: ", i + 1);
            scanf("%d", &Q[i]);

            if(Q[i] < 0) {
                printf("Valor inv�lido! Somente n�meros positivos s�o aceitos.\n");
            }

        } while(Q[i] < 0);  // Verifica se o n�mero � positivo
    }

    // Inicializando o menor valor e a posi��o inicial
    menor = Q[0];
    posicao = 0;

    // Encontrando o menor valor e sua posi��o
    for(i = 1; i < 20; i++) {
        if(Q[i] < menor) {
            menor = Q[i];
            posicao = i;
        }
    }

    // Exibindo o menor valor e a posi��o
    printf("\nO menor valor no vetor � %d e est� na posi��o %d.\n", menor, posicao + 1);

    return 0;
}

