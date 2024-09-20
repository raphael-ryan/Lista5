#include <stdio.h>

int main() {
    int vetor[30];        // Vetor para armazenar os 30 números
    int numero, i;
    int contagem = 0;     // Contador para o número de vezes que o número aparece no vetor

    // Leitura dos 30 números para o vetor
    printf("Digite 30 números para o vetor:\n");
    for(i = 0; i < 30; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Leitura do número a ser pesquisado
    printf("\nDigite o número a ser pesquisado: ");
    scanf("%d", &numero);

    // Contagem de quantas vezes o número aparece no vetor
    for(i = 0; i < 30; i++) {
        if(vetor[i] == numero) {
            contagem++;
        }
    }

    // Exibindo o resultado
    printf("\nO número %d aparece %d vezes no vetor.\n", numero, contagem);

    return 0;
}

