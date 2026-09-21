#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int valor_unit, qte_caixa;
    float largura, comprimento, area_total, custo_total;

    printf("Qual é a largura da área (em metros)? ");
    scanf("%f", &largura);

    printf("Qual é o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);

    printf("Qual é o valor de cada caixa? ");
    scanf("%d", &valor_unit);

    area_total = largura*comprimento;

    qte_caixa = ceil(area_total/2.5);

    custo_total = qte_caixa * valor_unit;

    printf("Área total a ser revestida: %.2f m²\n", area_total);
    printf("Quantidade de caixas necessárias: %d\n", qte_caixa);
    printf("Custo total da compra: R$ %.2f\n", custo_total);

    return 0;
}
