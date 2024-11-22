#include <stdio.h>

int main(void){
    int x = 2;
    int *y = &x;

    *y = 3;

    printf("%d\n", x);
    printf("endereco onde o y aponta %p\n", y);
    printf("endereco de x %p\n", &x);
    printf("endereco de y %p\n", *y);
}
