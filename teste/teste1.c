#include <stdio.h>

int main(void){
int i;
int soma=0;

for(i = 0; i < 5; i++){
    printf("%d",i);
    soma = soma + i;
}
printf("\n");

int v[5];
soma=0;

for (i=0;i<5;i++){
    v[i] = i;
    printf("%d  ",v[i]);
    soma = soma + v[i];
    printf("%d\n", soma);
}
printf("\n");
}
