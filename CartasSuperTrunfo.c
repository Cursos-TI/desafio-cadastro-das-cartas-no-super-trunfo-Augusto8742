#include <stdio.h>
#include <string.h>

int main() {
    // Dados das cartas
    char estado1[3] = "SP", estado2[3] = "RJ";
    char codigo1[4] = "A01", codigo2[4] = "B02";
    char nomeCidade1[50] = "São Paulo", nomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 12300000, populacao2 = 6700000;
    float area1 = 1521.11, area2 = 1200.27;
    float pib1 = 799.0, pib2 = 408.0;
    int pontosTuristicos1 = 10, pontosTuristicos2 = 15;

    // Cálculos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Exibição das cartas
    printf("Cartas carregadas:\n");
    printf("%s (%s)\n", nomeCidade1, estado1);
    printf("%s (%s)\n\n", nomeCidade2, estado2);

    // Menu interativo
    int opcao1 = 0, opcao2 = 0;
    float valor1_a = 0, valor2_a = 0, valor1_b = 0, valor2_b = 0;
    char *nomeAtributo1 = "", *nomeAtributo2 = "";

    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &opcao1);

    // Segundo menu dinâmico
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i != opcao1) {
                switch (i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Populacional\n"); break;
                }
            }
        }
        scanf("%d", &opcao2);
        if (opcao2 == opcao1)
            printf("Você escolheu o mesmo atributo! Escolha um diferente.\n");
    } while (opcao2 == opcao1);

    // Atribuindo valores do primeiro atributo
    switch (opcao1) {
        case 1: valor1_a = populacao1; valor2_a = populacao2; nomeAtributo1 = "População"; break;
        case 2: valor1_a = area1; valor2_a = area2; nomeAtributo1 = "Área"; break;
        case 3: valor1_a = pib1; valor2_a = pib2; nomeAtributo1 = "PIB"; break;
        case 4: valor1_a = pontosTuristicos1; valor2_a = pontosTuristicos2; nomeAtributo1 = "Pontos Turísticos"; break;
        case 5: valor1_a = densidade1; valor2_a = densidade2; nomeAtributo1 = "Densidade Populacional"; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Atribuindo valores do segundo atributo
    switch (opcao2) {
        case 1: valor1_b = populacao1; valor2_b = populacao2; nomeAtributo2 = "População"; break;
        case 2: valor1_b = area1; valor2_b = area2; nomeAtributo2 = "Área"; break;
        case 3: valor1_b = pib1; valor2_b = pib2; nomeAtributo2 = "PIB"; break;
        case 4: valor1_b = pontosTuristicos1; valor2_b = pontosTuristicos2; nomeAtributo2 = "Pontos Turísticos"; break;
        case 5: valor1_b = densidade1; valor2_b = densidade2; nomeAtributo2 = "Densidade Populacional"; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Lógica de comparação
    int pontos1 = 0, pontos2 = 0;
    pontos1 += (opcao1 == 5) ? (valor1_a < valor2_a ? 1 : 0) : (valor1_a > valor2_a ? 1 : 0);
    pontos2 += (opcao1 == 5) ? (valor2_a < valor1_a ? 1 : 0) : (valor2_a > valor1_a ? 1 : 0);
    pontos1 += (opcao2 == 5) ? (valor1_b < valor2_b ? 1 : 0) : (valor1_b > valor2_b ? 1 : 0);
    pontos2 += (opcao2 == 5) ? (valor2_b < valor1_b ? 1 : 0) : (valor2_b > valor1_b ? 1 : 0);

    float soma1 = valor1_a + valor1_b;
    float soma2 = valor2_a + valor2_b;

    // Resultado
    printf("\nResultado da Comparação:\n");
    printf("%s vs %s\n", nomeCidade1, nomeCidade2);
    printf("%s: %.2f vs %.2f\n", nomeAtributo1, valor1_a, valor2_a);
    printf("%s: %.2f vs %.2f\n", nomeAtributo2, valor1_b, valor2_b);
    printf("Soma dos Atributos: %.2f vs %.2f\n", soma1, soma2);

    if (soma1 > soma2)
        printf("%s venceu!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("%s venceu!\n", nomeCidade2);
    else
        printf("Empate!\n");

    return 0;
}


