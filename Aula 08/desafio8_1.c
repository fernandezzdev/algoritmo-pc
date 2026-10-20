#include <stdio.h>
#include <math.h>

int main() {
    const char *meses[] = {
        "jan", "fev", "mar", "abr", "mai", "jun",
        "jul", "ago", "set", "out", "nov", "dez"
    };

    const char *operadoras[] = {"Vivo", "Claro", "TIM"};

    int vendas[3][12] = {
        {120, 135, 150, 140, 160, 175, 180, 170, 165, 190, 200, 210},
        {110, 125, 145, 150, 155, 160, 170, 180, 175, 185, 195, 205},
        {100, 115, 130, 125, 140, 150, 160, 155, 170, 175, 185, 190}
    };

    int totalGeral = 0;
    int totalOperadora[3] = {0, 0, 0};
    int totalMes[12] = {0};

    double mediaGeral;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 12; j++) {
            totalGeral += vendas[i][j];
            totalOperadora[i] += vendas[i][j];
            totalMes[j] += vendas[i][j];
        }
    }

    mediaGeral = ceil((double) totalGeral / 36);

    int maiorOperadora = 0;

    for (int i = 1; i < 3; i++) {
        if (totalOperadora[i] > totalOperadora[maiorOperadora]) {
            maiorOperadora = i;
        }
    }

    int maiorMes = 0;

    for (int j = 1; j < 12; j++) {
        if (totalMes[j] > totalMes[maiorMes]) {
            maiorMes = j;
        }
    }

    printf("RELATORIO ANUAL DE VENDAS\n\n");

    printf("Media mensal geral: %.0f chips\n\n", mediaGeral);

    for (int i = 0; i < 3; i++) {
        printf("Media da %s: %.0f chips\n",
               operadoras[i],
               ceil((double) totalOperadora[i] / 12));
    }

    printf("\nMes com maior media de vendas: %s - %.0f chips\n",
           meses[maiorMes],
           ceil((double) totalMes[maiorMes] / 3));

    printf("Operadora com maior venda anual: %s - %d chips\n",
           operadoras[maiorOperadora],
           totalOperadora[maiorOperadora]);

    return 0;
}
