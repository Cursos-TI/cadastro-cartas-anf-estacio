#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível - Aventureiro

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[41], nome2[41];
    int populacao1, populacao2;
    int pontoTur1, pontoTur2;
    float area1m2, area2m2;
    float area1km2, area2km2;
    float pib1, pib2;
    float pibBilhao1, pibBilhao2;
    float densidadePop1, densidadePop2;
    float pibPerCapita1, pibPerCapita2;


    // Área para entrada de dados
    printf("Definição da carta 1:\n");
    printf("Defina o estado da cidade: ");
    scanf(" %c", &estado1);
    printf("Defina código da cidade: ");
    scanf(" %s", codigo1);
    printf("Defina o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Defina a populacao da cidade: ");
    scanf(" %d", &populacao1);
    printf("Defina a área em m^2 da cidade: ");
    scanf(" %f", &area1m2);
    printf("Defina o PIB da cidade em reais: ");
    scanf(" %f", &pib1);
    printf("Defina o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontoTur1);
    putchar('\n');


    printf("Definição da carta 2:\n");
    printf("Defina o estado da cidade: ");
    scanf(" %c", &estado2);
    printf("Defina código da cidade: ");
    scanf(" %s", codigo2);
    printf("Defina o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Defina a populacao da cidade: ");
    scanf(" %d", &populacao2);
    printf("Defina a área em m^2 da cidade: ");
    scanf(" %f", &area2m2);
    printf("Defina o PIB da cidade em reais: ");
    scanf(" %f", &pib2);
    printf("Defina o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontoTur2);
    putchar('\n');

    // Área para cálculos
 
    // Carta1
    area1km2 = area1m2 / 1e6f;
    pibBilhao1 = pib1 / 1e9f;
    densidadePop1 = populacao1 / area1km2;
    pibPerCapita1 = pib1 / populacao1;
 
    // Carta2
    area2km2 = area2m2 / 1e6f;
    pibBilhao2 = pib2 / 1e9f;
    densidadePop2 = populacao2 / area2km2;
    pibPerCapita2 = pib2 / populacao2;


    // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km^2\n", area1km2);
    printf("PIB: %.2f bilhões de reais\n", pibBilhao1);
    printf("Número de Pontos Turísticos: %d\n", pontoTur1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePop1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    putchar('\n');

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km^2\n", area2km2);
    printf("PIB: %.2f bilhões de reais\n", pibBilhao2);
    printf("Número de Pontos Turísticos: %d\n", pontoTur2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    putchar('\n');


    return 0;

}
