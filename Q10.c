#include <stdio.h>

int main() {
    int vetor[20];        // Vetor original de 20 números
    int novo_numero;      // Número a ser pesquisado
    int i, j;
    int encontrado = 0;   // Flag para verificar se o número foi encontrado
    int tamanho_novo_vetor = 0; // Contador para o tamanho do novo vetor
    int vetor_novo[20];   // Vetor para armazenar os números sem o número pesquisado

    // Leitura dos 20 números para o vetor
    for(i = 0; i < 20; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Leitura do novo número
    printf("\nDigite um número para verificar se existe no vetor: ");
    scanf("%d", &novo_numero);

    // Verifica se o número existe no vetor e cria o novo vetor sem o número
    for(i = 0; i < 20; i++) {
        if(vetor[i] == novo_numero) {
            encontrado = 1; // Marca que o número foi encontrado
        } else {
            vetor_novo[tamanho_novo_vetor] = vetor[i]; // Adiciona ao novo vetor
            tamanho_novo_vetor++; // Incrementa o tamanho do novo vetor
        }
    }

    // Exibindo o resultado
    if(encontrado) {
        printf("\nO número %d foi encontrado e removido.\n", novo_numero);
        printf("Novo vetor (sem o número %d):\n", novo_numero);
        for(i = 0; i < tamanho_novo_vetor; i++) {
            printf("%d ", vetor_novo[i]);
        }
        printf("\n");
    } else {
        printf("\nO número %d não foi encontrado no vetor.\n", novo_numero);
    }

    return 0;
}

