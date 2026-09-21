#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale (LC_CTYPE,"");

    float media, frequencia;

    printf("Digite a média do aluno: ");
    scanf("%f", &media);

    printf("Digite a frequência do aluno: ");
    scanf("%f", &frequencia);

    if(frequencia < 75) {
        printf("Reprovado por falta!.\n");
    } else if(media < 6) {
        printf("Reprovado por nota!.\n");
    } else {
        printf("Aprovado!.\n");
    }

    return 0;
}
