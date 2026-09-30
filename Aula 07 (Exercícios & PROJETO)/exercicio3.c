#include <stdio.h>

int main() {
    float nota;
    int aprovados = 0;

    for (int aluno = 1; aluno <= 10; aluno++) {
        printf("Digite a nota do aluno %d: ", aluno);
        scanf("%f", &nota);

        if (nota >= 6.0) {
            aprovados++;
        }
    }

    printf("\nQuantidade de alunos com nota igual ou superior a 6.0: %d\n", aprovados);

    return 0;
}
