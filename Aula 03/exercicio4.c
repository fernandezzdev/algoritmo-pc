#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int potencia, horas_dia;
    float consumo;

    printf("Qual a potencia do aparelho (W)? ");
    scanf("%d", &potencia);

    printf("Horas de uso diaria: ");
    scanf("%d", &horas_dia);

    consumo = (float)(potencia * horas_dia * 30) / 1000;

    printf("Consumo mensal: %.2f kWh\n", consumo);

    return 0;
}
