#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
printf ('Cadastro Das Cartas!\n');
#include <stdio.h>
//definindo quantidade de cidades e estados
#define ESTADOS 3
#define CIDADES 4

typedef struct{
    char estado [20]
    char cidade [30]
    int populacao;
    float area;
    float pib;
    int pontos turisticos;


}Carta;
int main(){
Cartas cartas [ESTADOS][CIDADES]={
   {//Ceará
    {"Ceará", "Fortaleza"},
    {"Ceará", "Caucaia"},
    {"Ceará", "Juazeiro do Norte"},
    {"Ceará", "Sobral"}
},
{//Paraíba
    {"Paraíba", "João Pessoa"},
    {"Paraíba", "Campina Grande"},
    {"Paraíba", "Santa Rita"},
    {"Paraíba", "Patos"}
},
{//Bahia
    {"Bahia", "Salvador"},
    {"Bahia", "Feira de Santana"},
    {"Bahia", "Vitória da Conquista"},
    {"Bahia", "Itabuna"},
}
};

//Cadastro das cartas
for (int i = 0; i <ESTADOS; I++) {
    for (int j = 0; j <CIDADES; j++){

        printf("\nCadastro da cidade %s - %s\n",
                cartas[i][j].cidade, cartas[i]
            [j].estado);
        
        printf("População: ");
    scanf("%d", &cartas[i][j].populacao);

printf(Área (km²);");))
    }
}


}
return 0;
} 
