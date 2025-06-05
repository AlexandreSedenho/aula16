#include <stdio.h>

int main(void) {
    char data[11];
    char hora[6];
    FILE *arquivo;

    printf("Data (DD/MM/AAAA): ");
    scanf("%10s", data);

    printf("Hora (HH:MM): ");
    scanf("%5s", hora);

    arquivo = fopen("remedios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "%s %s\n", data, hora);
    fclose(arquivo);

    printf("Data e hora salvas com sucesso em 'remedios.txt'.\n");

    return 0;
}