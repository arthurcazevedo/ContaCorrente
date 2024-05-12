#ifndef CC_H
#define CC_H

typedef struct
{
    __uint128_t idCC;
    double saldo;
    __uint128_t idCorrentista;
} cc;

typedef struct
{
    __uint128_t idCorrentista;
    char nome[128];
    char cep[8];
    char numero[8];
    char complemento[64];
    char identidade[20];
    char cpf[11];
    char nascimento[8];
} correntista;

typedef struct
{
    __uint128_t idCC;
    char operacao;
    double valor;
} extrato;


#endif