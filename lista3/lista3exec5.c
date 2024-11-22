// Kauê Righetti
#include <stdio.h>

void exibirImpares(int numero) {
    for (int i = 1; i <= numero; i += 2) {
        if (i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    exibirImpares(n);

    return 0;
}
