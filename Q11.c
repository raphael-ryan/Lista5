#include <stdio.h>

int main() {
    int V1[15], V2[15];  // Vetores para armazenar 15 n�meros cada
    int i;
    int contagem_iguais = 0;  // Contador para n�meros iguais nas mesmas posi��es

    // Leitura dos 15 n�meros para o vetor V1
    printf("Digite os 15 n�meros para o vetor V1:\n");
    for(i = 0; i < 15; i++) {
        printf("V1[%d]: ", i);
        scanf("%d", &V1[i]);
    }

    // Leitura dos 15 n�meros para o vetor V2
    printf("\nDigite os 15 n�meros para o vetor V2:\n");
    for(i = 0; i < 15; i++) {
        printf("V2[%d]: ", i);
        scanf("%d", &V2[i]);
    }

    // Comparando os elementos dos vetores nas mesmas posi��es
    for(i = 0; i < 15; i++) {
        if(V1[i] == V2[i]) {
            contagem_iguais++;
        }
    }

    // Exibindo o resultado
    printf("\nA quantidade de vezes que V1 e V2 possuem os mesmos n�meros nas mesmas posi��es �: %d\n", contagem_iguais);

    return 0;
}

