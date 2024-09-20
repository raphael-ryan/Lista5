#include <stdio.h>

int main() {
    int VET[50];  // Vetor para armazenar os 50 números
    int i, j;
    int repetido;

    // Leitura dos 50 números para o vetor
    printf("Digite 50 números para o vetor:\n");
    for(i = 0; i < 50; i++) {
        printf("VET[%d]: ", i);
        scanf("%d", &VET[i]);
    }

    // Verificação de números repetidos
    printf("\nNúmeros repetidos e suas posições:\n");
    for(i = 0; i < 50; i++) {
        repetido = 0;
        // Verifica se o número já foi verificado como repetido
        for(j = 0; j < i; j++) {
            if(VET[i] == VET[j]) {
                repetido = 1;
                break;
            }
        }
        // Se o número não foi marcado como repetido
        if(!repetido) {
            for(j = i + 1; j < 50; j++) {
                if(VET[i] == VET[j]) {
                    printf("Número %d está repetido nas posições %d e %d.\n", VET[i], i, j);
                }
            }
        }
    }

    return 0;
}

