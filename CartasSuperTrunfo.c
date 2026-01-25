#include <stdio.h>

struct Carta {
    char estado;
    int numeroCidade;
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    float densidade;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta c1, c2;

    /* ===== Cadastro Carta 1 ===== */
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &c1.estado);

    printf("Numero da cidade (1-4): ");
    scanf("%d", &c1.numeroCidade);

    printf("Populacao: ");
    scanf("%lu", &c1.populacao);

    printf("Area (km²): ");
    scanf("%f", &c1.area);

    printf("PIB: ");
    scanf("%f", &c1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    /* ===== Cadastro Carta 2 ===== */
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &c2.estado);

    printf("Numero da cidade (1-4): ");
    scanf("%d", &c2.numeroCidade);

    printf("Populacao: ");
    scanf("%lu", &c2.populacao);

    printf("Area (km²): ");
    scanf("%f", &c2.area);

    printf("PIB: ");
    scanf("%f", &c2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    /* ===== Cálculos ===== */
    c1.densidade = (float)c1.populacao / c1.area;
    c2.densidade = (float)c2.populacao / c2.area;

    c1.pibPerCapita = c1.pib / (float)c1.populacao;
    c2.pibPerCapita = c2.pib / (float)c2.populacao;

    c1.superPoder =
        (float)c1.populacao +
        c1.area +
        c1.pib +
        c1.pontosTuristicos +
        c1.pibPerCapita +
        (1.0f / c1.densidade);

    c2.superPoder =
        (float)c2.populacao +
        c2.area +
        c2.pib +
        c2.pontosTuristicos +
        c2.pibPerCapita +
        (1.0f / c2.densidade);

    /* ===== Comparações ===== */
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n",
           c1.populacao > c2.populacao);

    printf("Area: Carta 1 venceu (%d)\n",
           c1.area > c2.area);

    printf("PIB: Carta 1 venceu (%d)\n",
           c1.pib > c2.pib);

    printf("Pontos Turisticos: Carta 1 venceu (%d)\n",
           c1.pontosTuristicos > c2.pontosTuristicos);

    /* Menor densidade vence */
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",
           c1.densidade < c2.densidade);

    printf("PIB per Capita: Carta 1 venceu (%d)\n",
           c1.pibPerCapita > c2.pibPerCapita);

    printf("Super Poder: Carta 1 venceu (%d)\n",
           c1.superPoder > c2.superPoder);

    return 0;
}