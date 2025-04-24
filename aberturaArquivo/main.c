#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;

    //abre o arquivo para leitura
    arquivo = fopen("teste.txt", "r");

    //tratando possível erro na leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    //variável auxiliar para o conteúdo do arquivo txt
    char frase[500];

    //lê e armazena o conteúdo txt na variável auxiliar
    while (fscanf(arquivo, "%s", frase) == 1) {
        printf("%s ", frase);
    }

    //fecha o arquivo
    fclose(arquivo);
}