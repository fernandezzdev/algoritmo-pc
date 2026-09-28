#include <stdio.h>

int main() {
    char municipio[50];
    float temperatura, soma = 0, media;
    int frios = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o nome do municipio %d: ", i);
        scanf("%49s", municipio);

        printf("Digite a temperatura media de %s: ", municipio);
        scanf("%f", &temperatura);

        soma += temperatura;

        if (temperatura < 10) {
            frios++;
        }
    }

    media = soma / 5;

    printf("\nTemperatura media da regiao: %.2f C\n", media);
    printf("Municipios com temperatura media inferior a 10 C: %d\n", frios);

    return 0;
}
