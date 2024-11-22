#include <stdio.h>

int main(){
    int tamanho;
    printf("Escreva o tamanho da matriz: ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];
    int i,j;

    for(i = 0; i < tamanho; i++){
        matriz[i][0] = 1;
        for(j = 1; j < tamanho; j++){
            if(j <= i){
                matriz[i][j] = j + 1;
            }
            else{
            matriz[i][j] = 0;
            }
        }
    }
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
return 0;
}
