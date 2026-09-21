#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale (LC_CTYPE,"");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("O número %d é par.\n", num);
    } else {
        printf("O número %d é um número ímpar\n.");
    }

    return 0;
}
