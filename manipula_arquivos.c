#include <stdio.h>

FILE *abreArquivo(char *nomeArquivo, char *modo) {
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, modo);

    return arquivo;
}

int gravaArquivo(FILE *arquivo, char *registro, __uint128_t tamanho) {
    __uint128_t totalGravado;

    totalGravado = (registro,tamanho,1,arquivo);

    if(totalGravado != tamanho) {
        return -1;
    }

    return 0;
}

int leArquivo(FILE *arquivo, char *registro, __uint128_t tamanho) {
    __uint128_t totalLido;

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