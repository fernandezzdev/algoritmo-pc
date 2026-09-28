#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_CTYPE, "");
    // Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Processamento
    int qte_times, computadores_faltantes;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    // Entrada de dados
    // Solicite ao usuario todos os dados do evento.


    printf("Quantidade total de participantes: ");
    scanf("%d", &qte_participantes);
    printf("Quantidade de jogadores em cada time: ");
    scanf("%d", &qte_jogadores_por_time);
    printf("Quantidade de computadores disponíveis: ");
    scanf("%d", &qte_computadores);
    printf("Potência média de cada computador, em watts: ");
    scanf("%f", &potencia);
    printf("Duração do evento, em horas: ");
    scanf("%f", &duracao);

    printf("Preço de 1 kWh de energia: ");
    scanf("%f", &preco_kwh);
    printf("Preço de um kit de alimentação por participante: ");
    scanf("%f", &preco_kit);
    printf("Outros custos do evento: ");
    scanf("%f", &outros_custos);
    printf("Orçamento máximo disponível para o evento: ");
    scanf("%f", &orcamento);

    qte_times= ceil (qte_participantes/qte_jogadores_por_time);
    consumo_energia=(qte_computadores * potencia * duracao) / 1000;
    custo_energia= consumo_energia * preco_kwh;
    custo_alimentacao= qte_participantes * preco_kit;
    custo_total= custo_energia + custo_alimentacao + outros_custos;
    custo_por_participante= custo_total / qte_participantes;
    saldo= orcamento - custo_total;
    computadores_faltantes= qte_computadores - qte_participantes;

    printf("=======Arena Tech=======\n");
    printf("Participantes: %d\n", qte_participantes);
    printf("Times necessários: %d\n", qte_times);
    printf("Computadores disponíveis: %d\n", qte_computadores);
    if (qte_computadores >= qte_participantes) {
        printf("Infraestrutura Suficiente!!\n");
    }
    else {
        printf("Infraestrutura Insuficiente!! Quantidade faltante: %d\n", computadores_faltantes);
    }

    printf("Consumo estimado: %.2f\n", consumo_energia);
    if (consumo_energia > 40) {
        printf("Consumo: Baixo!!\n");
    }
    else if (20 < consumo_energia <=40) {
        printf("Consumo: Moderado!\n");
    }
    else {
        printf("Alto\n");
    }
    printf("Custo da energia: %.2f\n", custo_energia);
    printf("Custo da alimentação: %.2f\n", custo_alimentacao);
    printf("Outros custos: %.2f\n", outros_custos);
    printf("Custo TOTAL: %.2f\n", custo_total);
    printf("Custo por PARTICIPANTE: %.2f\n", custo_por_participante);


    printf("Orçamento disponível: %.2f\n", orcamento);
    printf("Saldo: %.2f\n", saldo);
    if (custo_total > orcamento){
        printf("Acima do orçamento!\n");
    }
    else if (custo_total <= orcamento && saldo <= 0.5*orcamento){
        printf("No limite do orçamento!\n");
    }
    else {
        printf("Dentro do orçamento!\n");
    }


    printf("Decisão Final: \n");
    printf("Motivo: \n");








    // Calculos
    // Calcule:
    // - quantidade de times;
    // - consumo de energia;
    // - custo da energia;
    // - custo da alimentacao;
    // - custo total;
    // - custo por participante;
    // - saldo do orcamento.


    // Relatorio geral
    // Exiba participantes e quantidade de times.


    // Analise da infraestrutura
    // Verifique se a quantidade de computadores e suficiente.


    // Classificacao do consumo de energia
    // Classifique o consumo como:
    // BAIXO, MODERADO ou ALTO.


    // Relatorio de custos
    // Exiba os custos calculados.


    // Analise do orcamento
    // Informe se o evento esta:
    // DENTRO DO ORCAMENTO,
    // NO LIMITE DO ORCAMENTO
    // ou ACIMA DO ORCAMENTO.


    // Decisao final
    // Informe se o evento esta:
    // APROVADO,
    // APROVADO COM RESSALVAS
    // ou NAO RECOMENDADO.

    return 0;
}
