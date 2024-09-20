#include <stdio.h>

int main() {
    float temperaturas[365];  // Vetor para armazenar as temperaturas de todos os dias do ano
    float soma = 0.0, media_anual;
    float menor, maior;
    int dias_abaixo_media = 0;
    int i;

    // Leitura das temperaturas
    for(i = 0; i < 365; i++) {
        printf("Digite a temperatura média do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];  // Acumula a soma das temperaturas
    }

    // Inicializando menor e maior temperatura com o primeiro valor do vetor
    menor = temperaturas[0];
    maior = temperaturas[0];

    // Percorrendo o vetor para encontrar a menor e maior temperatura
    for(i = 1; i < 365; i++) {
        if(temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if(temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }

    // Calculando a média anual
    media_anual = soma / 365;

    // Contando quantos dias tiveram temperatura abaixo da média anual
    for(i = 0; i < 365; i++) {
        if(temperaturas[i] < media_anual) {
            dias_abaixo_media++;
        }
    }

    // Exibindo os resultados
    printf("\n(a) Menor temperatura do ano: %.2f\n", menor);
    printf("(b) Maior temperatura do ano: %.2f\n", maior);
    printf("(c) Temperatura média anual: %.2f\n", media_anual);
    printf("(d) Número de dias com temperatura abaixo da média anual: %d\n", dias_abaixo_media);

    return 0;
}

