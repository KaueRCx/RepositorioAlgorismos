// Kauê Righetti
#include <stdio.h>

float calcularMedia(float notas[]) {
    float soma = 0;
    for (int i = 0; i < 4; i++) {
        soma += notas[i];
    }
    return soma / 4.0;
}

int main() {
    float notas[4];
    printf("Digite as 4 notas do aluno:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &notas[i]);
    }

    float media = calcularMedia(notas);
    printf("Media: %.2f\n", media);
    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}

