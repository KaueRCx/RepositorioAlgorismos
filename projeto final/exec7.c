#include <stdio.h>

// nome do aluno: Kauê Righetti

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("O maior numero entre %d e %d e: %d\n", num1, num2, maior(num1, num2));
    return 0;
}

