// Kauê Righetti
#include <stdio.h>

int somarValores(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os valores:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int soma = somarValores(vetor, n);
    float media = (float)soma / n;

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}
