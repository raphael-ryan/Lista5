#include <stdio.h>

int main() {
    int numeros[11];  // Vetor para armazenar os 10 n�meros + o novo n�mero
    int i, j, temp, novo_numero;

    // Leitura dos 10 n�meros
    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordenando o vetor em ordem crescente (usando o m�todo de ordena��o "Bubble Sort")
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(numeros[i] > numeros[j]) {
                // Troca de posi��o dos elementos
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Leitura de um novo n�mero
    printf("\nDigite um novo numero a ser inserido: ");
    scanf("%d", &novo_numero);

    // Inserir o novo n�mero no vetor na posi��o correta
    for(i = 9; i >= 0; i--) {
        if(numeros[i] > novo_numero) {
            numeros[i + 1] = numeros[i];  // Desloca os elementos para a direita
        } else {
            break;  // Encontra a posi��o correta
        }
    }
    numeros[i + 1] = novo_numero;  // Insere o novo n�mero

    // Exibindo o vetor ordenado com o novo n�mero inserido
    printf("\nVetor ordenado com o novo numero inserido:\n");
    for(i = 0; i < 11; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

