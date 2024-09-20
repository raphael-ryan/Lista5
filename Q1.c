#include <stdio.h>

int main() {
    float notas[20];  // Vetor para armazenar as notas dos alunos
    float soma = 0.0, media;
    int acima_media = 0;
    int i;

    // Leitura das notas dos 20 alunos
    for(i = 0; i < 20; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];  // Soma das notas
    }

    // Calcula a m�dia da turma
    media = soma / 20;

    // Contando quantos alunos t�m nota acima da m�dia
    for(i = 0; i < 20; i++) {
        if(notas[i] > media) {
            acima_media++;
        }
    }

    // Exibindo a m�dia e o n�mero de alunos com nota acima da m�dia
    printf("\nA m�dia da turma �: %.2f\n", media);
    printf("N�mero de alunos com nota acima da m�dia: %d\n", acima_media);

    return 0;
}

