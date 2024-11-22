#include <stdio.h>

int main(){
    int matriz[3][5];
    int total [3] = {0};
    int maior_pont = 0;
    int ganhador = 0;
    int i,j;

    for(i = 0; i < 3; i++){
        printf("digite a pontuacao do jogador %d ", i +1);
        for(j = 0; j < 5; j++){
            printf("No jogo %d: ", j +1);
            scanf("%d" ,&matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            total[i] += matriz[i][j];
        }
        printf("Pontuacao do jogador %d: %d \n",i + 1, total[i]);
    }
    for(i = 0; i < 3; i++){
        if(maior_pont < total[i]){
            maior_pont = total[i];
            ganhador = i + 1;
        }
    }
    printf("Vencedor: Jogador %d \n", ganhador);
return 0;
}
