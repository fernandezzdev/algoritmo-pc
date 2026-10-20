#include<stdio.h>
#include<locale.h>

int main() {

    FILE *arquivo;
    setlocale(LC_CTYPE,"");

    char rgm[4]; //rgm 10
    float nota; //nota
    int i, num;

    arquivo = fopen("nota.txt", "w"); //essa
    if (arquivo == NULL) {
        printf("Erro em criação de arquivo!.");
        return 1;
    }
        printf("Digite a quantidade de registros: ");
        scanf("%d", &num);

        for (i=0; i<num; i++){
            printf("Digite o RGM: "); //rgm
            scanf("%6s", rgm);//rgm
            printf("Qual a sua nota: ", nota);//nota
            scanf("%f", &nota);//nota
            fprintf(arquivo, "%s %.1f\n", rgm, nota);//rgm nota
        }
        printf("Arquivo criado com sucesso\n");
        fclose(arquivo);

    return 0;
 }
