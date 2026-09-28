#include <stdio.h>

int main() {
    int n;
    int positivos = 0, negativos = 0;
    float valor, maior;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valor);

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
        // valor == 0 não é contabilizado (neutro)

        if (i == 0 || valor > maior) {
            maior = valor;
        }
    }

    printf("\nQuantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores negativos: %d\n", negativos);
    printf("Maior valor informado: %.2f\n", maior);

    return 0;
}
