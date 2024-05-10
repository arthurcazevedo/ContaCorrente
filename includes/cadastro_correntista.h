#ifndef CADASTRO_CORRENTISTA_H
#define CADASTRO_CORRENTISTA_H

int incluiCorrentista(correntista novoCorrentista, FILE *arquivo);

int alteraCorrentista(correntista correntista);

int excluiCorrentista(__uint128_t idCorrentista);

correntista procuraCorrentista(__uint128_t idCorrentista);

correntista leDadosCorrentista();

#endif