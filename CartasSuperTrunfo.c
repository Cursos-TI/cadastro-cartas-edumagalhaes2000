#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {#include <stdio.h>

int main() {
    /* Carta 1 - Bahia */
    char estado1[] = "Bahia";
    char codigo1[] = "BA01";
    char cidade1[] = "Salvador";
    int populacao1 = 2900319;
    float area1 = 693.45;
    float pib1 = 62.9;
    int pontosTuristicos1 = 45;

    /* Carta 2 - Paraíba */
    char estado2[] = "Paraiba";
    char codigo2[] = "PB01";
    char cidade2[] = "Joao Pessoa";
    int populacao2 = 833932;
    float area2 = 210.04;
    float pib2 = 22.5;
    int pontosTuristicos2 = 30;

    /* Carta 3 - Pernambuco */
    char estado3[] = "Pernambuco";
    char codigo3[] = "PE01";
    char cidade3[] = "Recife";
    int populacao3 = 1653461;
    float area3 = 218.84;
    float pib3 = 51.2;
    int pontosTuristicos3 = 40;

    /* Exibição da Carta 1 */
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    /* Exibição da Carta 2 */
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos2);

    /* Exibição da Carta 3 */
    printf("Carta 3:\n");
    printf("Estado: %s\n", estado3);
    printf("Codigo: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", cidade3);
    printf("Populacao: %d\n", populacao3);
    printf("Area: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos3);

  
}



return 0;
} 
