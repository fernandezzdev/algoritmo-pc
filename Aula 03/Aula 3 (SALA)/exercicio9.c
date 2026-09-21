#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {


    setlocale(LC_CTYPE, "");

    float coordenada_x1, coordenada_x2, coordenada_y1, coordenada_y2, distancia;

    printf("Digite a coordenada X do 1º ponto: ");
    scanf("%f", &coordenada_x1);

    printf("Digite a coordenada Y do 1º ponto: ");
    scanf("%f", &coordenada_y1);

    printf("Digite a coordenada X do 2º ponto: ");
    scanf("%f", &coordenada_x2);

    printf("Digite a coordenada Y do 2º ponto: ");
    scanf("%f", &coordenada_y2);

    distancia = sqrt(pow(coordenada_x2 - coordenada_x1, 2) + pow(coordenada_y2 - coordenada_y1, 2));

    printf("A distância entre os pontos é: %.2f\n", distancia);

    return 0;
}
