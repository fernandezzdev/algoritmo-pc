#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 4

int main() {

    setlocale(LC_CTYPE,"");

    int i, j, posMaior;
    float notas[LIN][COL], media[LIN], soma, maior;

    for (i = 0; i < LIN; i++) {
        printf("Digite as %d notas do estudante %d:\n", COL, i + 1);
        for (j = 0; j < COL; j++) {
            scanf("%f", &notas[i][j]);
        }
    }

    for (i = 0; i < LIN; i++) {
        soma = 0;
        for (j = 0; j < COL; j++) {
            soma = soma + notas[i][j];
        }
        media[i] = soma / COL;
        printf("Media do estudante %d: %.2f\n", i + 1, media[i]);
    }

    maior = media[0];
    posMaior = 0;
    for (i = 1; i < LIN; i++) {
        if (media[i] > maior) {
            maior = media[i];
            posMaior = i;
        }
    }

    printf("Maior media: estudante %d - %.2f\n", posMaior + 1, maior);

    return 0;
}
