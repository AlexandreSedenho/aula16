#include <stdio.h>
#include <string.h>

int main(void) {
    char nomeDoLivro[100];
    char nomePersonagem[100];
    char comando;
    FILE *arquivo;

    printf("Digite o titulo do livro (nome do arquivo): ");
    scanf(" %s", nomeDoLivro);

    arquivo = fopen(nomeDoLivro, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (1) {
        printf("Digite 'P' para imprimir o próximo personagem ou 'F' para finalizar: ");
        scanf(" %c", &comando);

        if (comando == 'F') {
            printf("Programa finalizado.\n");
            break;
        } else if (comando == 'P') {
            if (fgets(nomePersonagem, sizeof(nomePersonagem), arquivo) != NULL) {
                nomePersonagem[strcspn(nomePersonagem, "\n")] = '\0';
                printf("Personagem: %s\n", nomePersonagem);
            } else {
                printf("Fim do arquivo atingido.\n");
                break;
            }
        } 
    }

    fclose(arquivo);
    return 0;
}