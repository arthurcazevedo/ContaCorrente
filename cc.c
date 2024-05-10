#include <stdio.h>

#include "structures/cc.h"
#include "cadastro_correntista.h"
#include "cadastro_cc.h"

char menu() {
    char opcao,lido;
    puts("************************");
    puts("***  BANCO DO ARTHUR ***");
    puts("************************");
    puts("*** ESCOLHA A OPERAÇÃO *");
    puts("************************");
    puts("1 - Abrir CC");
    puts("2 - Movimentar CC");
    puts("3 - Encerrar CC");
    puts("4 - Criar cliente");
    puts("5 - Pesquisar cliente");
    puts("6 - Excluir cliente");
    puts("0 - sair");
    puts("Escolha uma opção: ");
    do
    {
        opcao = lido;
        lido = getchar();
    } while (lido != '\n');
    return opcao;
}

int main(int argc, char **argv)
{
    char opcao;
    char *ultimoParametro;
    int resultado;
    // apresenta menu
    ultimoParametro = argv[--argc];
    puts(ultimoParametro);
    opcao = menu();
    while( opcao != '0')
    {
        resultado = 0;
        switch (opcao)
        {
            case '1':
                puts("Abertura de CC");
                // localiza o correntista
                // pergunta o saldo
                cc cc;
                cc = criaCC(1,0);
                puts((char *)&cc);
                // verifica se houve erro
                break;
            
            case '2':
                puts("Movimentação de CC");
                resultado = movimentaCC(0,'D',1.0);
                // verifica se houve erro
                break;
            
            case '3':
                puts("Encerramento de CC");
                resultado = excluiCC(1);
                if (resultado != 0)
                {
                    puts("Erro na exclusão da conta corrente");
                }
                
                break;
            
            case '4':
                puts("Inclusao de cliente");
                correntista novoCorrentista;
                resultado = incluiCorrentista(novoCorrentista);
                if (resultado != 0)
                {
                    puts("Erro na inclusao do cliente");
                }
                
                break;
            
            case '5':
                puts("Pesquisa de cliente");
                correntista correntista;
                correntista = procuraCorrentista(1);
                if (correntista.idCorrentista == 0)
                {
                    puts("Erro na procura do cliente");
                }
                
                break;
            
            case '6':
                puts("Exclusao de cliente");
                resultado = excluiCorrentista(1);
                if (resultado != 0)
                {
                    puts("Erro na exclusão do cliente");
                }
                
                break;
            
            case '0':

                break;
            
            default:
                puts("Opção inválida!");
                break;
        }
        opcao = menu();
    }
    // quando a opção do menu escolhida for sair, sai
    return 0;
}
