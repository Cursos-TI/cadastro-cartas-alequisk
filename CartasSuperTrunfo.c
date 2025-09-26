#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  /** Área para definição das variáveis para armazenar as propriedades das cidades */
  char estado_1;
  char codigo_1[4];
  char cidade_1[20];
  int populacao_1;
  float area_1;
  float pib_1;
  int pontos_turistico_1;

  char estado_2;
  char codigo_2[4];
  char cidade_2[20];
  int populacao_2;
  float area_2;
  float pib_2;
  int pontos_turistico_2;
  /** Área para entrada de dados */

  // Leitura da carta 1
  printf("Digite o estado da cidade 01: ");
  scanf(" %c", &estado_1);
  printf("Digite o código da cidade 01: ");
  scanf("%s", codigo_1);
  printf("Digite o nome da cidade 01: ");
  scanf("%s", cidade_1);
  printf("Digite a população da cidade 01: ");
  scanf("%d", &populacao_1);
  printf("Digite a área da cidade 01 (em km²): ");
  scanf("%f", &area_1);
  printf("Digite o PIB da cidade 01 (em bilhões de reais): ");
  scanf("%f", &pib_1);
  printf("Digite o número de pontos turísticos da cidade 01: ");
  scanf("%d", &pontos_turistico_1);

  // Leitura da carta 2
  printf("Digite o estado da cidade 02: ");
  scanf(" %c", &estado_2);
  printf("Digite o código da cidade 02: ");
  scanf("%s", codigo_2);
  printf("Digite o nome da cidade 02: ");
  scanf("%s", cidade_2);
  printf("Digite a população da cidade 02: ");
  scanf("%d", &populacao_2);
  printf("Digite a área da cidade 02 (em km²): ");
  scanf("%f", &area_2);
  printf("Digite o PIB da cidade 02 (em bilhões de reais): ");
  scanf("%f", &pib_2);
  printf("Digite o número de pontos turísticos da cidade 02: ");
  scanf("%d", &pontos_turistico_2);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", codigo_1);
  printf("Nome da Cidade: %s\n", cidade_1);
  printf("População: %d\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turistico_1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", codigo_2);
  printf("Nome da Cidade: %s\n", cidade_2);
  printf("População: %d\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turistico_2);

  return 0;
} 
