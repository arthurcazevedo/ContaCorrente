#include <stdio.h>

#include "includes/structures/cc.h"
#include "includes/manipula_arquivos.h"

int incluiCorrentista(correntista novoCorrentista, FILE *arquivo) {
    size_t retorno;
    retorno = gravaArquivo(arquivo,(char *)&novoCorrentista,sizeof(correntista));
    if (retorno != 0)
    {
        puts("incluiCorrentista: erro em gravaArquivo\n");
        return -1;
    }
    
    return 0;
}

int alteraCorrentista(correntista correntista) {
    return 0;
}

int excluiCorrentista(__uint128_t idCorrentista) {
    return 0;
}

correntista procuraCorrentista(__uint128_t idCorrentista) {
    correntista correntista;
    return correntista;
}
