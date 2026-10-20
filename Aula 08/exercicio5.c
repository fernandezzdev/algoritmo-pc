#include <stdio.h>
#include <locale.h>
#define DIAS 7

int main() {

    setlocale(LC_CTYPE,"");

    float temp[DIAS];
    float soma = 0;
    float media;
    float maior, menor;
    int acima = 0;
    int i;

    for (i = 0; i < DIAS; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    maior = temp[0];
    menor = temp[0];

    for (i = 0; i < DIAS; i++) {
        soma = soma + temp[i];

        if (temp[i] > maior) {
            maior = temp[i];
        }
        if (temp[i] < menor) {
            menor = temp[i];
        }
    }

    media = soma / DIAS;

    for (i = 0; i < DIAS; i++) {
        if (temp[i] > media) {
            acima++;
        }
    }

    printf("Media: %.2f C\n", media);
    printf("Maior temperatura: %.2f C\n", maior);
    printf("Menor temperatura: %.2f C\n", menor);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}
