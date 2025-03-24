#include <stdio.h>

int main() {
    // Declaração das variáveis para as cartas
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    
    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira cidade (ex: SP): ");
    scanf("%2s", estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da cidade da primeira carta: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade da primeira carta (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da primeira carta: ");
    scanf("%d", &pontosTuristicos1);
    
    // Cálculo da densidade populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    
    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda cidade (ex: RJ): ");
    scanf("%2s", estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população da cidade da segunda carta: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade da segunda carta (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da segunda carta: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculo da densidade populacional e PIB per capita
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    // Escolher um atributo para comparar (População neste caso)
    char atributo[] = "População";
    int cartaVencedora;
    
    if (populacao1 > populacao2) {
        printf("carta1 venceu!\n");
        cartaVencedora = 1;
    } else if (populacao2 > populacao1) {
        printf("carta2 venceu!\n");
        cartaVencedora = 2;
    } else {
        printf("Empate!\n");
        cartaVencedora = 0;
    }
    
    // Exibição dos resultados da comparação
    printf("\nComparação de cartas (Atributo: %s):\n", atributo);
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
    
    if (cartaVencedora != 0) {
        printf("Resultado: Carta %d venceu!\n", cartaVencedora);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}