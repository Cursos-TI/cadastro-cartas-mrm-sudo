#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // definição das variáveis para armazenar as propriedades das cidades carta1 e carta2
  char estado1[1];
  char estado2[1];
  char cod_carta1[3];
  char cod_carta2[3];
  char nome_cidade1[15];
  char nome_cidade2[15];
  int populacao_carta1;
  int populacao_carta2;
  float area_carta1;
  float area_carta2;
  float pib_carta1;
  float pib_carta2;
  int pontos_tur_carta1;
  int pontos_tur_carta2;
  
    // Área para entrada de dados 
    //CARTA 1
    printf("Carta 1:\n");

    printf("digige uma letra de A a H para estado: ");
    scanf("%s", &estado1);
    printf("digite a letra do estado e dois dumeros de 1 a 4:");
    scanf("%s", &cod_carta1);
    printf("digite o nome da cidade (tudo junto): ");
    scanf("%s", &nome_cidade1);
    printf("digite o numero de habitantes da cidade: ");
    scanf("%i", &populacao_carta1);
    printf("digite a area em km2: ");
    scanf("%f", &area_carta1);
    printf("digite o pib: ");
    scanf("%f", &pib_carta1);
    printf("digite os pontos turisticos:");
    scanf("%i", &pontos_tur_carta1);

    // Área para entrada de dados 
    //CARTA 2

    printf("Carta 2:\n");

    printf("digige uma letra de A a H para estado: ");
    scanf("%s", &estado2);
    printf("digite a letra do estado e dois dumeros de 1 a 4:");
    scanf("%s", &cod_carta2);
    printf("digite o nome da cidade (tudo junto): ");
    scanf("%s", &nome_cidade2);
    printf("digite o numero de habitantes da cidade: ");
    scanf("%i", &populacao_carta2);
    printf("digite a area em km2: ");
    scanf("%f", &area_carta2);
    printf("digite o pib: ");
    scanf("%f", &pib_carta2);
    printf("digite os pontos turisticos:");
    scanf("%i", &pontos_tur_carta2);

  
  
    // Área para exibição dos dados da cidade
    //CARTA 1

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta:%s\n",cod_carta1);
    printf("Nome da Cidade:%s\n",nome_cidade1);
    printf("População: %i\n", pontos_tur_carta1);
    printf("Área em km2:%f \n", area_carta1);
    printf("PIB: %f\n", pib_carta1);
    printf("Número de Pontos Turísticos:%i\n",pontos_tur_carta1);

    // Área para exibição dos dados da cidade
    //CARTA 2
    
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta:%s\n",cod_carta2);
    printf("Nome da Cidade:%s\n",nome_cidade2);
    printf("População: %i\n", pontos_tur_carta2);
    printf("Área em km2:%f \n", area_carta2);
    printf("PIB: %f\n", pib_carta2);
    printf("Número de Pontos Turísticos:%i\n",pontos_tur_carta2);

     
    return 0;
} 
