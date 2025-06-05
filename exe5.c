#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *arquivo;
    char linha[100];
    char ultimaLinha[100] = "";

    arquivo = fopen("remedios.txt", "r");

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        strcpy(ultimaLinha, linha);
    }

    fclose(arquivo);

    printf("Última: %s", ultimaLinha);

    return 0;
}