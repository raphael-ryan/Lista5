#include <stdio.h>

int main() {
    int numeros[20];  // Vetor para armazenar os 20 n�meros
    int i;

    // Leitura dos 20 n�meros e armazenando no vetor
    for(i = 0; i < 20; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibindo os n�meros na ordem inversa
    printf("\nOs numeros na ordem inversa sao:\n");
    for(i = 19; i >= 0; i--) {  // Come�a do �ltimo �ndice at� o primeiro
        printf("%d\n", numeros[i]);
    }

    return 0;
}

