// Kauê Righetti
#include <stdio.h>

void exibirPares(int numero) {
    for (int i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    exibirPares(n);

    return 0;
}
