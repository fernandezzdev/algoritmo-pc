#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale (LC_CTYPE,"");

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2) / 2;

    if(media >= 6) {
        printf("Parabéns! Você foi aprovado com média %.2f\n", media);
    } else {
        printf("Poxa, você foi reprovado com média %.2f\n", media);
    }

    return 0;
}
