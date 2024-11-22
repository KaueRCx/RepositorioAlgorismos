
#include <stdio.h>

// nome do aluno: Kauê Righetti
//Dificuldade: Manipular entradas de diferentes turmas e calcular médias individualmente e coletivamente
//requer atenção para evitar erros de digitação e garantir que os cálculos estejam corretos.
float mediaTurma(int num_alunos) {
    float total = 0, nota;
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        total += nota;
    }
    return total / num_alunos;
}

float mediaEscola(int qtd_turmas) {
    float media_total = 0;
    for (int i = 0; i < qtd_turmas; i++) {
        int num_alunos;
        printf("Digite a quantidade de alunos da turma %d: ", i + 1);
        scanf("%d", &num_alunos);
        float media = mediaTurma(num_alunos);
        printf("Média da turma %d: %.2f\n", i + 1, media);
        media_total += media;
    }
    return media_total / qtd_turmas;
}

int main() {
    int qtd_turmas;
    printf("Digite a quantidade de turmas: ");
    scanf("%d", &qtd_turmas);
    printf("Média geral da escola: %.2f\n", mediaEscola(qtd_turmas));
    return 0;
}
