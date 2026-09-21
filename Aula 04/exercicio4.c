#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{

    setlocale (LC_CTYPE,"");

    float peso, altura, imc, cat1, cat2, cat3, cat4, cat5;

    printf("Digite seu peso. (em quilogramas): ");
    scanf("%f", &peso);

    printf("Digite sua altura. (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if(imc < 20.0) {
        printf("Você está na categoria 'Abaixo do peso'.\nImc: %.2f Kg/m²", imc);
    } else if(imc < 25) {
        printf("Você está na categoria 'Peso Normal'.\nImc: %.2f Kg/m²", imc);
    } else if(imc < 30) {
        printf("Você está na categoria 'Sobrepeso'.\nImc: %.2f Kg/m²", imc);
    } else if(imc < 39,9) {
        printf("Você está na categoria 'Obeso'.\nImc: %.2f Kg/m²", imc);
    } else {
        printf("Você está na categoria 'Obeso mórbido'.\nImc: %.2f Kg/m²", imc);
    }

    return 0;
}
