#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {#include <stdio.h>

int main() {

printf (" CARTAS SUPER TRUNFO \n")

//declaração de variáveis para a primeira carta
char estado1, codigo[10], cidade[20];
int populacao1, ponto_turistico1;
float area1, pib1;

//Declaração das variáveis para a segunda carta
char estado2, codigo[10], cidade[20];
int populacao2, ponto_turistico2;
float area2, pib2;
 
//Cadastro da primeira carta
printf("---CADASTRO DA PRIMEIRA CARTA---\n")

printf("Digite o estado (A-H):  ");
scanf("%n", codigo1);

printf("digite o código da carta (ex; A01): ");
scanf("%s", codigo1);

printf(" digite o nome da cidade: ")
scanf("%n", cidade2);

printf("digite a população: ");
scanf("%s", &populacao1);

printf("digite a área (em km²): ");
scanf("%f", &area1);

printf("digite o pib (em milhões): ");
scanf("%f", &pib1);

printf("digite o ponto turístico : ");
scanf("%c", &ponto_turistico1);

//Exibição das informações das cartas
printf("CARTA 1\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade; %s\n", cidade1);
printf("População; %d\n", populacao1);
printf("área; %.2f km²\n", area1);
printf("PIB; %.2f milhões\n", pib1);
printf("Ponto Turístico; %d\n", ponto_turistico1);
//Exibição da segunda carta
printf("CARTA 2\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade; %s\n", cidade2);
printf("População; %d\n", populacao2);
printf("área; %.2f km²\n", area2);
printf("PIB; %.2f milhões\n", pib2);
printf("Ponto Turístico; %d\n", ponto_turistico2);



return 0;
}