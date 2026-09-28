#include <stdio.h>

int main() {
    float venda, total = 0;

    for (int dia = 1; dia <= 7; dia++) {
        printf("Digite o valor das vendas do dia %d: ", dia);
        scanf("%f", &venda);

        total = total + venda;
    }

    printf("\nTotal vendido na semana: R$ %.2f\n", total);

    return 0;
}
