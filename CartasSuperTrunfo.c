#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // ================== DECLARAÇÃO DAS VARIÁVEIS ==================
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];

    int populacao1, populacao2;
    int pontos1, pontos2;

    float area1, area2;
    float pib1, pib2;

    int opcao;

    printf("====== SUPER TRUNFO - CIDADES ======\n");

    // ================== CADASTRO CARTA 1 ==================
    printf("\n--- CADASTRO DA CARTA 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (milhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ================== CADASTRO CARTA 2 ==================
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (milhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);
return 0;
}