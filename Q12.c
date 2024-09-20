#include <stdio.h>

int main() {
    int vetor[30];        // Vetor para armazenar os 30 n�meros
    int numero, i;
    int contagem = 0;     // Contador para o n�mero de vezes que o n�mero aparece no vetor

    // Leitura dos 30 n�meros para o vetor
    printf("Digite 30 n�meros para o vetor:\n");
    for(i = 0; i < 30; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Leitura do n�mero a ser pesquisado
    printf("\nDigite o n�mero a ser pesquisado: ");
    scanf("%d", &numero);

    // Contagem de quantas vezes o n�mero aparece no vetor
    for(i = 0; i < 30; i++) {
        if(vetor[i] == numero) {
            contagem++;
        }
    }

    // Exibindo o resultado
    printf("\nO n�mero %d aparece %d vezes no vetor.\n", numero, contagem);

    return 0;
}

