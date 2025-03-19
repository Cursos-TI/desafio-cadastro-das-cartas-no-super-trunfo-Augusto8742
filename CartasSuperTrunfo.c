#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados para a primeira carta
    printf("Digite a letra do estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^]s", nomeCidade1);
    printf("Digite a população da cidade da primeira carta: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área da cidade da primeira carta (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade da primeira carta (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da primeira carta: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita da primeira cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^]s", nomeCidade2);
    printf("Digite a população da cidade da segunda carta: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área da cidade da segunda carta (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade da segunda carta (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da segunda carta: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos resultados da comparação
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}
