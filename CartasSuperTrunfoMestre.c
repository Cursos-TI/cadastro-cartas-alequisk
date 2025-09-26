#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Cadastro e comparação de cartas
// Objetivo: Criar duas cartas, calcular Super Poder e comparar todos os atributos

int main() {
  /** Área para definição das variáveis para armazenar as propriedades das cidades */
  char estado_1;
  char codigo_1[4];
  char cidade_1[20];
  int populacao_1;
  float area_1;
  float pib_1;
  int pontos_turistico_1;
  float densidade_1;
  float pib_per_capita_1;
  float super_poder_1;

  char estado_2;
  char codigo_2[4];
  char cidade_2[20];
  int populacao_2;
  float area_2;
  float pib_2;
  int pontos_turistico_2;
  float densidade_2;
  float pib_per_capita_2;
  float super_poder_2;
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

  // Cálculos para carta 1
  densidade_1 = (float) populacao_1 / area_1;
  pib_per_capita_1 = (pib_1 * 1000000000.0f) / (float) populacao_1;  // PIB em bilhões convertido para reais
  super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turistico_1 + pib_per_capita_1 + (1.0f / densidade_1);

  // Leitura da carta 2
  printf("\nDigite o estado da cidade 02: ");
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

  // Cálculos para carta 2
  densidade_2 = (float) populacao_2 / area_2;
  pib_per_capita_2 = (pib_2 * 1000000000.0f) / (float) populacao_2;
  super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turistico_2 + pib_per_capita_2 + (1.0f / densidade_2);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", codigo_1);
  printf("Nome da Cidade: %s\n", cidade_1);
  printf("População: %lu\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turistico_1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
  printf("Super Poder: %.2f\n", super_poder_1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", codigo_2);
  printf("Nome da Cidade: %s\n", cidade_2);
  printf("População: %lu\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turistico_2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
  printf("Super Poder: %.2f\n", super_poder_2);

  // Área de comparação das cartas
  printf("\n Comparação de cartas \n");
  
  // População (maior vence)
  printf("População: ");
  if (populacao_1 > populacao_2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  
  // Área (maior vence)
  printf("Área: ");
  if (area_1 > area_2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  
  // PIB (maior vence)
  printf("PIB: ");
  if (pib_1 > pib_2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  
  // Pontos Turísticos (maior vence)
  printf("Pontos Turísticos: ");
  if (pontos_turistico_1 > pontos_turistico_2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  
  // Densidade Populacional (menor vence)
  printf("Densidade Populacional: ");
  if (densidade_1 < densidade_2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  
  // PIB per Capita (maior vence)
  printf("PIB per Capita: ");
  if (pib_per_capita_1 > pib_per_capita_2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }
  
  // Super Poder (maior vence)
  printf("Super Poder: ");
  if (super_poder_1 > super_poder_2) {
    printf("Carta 1 venceu (1)\n");
  } else {
    printf("Carta 2 venceu (0)\n");
  }

  return 0;
} 
