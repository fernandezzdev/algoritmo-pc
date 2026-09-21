#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    float peso, altura, imc;

    printf("Qual é o peso da pessoa em KG? ");
    scanf("%f", &peso);

    printf("Qual é a altura da pessoa em metros?");
    scanf("%f", &altura);

    imc = (float) peso/(altura*altura);

    printf("O Índice de Massa Corporal é: %.2f kg/m².", imc);

    return 0;
}
