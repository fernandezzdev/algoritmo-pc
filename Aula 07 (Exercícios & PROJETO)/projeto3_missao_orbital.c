/*
 * Integrantes (nome - RGM):
 *   1. Enzo Fernandes Machado - 49364651
 *
 * Uso de IA: (Claude - Linha 17 à 40, uso de estruturas de repetições.)
 */

#include <stdio.h>

int main(void)
{
    int   codigo_cadete, etapa, pontuacao, pontuacao_total, continuar;
    float media;

    do
    {
        printf("\n===== MISSAO ORBITAL =====\n");
        printf("Codigo do cadete: ");
        scanf("%d", &codigo_cadete);

        pontuacao_total = 0;

        printf("\n");

        for (etapa = 1; etapa <= 3; etapa++)
        {
            printf("Pontuacao da etapa %d: ", etapa);
            scanf("%d", &pontuacao);

            while (pontuacao < 0 || pontuacao > 100)
            {
                printf("Valor invalido! Digite entre 0 e 100.\n");
                printf("Pontuacao da etapa %d: ", etapa);
                scanf("%d", &pontuacao);
            }

            pontuacao_total = pontuacao_total + pontuacao;
        }

        media = pontuacao_total / 3.0;

        printf("\n---------- RESULTADO ----------\n");
        printf("Cadete: %d\n", codigo_cadete);
        printf("Pontuacao total: %d pontos\n", pontuacao_total);
        printf("Media: %.2f\n", media);

        if (media >= 85.0)
        {
            printf("Classificacao: COMANDANTE DA MISSAO\n");
            printf("Treinamento concluido com excelencia.\n");
        }
        else if (media >= 70.0)
        {
            printf("Classificacao: PILOTO APROVADO\n");
            printf("Cadete autorizado para a missao.\n");
        }
        else if (media >= 50.0)
        {
            printf("Classificacao: CADETE EM RECUPERACAO\n");
            printf("Novo treinamento recomendado.\n");
        }
        else
        {
            printf("Classificacao: TREINAMENTO REINICIADO\n");
            printf("Cadete ainda nao autorizado.\n");
        }

        if (pontuacao_total == 300)
        {
            printf("PONTUACAO MAXIMA!\n");
        }

        printf("-------------------------------\n");

        printf("\nAvaliar outro cadete? 1-Sim | 0-Nao: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("Sistema encerrado.\n");

    return 0;
}
