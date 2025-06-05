#include <stdio.h>

struct filme {
    char nome[50];
    char genero[50];
    int ano;
};

int main(void) {
    struct filme filme;

    FILE *arquivo;
    arquivo = fopen("filmes.txt", "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s %s %d", filme.nome, filme.genero, &filme.ano) != EOF) {
        printf("Nome: %s\n", filme.nome);
        printf("Genero: %s\n", filme.genero);
        printf("Ano: %d\n", filme.ano);
    }

    fclose(arquivo);

    return 0;
}