#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int qte_hora, qte_minutos, qte_tempo;

    printf("Quantas horas?");
    scanf("%d", &qte_hora);

    printf("Quantos minutos?");
    scanf("%d", &qte_minutos);

    qte_tempo = qte_hora * 60 + qte_minutos;

    printf("Em minutos será: %d", qte_tempo);

    return 0;
}
