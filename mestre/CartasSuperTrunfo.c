#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível - Mestre

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[41], nome2[41];
    unsigned long int populacao1, populacao2;
    int pontoTur1, pontoTur2;
    float area1m2, area2m2;
    float area1km2, area2km2;
    float pib1, pib2;
    float pibBilhao1, pibBilhao2;
    float densidadePop1, densidadePop2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int resultadoPopulacao, resultadoArea,
         resultadoPib, resultadoPontosTur,
         resultadoDensidadePop, resultadoPibPerCapita,
         resultadoSuperPoder;
    int cartaVencedoraPopulacao, cartaVencedoraArea,
         cartaVencedoraPib, cartaVencedoraPontosTur,
         cartaVencedoraDensidadePop, cartaVencedoraPibPerCapita,
         cartaVencedoraSuperPoder;


    // Área para entrada de dados
    printf("Definição da carta 1:\n");
    printf("Defina o estado da cidade: ");
    scanf(" %c", &estado1);
    printf("Defina código da cidade: ");
    scanf(" %s", codigo1);
    printf("Defina o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Defina a População o da cidade: ");
    scanf(" %lu", &populacao1);
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
    printf("Defina a população da cidade: ");
    scanf(" %lu", &populacao2);
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
    // Soma acumulada de Super Poder da carta 1
    // Essa soma acumulada faz uso de conversão implicita
    // para garantir o resultado correto.
    superPoder1  = populacao1;
    superPoder1 += area1m2;
    superPoder1 += pib1;
    superPoder1 += pontoTur1;
    superPoder1 += pibPerCapita1;
    superPoder1 += 1 / densidadePop1;
 
    // Carta2
    area2km2 = area2m2 / 1e6f;
    pibBilhao2 = pib2 / 1e9f;
    densidadePop2 = populacao2 / area2km2;
    pibPerCapita2 = pib2 / populacao2;
    // Soma acumulada de Super Poder da carta 2
    // Segue a regra do Super Poder da carta 1
    superPoder2  = populacao2;
    superPoder2 += area2m2;
    superPoder2 += pib2;
    superPoder2 += pontoTur2;
    superPoder2 += pibPerCapita2;
    superPoder2 += 1 / densidadePop2;

    // Comparações
    // Motivação para o truque algébrico utilizado para
    // determinar a carta vencedora fica explicado no README.md
    // do diretório da solução mestre
    resultadoPopulacao = populacao1 > populacao2;
    cartaVencedoraPopulacao = 2 - resultadoPopulacao;
    resultadoArea = area1m2 > area2m2;
    cartaVencedoraArea = 2 - resultadoArea;
    resultadoPib = pib1 > pib2;
    cartaVencedoraPib = 2 - resultadoPib;
    resultadoPontosTur = pontoTur1 > pontoTur2;
    cartaVencedoraPontosTur = 2 - resultadoPontosTur;
    resultadoDensidadePop = densidadePop1 < densidadePop2;
    cartaVencedoraDensidadePop = 2 - resultadoDensidadePop;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    cartaVencedoraPibPerCapita = 2 - resultadoPibPerCapita;
    resultadoSuperPoder = superPoder1 > superPoder2;
    cartaVencedoraSuperPoder = 2 - resultadoSuperPoder;


    // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km^2\n", area1km2);
    printf("PIB: %.2f bilhões de reais\n", pibBilhao1);
    printf("Número de Pontos Turísticos: %d\n", pontoTur1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePop1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    putchar('\n');

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km^2\n", area2km2);
    printf("PIB: %.2f bilhões de reais\n", pibBilhao2);
    printf("Número de Pontos Turísticos: %d\n", pontoTur2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    putchar('\n');


    // Área para exibição dos resultados da comparação
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n",
           cartaVencedoraPopulacao, resultadoPopulacao);
    printf("Área: Carta %d venceu (%d)\n",
           cartaVencedoraArea, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n",
           cartaVencedoraPib, resultadoPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           cartaVencedoraPontosTur, resultadoPontosTur);
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           cartaVencedoraDensidadePop, resultadoDensidadePop);
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           cartaVencedoraPibPerCapita, resultadoPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n",
           cartaVencedoraSuperPoder, resultadoSuperPoder);
    putchar('\n');


    return 0;

}
