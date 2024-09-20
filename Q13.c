#include <stdio.h>

int main() {
    int VET[50];  // Vetor para armazenar os 50 n�meros
    int i, j;
    int repetido;

    // Leitura dos 50 n�meros para o vetor
    printf("Digite 50 n�meros para o vetor:\n");
    for(i = 0; i < 50; i++) {
        printf("VET[%d]: ", i);
        scanf("%d", &VET[i]);
    }

    // Verifica��o de n�meros repetidos
    printf("\nN�meros repetidos e suas posi��es:\n");
    for(i = 0; i < 50; i++) {
        repetido = 0;
        // Verifica se o n�mero j� foi verificado como repetido
        for(j = 0; j < i; j++) {
            if(VET[i] == VET[j]) {
                repetido = 1;
                break;
            }
        }
        // Se o n�mero n�o foi marcado como repetido
        if(!repetido) {
            for(j = i + 1; j < 50; j++) {
                if(VET[i] == VET[j]) {
                    printf("N�mero %d est� repetido nas posi��es %d e %d.\n", VET[i], i, j);
                }
            }
        }
    }

    return 0;
}

