#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "biblioteca.csv"

typedef struct {
int id;
char titulo[50];
char autor[50];
} Livro;

void adicionarLivro();
void listarLivros();

int main() {
int opcao;
do {
printf("\nSistema de Biblioteca\n");
printf("1. Adicionar Livro\n");
printf("2. Listar Livros\n");
printf("3. Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch(opcao) {
case 1:
adicionarLivro();
break;
case 2:
listarLivros();
break;
case 3:
printf("Saindo...\n");
break;
default:
printf("Opção inválida. Tente novamente.\n");
}
} while(opcao != 3);

return 0;
}

void adicionarLivro() {
FILE *arquivo = fopen(FILENAME, "a");
if (!arquivo) {
printf("Erro ao abrir o arquivo.\n");
return;
}

Livro livro;
printf("ID do Livro: ");
scanf("%d", &livro.id);
printf("Título do Livro: ");
scanf(" %[^\n]", livro.titulo);
printf("Autor do Livro: ");
scanf(" %[^\n]", livro.autor);

fprintf(arquivo, "%d,%s,%s\n", livro.id, livro.titulo, livro.autor);
fclose(arquivo);

printf("Livro adicionado com sucesso!\n");
}

void listarLivros() {
FILE *arquivo = fopen(FILENAME, "r");
if (!arquivo) {
printf("Erro ao abrir o arquivo.\n");
return;
}

Livro livro;
printf("\nLista de Livros:\n");
printf("ID | Título | Autor\n");
while (fscanf(arquivo, "%d,%49[^,],%49[^\n]\n", &livro.id, livro.titulo, livro.autor) !=
EOF) {
printf("%d | %s | %s\n", livro.id, livro.titulo, livro.autor);
}
fclose(arquivo);
}
