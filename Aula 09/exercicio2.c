#include<stdio.h>
#include<locale.h>

int main() {

    FILE *arquivo;
    setlocale(LC_CTYPE,"");

    char dia_semana[4]; //rgm 10
    float consumo; //nota
    int i, num;

    arquivo = fopen("consumo.txt", "w"); //essa
    if (arquivo == NULL) {
        printf("Erro em criação de arquivo!.");
        return 1;
    }
        printf("Digite a quantidade de registros: ");
        scanf("%d", &num);

        for (i=0; i<num; i++){
            printf("Digite o dia da semana (Ex: seg): "); //rgm
            scanf("%3s", dia_semana);//rgm
            printf("Qual o consumo da %s: ", dia_semana);//nota
            scanf("%f", &consumo);//nota
            fprintf(arquivo, "%s %.1f\n", dia_semana, consumo);//rgm nota
        }
        printf("Arquivo criado com sucesso\n");
        fclose(arquivo);

    return 0;
 }
