// Aluno: Eduardo Pereira Magalhães

#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Países
    // Nivel Mestre (com extensao do codigo anterior)

    // ===== CARTA 01 =====
    char estado1;
    char codigo1[20];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;   // NOVO

    // ===== CARTA 02 =====
    char estado2;
    char codigo2[20];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;   // NOVO

    // ===== ENTRADA CARTA 01 =====
    printf("* Cadastro da Carta 01 *\n");

    printf("Digite o Estado (uma letra de A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== CALCULOS CARTA 01 =====
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    // ===== SUPER PODER CARTA 01 (NOVO) =====
    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidadePopulacional1);

    printf("\n------------------------------------\n");

    // ===== ENTRADA CARTA 02 =====
    printf("* Cadastro da Carta 02 *\n");

    printf("Digite o Estado (uma letra de A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== CALCULOS CARTA 02 =====
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // ===== SUPER PODER CARTA 02 (NOVO) =====
    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidadePopulacional2);

    // ===== EXIBICAO DOS DADOS (CODIGO ORIGINAL) =====
    printf("\n====================================\n");
    printf("        DADOS CADASTRADOS\n");
    printf("====================================\n");

    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.6f bilhoes\n", pibPerCapita1);

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.6f bilhoes\n", pibPerCapita2);

    // ===== COMPARACOES (NOVO - NIVEL MESTRE) =====
    printf("\n====================================\n");
    printf("      COMPARACAO DE CARTAS\n");
    printf("====================================\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n",
           pontosTuristicos1 > pontosTuristicos2);

    // Regra especial: menor densidade vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",
           densidadePopulacional1 < densidadePopulacional2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n",
           pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta 1 venceu (%d)\n",
           superPoder1 > superPoder2);

    return 0;
}