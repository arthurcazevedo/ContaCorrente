#include <stdio.h>

#include "structures/cc.h"

cc criaCC(__uint128_t idCorrentista,double saldoInicial) {
    cc novaCC;

    novaCC.idCC = 123456; // isso terá que ser um valor gerado
    novaCC.idCorrentista = idCorrentista;
    novaCC.saldo = saldoInicial;

    return novaCC; // se houver erro, retorna idCC 0, idCorrentista 0 e saldoInicial -1
}

cc procuraCC(__uint128_t idCC) {
    cc cc;

    // localiza a CC
    // retorna o resultado

    return cc; // se houver erro, retorna idCC 0, idCorrentista 0 e saldoInicial -1
}

int movimentaCC(__uint128_t idCC, char tipoMovimento, double valor) {
    extrato movimento;

    // localizar CC
    // aplicar o movimento
    // inserir o movimento no extrato

    return 0;
}

int excluiCC (__uint128_t idCC) {
    // procura CC
    // se saldo for 0, exclui
    // se saldo não for 0, retorna erro

    return 0;
}