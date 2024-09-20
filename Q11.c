#include <stdio.h>

int main() {
    int V1[15], V2[15];  // Vetores para armazenar 15 números cada
    int i;
    int contagem_iguais = 0;  // Contador para números iguais nas mesmas posições

    // Leitura dos 15 números para o vetor V1
    printf("Digite os 15 números para o vetor V1:\n");
    for(i = 0; i < 15; i++) {
        printf("V1[%d]: ", i);
        scanf("%d", &V1[i]);
    }

    // Leitura dos 15 números para o vetor V2
    printf("\nDigite os 15 números para o vetor V2:\n");
    for(i = 0; i < 15; i++) {
        printf("V2[%d]: ", i);
        scanf("%d", &V2[i]);
    }

    // Comparando os elementos dos vetores nas mesmas posições
    for(i = 0; i < 15; i++) {
        if(V1[i] == V2[i]) {
            contagem_iguais++;
        }
    }

    // Exibindo o resultado
    printf("\nA quantidade de vezes que V1 e V2 possuem os mesmos números nas mesmas posições é: %d\n", contagem_iguais);

    return 0;
}

