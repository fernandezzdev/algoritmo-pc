#include<stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    int int_numero1, int_numero2, int_soma, int_subtr, int_multi;

    printf("Digite o primeiro número:");
    scanf("%d", &int_numero1);

    printf("Digite o segundo número:");
    scanf("%d", &int_numero2);

    int_soma = int_numero1 + int_numero2;
    int_subtr = int_numero1 - int_numero2;
    int_multi = int_numero1 * int_numero2;

    printf("Soma: %d\n", int_soma);
    printf("Subtração: %d\n", int_subtr);
    printf("Multiplicação: %d\n", int_multi);

    return 0;
}
