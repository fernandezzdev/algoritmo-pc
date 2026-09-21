#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "");

    float nota1, nota2, nota3, media_ponderada;

    printf("Digita a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digita a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digita a terceira nota: ");
    scanf("%f", &nota3);


    media_ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 4) / 7;


    printf("A média aritmética é: %.2f", media_ponderada);

    return 0;
}
