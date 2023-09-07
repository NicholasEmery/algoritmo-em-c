#include <stdio.h>
#include <stdlib.h>

int main()
{
    float receita, despesas, saldo;

    printf("Qual e a sua receita?: (Ex: 0000.00) R$");
    scanf("%f", &receita);

    printf("Quais sao as suas despesas?: (Ex: 0000.00) R$");
    scanf("%f", &despesas);

    saldo = receita - despesas;
    printf("O seu saldo previsto e de: R$%.2f\n", saldo);

    if (saldo < 0)
    {
        char respostaEconomia;
        int respostaEconomiaValida = 0;

        while (!respostaEconomiaValida)
        {
            printf("Deseja receber dicas para economizar dinheiro e melhorar sua situaçao financeira? (s/n): ");
            scanf(" %c", &respostaEconomia);

            if (respostaEconomia == 's' || respostaEconomia == 'S')
            {
                printf("Aqui estao algumas dicas para economizar dinheiro e melhorar sua situaçao financeira:\n");
                printf("1. Negocie suas dividas com o banco para reduzir taxas de cobrança.\n");
                printf("2. Diminua despesas desnecessarias. Como assinaturas de streaming, jogos e etc...\n");
                respostaEconomiaValida = 1;
            }
            else if (respostaEconomia == 'n' || respostaEconomia == 'N')
            {
                printf("Tudo bem! Se precisar de ajuda no futuro, e so perguntar.\n");
                respostaEconomiaValida = 1;
            }
            else
            {
                printf("Opcao invalida. Por favor, digite 's' ou 'n'.\n");
            }
        }
    }
    else
    {
        char respostaAumentoSaldo;
        int respostaAumentoSaldoValida = 0;

        while (!respostaAumentoSaldoValida)
        {
            printf("Gostaria de receber dicas para aumentar seu saldo? (s/n): ");
            scanf(" %c", &respostaAumentoSaldo);

            if (respostaAumentoSaldo == 's' || respostaAumentoSaldo == 'S')
            {
                printf("Uma otima maneira de aumentar seu saldo e planejar suas finanças e evitar gastos desnecessarios.\n");
                printf("Voce pode seguir um metodo de divisão financeira, como o metodo 50/30/20 que divide sua receita em 50%% para necessidades, 30%% para metas e 20%% para gastos livres. ou entao metodo 70/30 que divide sua receita em 70%% para necessidades e 30%% para metas..\n");

                char metodoEconomia;
                printf("Qual metodo de divisao financeira você tem interesse em saber mais? (1 - 50/30/20, 2 - 70/30): ");
                scanf(" %c", &metodoEconomia);

                if (metodoEconomia == '1')
                {
                    printf("O metodo 50/30/20 divide sua receita em 50%% para necessidades, 30%% para metas e 20%% para gastos livres.\n");
                    printf("Necessidades: R$%.2f\n", receita * 0.5);
                    printf("Metas: R$%.2f\n", receita * 0.3);
                    printf("Gastos Livres: R$%.2f\n", receita * 0.2);
                }
                else if (metodoEconomia == '2')
                {
                    printf("O metodo 70/30 divide sua receita em 70%% para necessidades e 30% para metas.\n");
                    printf("Necessidades: R$%.2f\n", receita * 0.7);
                    printf("Metas: R$%.2f\n", receita * 0.3);


                }
                else
                {
                    printf("Opcao invalida. Por favor, digite '1' ou '2'.\n");
                }

                respostaAumentoSaldoValida = 1;
            }
            else if (respostaAumentoSaldo == 'n' || respostaAumentoSaldo == 'N')
            {
                printf("Tudo bem! Se precisar de ajuda no futuro, e so perguntar.\n");
                respostaAumentoSaldoValida = 1;
            }
            else
            {
                printf("Opcao invalida. Por favor, digite 's' ou 'n'.\n");
            }
        }
    }
    
    system("pause");
    return 0;
}