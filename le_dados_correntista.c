#include <stdio.h>

#include "includes/structures/cc.h"

correntista leDadosCorrentista() {
    correntista correntista;

    printf("Nome........: ");
    fgets(correntista.nome,sizeof(correntista.nome),stdin);
    printf("Identidade..: ");
    fgets(correntista.identidade,sizeof(correntista.identidade),stdin);
    printf("cpf.........: ");
    fgets(correntista.cpf,sizeof(correntista.cpf),stdin);
    printf("nascimento..: ");
    fgets(correntista.nascimento,sizeof(correntista.nascimento),stdin);
    printf("CEP.........: ");
    fgets(correntista.cep,sizeof(correntista.cep),stdin);
    printf("numero.........: ");
    fgets(correntista.numero,sizeof(correntista.numero),stdin);
    printf("complemento....: ");
    fgets(correntista.complemento,sizeof(correntista.complemento),stdin);

    return correntista;

}