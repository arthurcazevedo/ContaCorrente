#include <stdio.h>

#include "includes/manipula_arquivos.h"

FILE *abreArquivo(char *nomeArquivo, char *modo) {
    FILE *arquivo;
        int codErro;

    arquivo = fopen(nomeArquivo, modo);

    if(codErro = ferror(arquivo) != 0) {
        printf("abreArquivo: erro em fopen: %d\n",codErro);
        return NULL;
    }

    return arquivo;
}

size_t gravaArquivo(FILE *arquivo, char *registro, size_t tamanho) {
    size_t totalGravado;

    totalGravado = fwrite(registro,1,tamanho,arquivo);
    if(totalGravado != tamanho) {
        int codErro;
        codErro = ferror(arquivo);
        printf("gravaArquivo: erro em fwrite: %d\n",codErro);
        return -1;
    }
    totalGravado = fechaArquivo(arquivo);
    return 0;
}

size_t leArquivo(FILE *arquivo, char *registro, size_t tamanho) {
    size_t totalLido;

    totalLido = fread(registro,tamanho,1,arquivo);

    if(totalLido != tamanho) {
        return -1;
    }
    return 0;
}

int fechaArquivo(FILE *arquivo) {

    fclose(arquivo);
    return 0;
}