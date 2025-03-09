#include <stdio.h>

    int main() {
        // Variáveis para armazenar as informações da Carta 1
        char estado1;
        char codigo1[5];
        char cidade1[100];
        int populacao1;
        float area1, pib1;
        int pontos1;
    
        // Variáveis para armazenar as informações da Carta 2
        char estado2;
        char codigo2[5];
        char cidade2[100];
        int populacao2;
        float area2, pib2;
        int pontos2;
    
        // Leitura dos dados da Carta 1
        printf("Digite os dados da Carta 1:\n");
        printf("Estado (letra de A a H): ");
        scanf(" %c", &estado1);
        printf("Código da Carta (ex: A01): ");
        scanf("%s", codigo1);
        printf("Nome da Cidade: ");
        scanf(" %[^\n]s", cidade1);  // Lê uma linha inteira (com espaços)
        printf("População: ");
        scanf("%d", &populacao1);
        printf("Área (em km²): ");
        scanf("%f", &area1);
        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib1);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos1);
    
        // Leitura dos dados da Carta 2
        printf("\nDigite os dados da Carta 2:\n");
        printf("Estado (letra de A a H): ");
        scanf(" %c", &estado2);
        printf("Código da Carta (ex: A01): ");
        scanf("%s", codigo2);
        printf("Nome da Cidade: ");
        scanf(" %[^\n]s", cidade2);  // Lê uma linha inteira (com espaços)
        printf("População: ");
        scanf("%d", &populacao2);
        printf("Área (em km²): ");
        scanf("%f", &area2);
        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib2);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos2);
    
        // Exibição dos dados da Carta 1
        printf("\nCarta 1:\n");
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
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos2);
    
        return 0;
    }
