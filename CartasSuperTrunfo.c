//Aluno: Eduardo Pereira Magalhães

#include <stdio.h>

int main() {
    //Desafio Super Trunfo - Países
    //tema 1 - Cadasro de Cartas


    // ===== CARTA 01 =====
    char estado1;
    char codigo1[20];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;

    // ===== CARTA 02 =====
    char estado2;
    char codigo2[20];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;

    // ===== ENTRADA CARTA 01 =====
    printf("* Cadastro da Carta 01 *\n");

    printf("Digite o Estado (uma letra de A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== CÁLCULOS CARTA 01 =====
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;

    printf("\n------------------------------------\n");

    // ===== ENTRADA CARTA 02 =====
    printf("* Cadastro da Carta 02 *\n");

    printf("Digite o Estado (uma letra de A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== CÁLCULOS CARTA 02 =====
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;

    // ===== EXIBIÇÃO DOS DADOS =====
    printf("\n====================================\n");
    printf("        DADOS CADASTRADOS\n");
    printf("====================================\n");

    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.6f bilhões\n", pibPerCapta1);

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.6f bilhões\n", pibPerCapta2);
    
    return 0;
}