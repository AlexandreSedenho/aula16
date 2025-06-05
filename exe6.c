#include <stdio.h>

struct filme {
    char nome[50];
    char genero[50];
    int ano;
};

int main(void) {
    struct filme filme;

    printf("Digite o nome do filme: ");
    scanf("%s", filme.nome);

    printf("Digite o genero do filme: ");
    scanf("%s", filme.genero);

    printf("Digite o ano do filme: ");
    scanf("%d", &filme.ano);

    FILE *arquivo;
    arquivo = fopen("filmes.txt", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fwrite(&filme, sizeof(struct filme), 1, arquivo);

    fclose(arquivo);

    printf("Filme salvo com sucesso em 'filmes.txt'.\n");

    return 0;
}