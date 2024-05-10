#ifndef MANIPULA_ARQUIVOS_H
#define MANIPULA_ARQUIVOS_H

#include <stdio.h>

FILE *abreArquivo(char *nomeArquivo, char *modo);

size_t gravaArquivo(FILE *arquivo, char *registro, size_t tamanho);

size_t leArquivo(FILE *arquivo, char *registro, size_t tamanho);

int fechaArquivo(FILE *arquivo);

#endif