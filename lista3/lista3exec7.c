// Kauê Righetti
#include <stdio.h>

void encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    int posicao = 0;
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i+1;
        }
    }
    printf("Maior valor: %d, posicao: %d\n", maior, posicao);
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

    encontrarMaior(vetor, n);

    return 0;
}
