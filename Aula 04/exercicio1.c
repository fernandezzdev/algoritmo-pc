#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale (LC_CTYPE,"");

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = (b*b) - (4*a*c);

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    printf("Raízes da equação:\n");
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}
