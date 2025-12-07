#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   // FIRST LETTER
   char state1;
   char cardCode1[3];
   char cityName1[100];
   int population1;
   float area1;
   float PIB1;
   int touristSitesCount1;

   printf("Enter the state: \n");
   scanf("%c", &state1);
   printf("Enter the card code: \n");
   scanf("%s", cardCode1);
   printf("Enter the city name: \n");
   scanf("%s", cityName1);

   printf("Enter the population: \n");
   scanf("%d", &population1);
   printf("Enter the area: \n");
   scanf("%f", &area1);
   printf("Enter the PIB: \n");
   scanf("%f", &PIB1);
   printf("Enter the tourist sites count: \n");
   scanf("%d", &touristSitesCount1);

   // SECOND LETTER
   char state2;
   char cardCode2[3];
   char cityName2[100];
   int population2;
   float area2;
   float PIB2;
   int touristSitesCount2;

   printf("Enter the state: \n");
   scanf("%c", &state2);
   printf("Enter the card code: \n");
   scanf("%s", cardCode2);
   printf("Enter the city name: \n");
   scanf("%s", cityName2); 
   printf("Enter the population: \n");
   scanf("%d", &population2);
   printf("Enter the area: \n");
   scanf("%f", &area2);
   printf("Enter the PIB: \n");
   scanf("%f", &PIB2);
   printf("Enter the tourist sites count: \n");
   scanf("%d", &touristSitesCount2);

   printf("Carta1:\n");
   printf("Estado: %c\n", state1);
   printf("Código: %s\n", cardCode1);
   printf("Nome da Cidade: %s\n", cityName1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f \n", PIB1);
   printf("Número de pontos turísticos: %d \n", touristSitesCount1);

   printf("\n");

   printf("Carta2:\n");
   printf("Estado: %c\n", state2);
   printf("Código: %s\n", cardCode2);
   printf("Nome da Cidade: %s\n", cityName2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f \n", PIB2);
   printf("Número de pontos turísticos: %d \n", touristSitesCount2);

   return 0;
} 
