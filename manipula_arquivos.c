#include <stdio.h>
#include <errno.h>

#include "includes/manipula_arquivos.h"

int abreArquivo(char *nomeArquivo, char *modo, FILE *arquivo) {
    int erro;

    arquivo = fopen(nomeArquivo, modo);
    erro = errno;
    if(erro != 0) {
        printf("abreArquivo: erro em fopen nome do arquivo: %s, erro: %d\n",nomeArquivo, errno);
        return erro;
    }

    return 0;
}

size_t gravaArquivo(FILE *arquivo, char *registro, size_t tamanho) {
    size_t totalGravado;

    totalGravado = fwrite(registro,1,tamanho,arquivo);
    if(totalGravado != tamanho) {
        printf("gravaArquivo: erro em fwrite: %d\n",errno);
        return -1;
    }
    totalGravado = fechaArquivo(arquivo);
    return 0;
}

size_t leArquivo(FILE *arquivo, char *registro, size_t tamanho) {
    size_t totalLido;

    totalLido = fread(registro,tamanho,1,arquivo);

    if((totalLido != tamanho) || (errno != 0)) {
        printf("gravaArquivo: erro em fread: %d\n",errno);
        return -1;
    }
    return 0;
}

int fechaArquivo(FILE *arquivo) {

    fclose(arquivo);
    return 0;
}