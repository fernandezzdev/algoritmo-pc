#include<stdio.h>
#include<locale.h>
#define TAM 8

int main () {

    setlocale(LC_CTYPE, "");

    int i, contador=0, acima_media;
    float medicoes[TAM];
    float soma=0, media;

    for(i=0; i<TAM; i++) {
        printf("Digite o %d° valor: ", (i+1));
        scanf("%f", &medicoes[i]);
        soma += medicoes[i];
    }

    media = soma/TAM;
    acima_media = medicoes[0];
    for(i=0; i<TAM; i++){
        if(medicoes[i] > media)
            contador++; //conta os salários acíma da média.
        if(medicoes[i]>acima_media){
            acima_media=medicoes[i]; //verifica o maior salário.
        }
    }

    printf("Média: %.2f\n", media);
    printf("Valores acima da média: %d\n", contador);

    return 0;
}
