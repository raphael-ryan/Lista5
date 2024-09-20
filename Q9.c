#include <stdio.h>

int main() {
    int numeros[11];  // Vetor para armazenar os 10 números + o novo número
    int i, j, temp, novo_numero;

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

    // Leitura de um novo número
    printf("\nDigite um novo numero a ser inserido: ");
    scanf("%d", &novo_numero);

    // Inserir o novo número no vetor na posição correta
    for(i = 9; i >= 0; i--) {
        if(numeros[i] > novo_numero) {
            numeros[i + 1] = numeros[i];  // Desloca os elementos para a direita
        } else {
            break;  // Encontra a posição correta
        }
    }
    numeros[i + 1] = novo_numero;  // Insere o novo número

    // Exibindo o vetor ordenado com o novo número inserido
    printf("\nVetor ordenado com o novo numero inserido:\n");
    for(i = 0; i < 11; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

