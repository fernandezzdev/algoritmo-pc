#include <stdio.h>

int main()
{
    int cpf;
    float preco=1, total_compra=0;

    printf("Digite seu CPF: ");
    scanf("%d", &cpf);

    for (int i=0; i<5; i++) {
        printf("Digite o preco: ");
        scanf("%f", &preco);

        total_compra = total_compra + preco;
    }

    printf("CPF: %d\n", cpf);
    printf("Total da compra: R$ %.2f\n", total_compra);

    return 0;
}
