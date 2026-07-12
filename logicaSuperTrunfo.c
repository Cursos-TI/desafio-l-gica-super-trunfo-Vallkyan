#include <stdio.h>
// Desafio Super Trunfo - Países

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades. Variaveis 1 são para a carta 1 e as variaveis 2 são para a carta 2
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
  
  //Área de Menu Interativo
  int opcao;
  printf ("Digite qual atributo da carta você deseja comparar de acordo as opções numéricas de 1 a 7, de acordo ao que segue abaixo explicado:\n");
  printf ("Digite 1 se quiser comparar o atributo 'População':/n");
  printf ("Digite 2 se quiser comparar o atributo 'Área':/n");
  printf ("Digite 3 se quiser comparar o atributo 'PIB':/n");
  printf ("Digite 4 se quiser comparar o atributo 'Pontos Túristicos':/n");
  printf ("Digite 5 se quiser comparar o atributo 'Densidade':/n");
  printf ("Digite 6 se quiser comparar o atributo 'PIB per Capita':/n");
  printf ("Digite 7 se quiser comparar o atributo 'Super Poder':/n");
  scanf ("%d", opcao);

  switch (opcao) {
    case 1:
     if (populacao1 > populacao2) {printf ("Carta 1 Venceu!\n");}
      else { printf ("Carta 2 Venceu!\n");}
      break;
    case 2:
     if (area1 > area2) {printf ("Carta 1 Venceu!\n");}
      else { printf ("Carta 2 Venceu!\n");}
      break;
    case 3:
     if (pib1 > pib2) {printf ("Carta 1 Venceu!\n");}
      else { printf ("Carta 2 Venceu!\n");}
      break;
    case 4:
     if (turisticos1 > turisticos2) {printf ("Carta 1 Venceu!\n");}
      else { printf ("Carta 2 Venceu!\n");}
      break;
    case 5:
     if (densidade1 < densidade2) {printf ("Carta 1 Venceu!\n");}
      else { printf ("Carta 2 Venceu!\n");};
      break;
    case 6:
     if (superpoder1 > superpoder2) {printf ("Carta 1 Venceu!\n");}
      else { printf ("Carta 2 Venceu!\n");}
      break;
    case 7:
     if (populacao1 > populacao2) {printf ("Carta 1 Venceu!\n");}
      else { printf ("Carta 2 Venceu!\n");}
      break;
    default:
      break;} 
      
//fechamento do programa
return 0;}