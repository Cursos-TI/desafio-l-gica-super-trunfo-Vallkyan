#include <stdio.h>
// Desafio Super Trunfo - Países

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // As variaveis 1 são para a carta 1 e as variaveis 2 são para a carta 2
char estado1, codigo1[4], estado2, codigo2[4], nomedacidade1[50], nomedacidade2[50];
int populacao1, turisticos1, populacao2, turisticos2;
float pib1, pib2, area1, area2; 

  // Mensagem de boas vindas para iniciar o programa
  printf("Olá, bem vindo ao sistema de cadastramento de cartas do Super Trunfo \n");
  printf("Por gentileza, digite os dados das cartas conforme for sendo solicitado \n");

  // Área para entrada de dados da primeira carta
  printf("Digite a primeira letra do Estado \n");
  scanf(" %c", &estado1);

  printf("Digite o Codigo da Carta \n");
  scanf(" %s", &codigo1);

  printf("Digite o nome da Cidade \n");
  scanf(" %s", &nomedacidade1);

  printf("Digite a Populacao \n");
  scanf(" %d", &populacao1);

  printf("Digite a Area \n");
  scanf(" %f", &area1);

  printf("Digite o PIB \n");
  scanf(" %f", &pib1);

  printf("Digite a quantidade de Pontos Turisticos \n");
  scanf(" %d", &turisticos1);

  // Área para entrada de dados da segunda carta
  printf("Digite a primeira letra do Estado \n");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta \n");
  scanf(" %s", &codigo2);

  printf("Digite o nome da Cidade \n");
  scanf(" %s", &nomedacidade2);

  printf("Digite a Populacao \n");
  scanf(" %d", &populacao2);
  
  printf("Digite a Area \n");
  scanf(" %f", &area2);

  printf("Digite o PIB \n");
  scanf(" %f", &pib2);

  printf("Digite a quantidade de Pontos Turisticos \n");
  scanf(" %d", &turisticos2);

  // Área para operações aritiméticas
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;
  float pibpercapita1 = pib1 / populacao1;
  float pibpercapita2 = pib2 / populacao2;
  float superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapita1 + 1/densidade1;
  float superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibpercapita2 + 1/densidade2;

  // Área para saída dos dados das características das cartas
  printf("Carta 1\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\npopulacao: %d\narea: %.2f\npib: %.2f\nturisticos: %d\ndensidade: %.2f\npibpercapita: %.2f\n", estado1, codigo1, nomedacidade1, populacao1, area1, pib1, turisticos1, densidade1, pibpercapita1);
  printf("Carta 2\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\npopulacao: %d\narea: %.2f\npib: %.2f\nturisticos: %d\ndensidade: %.2f\npibpercapita: %.2f\n", estado2, codigo2, nomedacidade2, populacao2, area2, pib2, turisticos2, densidade2, pibpercapita2);
  
  // Área para saída dos dados comparados de comparação lógica
  if (populacao1 > populacao2) { printf ("Carta 1 Venceu!\n");}
    else {printf ("Cart2 Venceu!");}
  
//fechamento do programa
return 0;}