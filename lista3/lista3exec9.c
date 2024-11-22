// Kauê Righetti
#include <stdio.h>

int multiplicarValores(int vetor[], int tamanho) {
    int resultado = 1;
    for (int i = 0; i < tamanho; i++) {
        resultado *= vetor[i];
    }
    return resultado;
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

    int produto = multiplicarValores(vetor, n);
    printf("Resultado da multiplicação: %d\n", produto);

    return 0;
}
