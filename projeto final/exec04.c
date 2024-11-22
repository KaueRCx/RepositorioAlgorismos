#include <stdio.h>

// nome do aluno: Kauê Righetti

int primo(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int somaPrimos(int N) {
    int soma = 0, contador = 0, numero = 2;
    while (contador < N) {
        if (primo(numero)) {
            soma += numero;
            contador++;
        }
        numero++;
    }
    return soma;
}

int main() {
    int N;
    printf("Digite a quantidade de números primos a serem somados: ");
    scanf("%d", &N);
    printf("A soma dos %d primeiros numeros primos e: %d\n", N, somaPrimos(N));
    return 0;
}
