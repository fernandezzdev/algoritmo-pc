
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    FILE *arquivo;
    char rgm[20];
    float nota, soma = 0.0, maior_nota = 0.0;
    float media;
    int estudantes = 0;
    int aprovados = 0;
    int leitura;

    arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro: nao foi possivel abrir notas.txt!\n");
        return 1;
    }

    leitura = fscanf(arquivo, "%19s %f", rgm, &nota);

    while (leitura == 2) {
        if (estudantes == 0 || nota > maior_nota) {
            maior_nota = nota;
        }

        soma = soma + nota;
        estudantes++;

        if (nota >= 6.0) {
            aprovados++;
        }

        leitura = fscanf(arquivo, "%19s %f", rgm, &nota);
    }

    fclose(arquivo);

    if (estudantes > 0) {
        media = soma / estudantes;

        printf("Estudantes: %d\n", estudantes);
        printf("Media da turma: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior_nota);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
    } else {
        printf("Nenhum estudante encontrado no arquivo.\n");
    }

    return 0;
}
