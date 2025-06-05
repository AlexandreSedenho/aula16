#include <stdio.h>
#include <string.h>

int main(void) {
    char nomeDoLivro[100];
    char nomeDosPersonagens[100];
    FILE *arquivo;

    printf("Digite o titulo do livro: ");
    scanf(" %[^\n]", nomeDoLivro);

    arquivo = fopen(nomeDoLivro, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    while (1) {
        printf("Digite o nome do personagem (ou 'F' para finalizar): ");
        scanf(" %[^\n]", nomeDosPersonagens);

        if (strcmp(nomeDosPersonagens, "F") == 0) {
            break;
        }

        fprintf(arquivo, "%s\n", nomeDosPersonagens);
    }

    fclose(arquivo);

    printf("Personagens salvos no arquivo '%s'.\n", nomeDoLivro);

    return 0;
}
