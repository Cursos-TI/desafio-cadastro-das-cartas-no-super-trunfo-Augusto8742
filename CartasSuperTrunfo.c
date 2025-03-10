#include <stdio.h>

int main() {
    // Variáveis para armazenar as informações da Carta 1
    char estado1 = 'A';
    char codigo1[5] = "A01";
    char cidade1[100] = "Brasília";
    int populacao1 = 2817381;
    float area1 = 5760.784;
    float pib1 = 286.94;
    int pontos1 = 32;

    // Variáveis para armazenar as informações da Carta 2
    char estado2 = 'B';
    char codigo2[5] = "B02";
    char cidade2[100] = "Minas Gerais";
    int populacao2 = 20540000;
    float area2 = 586528.0;
    float pib2 = 857.593; // PIB em bilhões
    int pontos2 = 45;

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);  // Ajustei para mostrar três casas decimais, pois o PIB de Minas Gerais foi dado em milhões
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}

