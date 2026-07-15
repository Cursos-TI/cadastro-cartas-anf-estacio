#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível - Novato

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[41], nome2[41];
    int populacao1, populacao2;
    int pontoTur1, pontoTur2;
    float area1, area2;
    float pib1, pib2;


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
    scanf(" %f", &area1);
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
    scanf(" %f", &area2);
    printf("Defina o PIB da cidade em reais: ");
    scanf(" %f", &pib2);
    printf("Defina o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontoTur2);
    putchar('\n');


    // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km^2\n", area1 / 1e6f);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1e9f);
    printf("Número de Pontos Turísticos: %d\n", pontoTur1);
    putchar('\n');

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km^2\n", area2 / 1e6f);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1e9f);
    printf("Número de Pontos Turísticos: %d\n", pontoTur2);
    putchar('\n');


    return 0;

}
