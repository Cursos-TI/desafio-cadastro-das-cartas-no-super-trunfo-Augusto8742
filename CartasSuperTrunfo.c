#include <stdio.h>

int main() {
    
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    
    
    printf("Digite o estado da primeira cidade (ex: SP): ");
    scanf("%2s", estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %49[^\n]", nomeCidade1);  
    printf("Digite a população da cidade da primeira carta: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade da primeira carta (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da primeira carta: ");
    scanf("%d", &pontosTuristicos1);
    
    
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    
   
    printf("\nDigite o estado da segunda cidade (ex: RJ): ");
    scanf("%2s", estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %49[^\n]", nomeCidade2);  
    printf("Digite a população da cidade da segunda carta: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade da segunda carta (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da segunda carta: ");
    scanf("%d", &pontosTuristicos2);
    
    
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    
    int opcao;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &opcao);
    
    
    printf("\nComparação de cartas:\n");
    printf("%s (%s) vs %s (%s)\n", nomeCidade1, estado1, nomeCidade2, estado2);
    
    switch (opcao) {
        case 1:
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("%s venceu!\n", nomeCidade1);
            else if (populacao1 < populacao2) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) printf("%s venceu!\n", nomeCidade1);
            else if (area1 < area2) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2) printf("%s venceu!\n", nomeCidade1);
            else if (pib1 < pib2) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("%s venceu!\n", nomeCidade1);
            else if (pontosTuristicos1 < pontosTuristicos2) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional: %.2f hab/km² vs %.2f hab/km²\n", densidadePopulacional1, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) printf("%s venceu!\n", nomeCidade1);
            else if (densidadePopulacional1 > densidadePopulacional2) printf("%s venceu!\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    return 0;
} 
