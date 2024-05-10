#ifndef CADASTRO_CC_H
#define CADASTRO_CC_H

cc criaCC(__uint128_t idCorrentista, double saldoInicial);

cc procuraCC(__uint128_t idCC);

int movimentaCC(__uint128_t idCC, char tipoMovimento, double valor);

int excluiCC (__uint128_t idCC);

#endif