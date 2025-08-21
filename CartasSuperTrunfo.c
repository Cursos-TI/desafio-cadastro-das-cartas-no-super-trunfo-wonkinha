#include <stdio.h>

int main(){

char estado1, estado2;
char codigo1[5];
char codigo2[5];
char cidade1[20];
char cidade2[20];
int pontos1, pontos2;
float densidade1, pib1, pibper1, area1, densidade2, pib2, pibper2, area2, superpoder1, superpoder2;
unsigned long int populacao1, populacao2;

printf("Informe a letra que representa o estado da PRIMEIRA CARTA: \n");
scanf("%c",&estado1);
printf("Informe o código do estado com tres caracteres: \n");
scanf(" %s", codigo1);
printf("Digite o nome da cidade: \n");
scanf(" %s",cidade1);
printf("Informe a população dessa cidade: \n");
scanf(" %lu",&populacao1);
printf("Informe a área dessa cidade em km²: \n");
scanf(" %f" ,&area1);
printf("Informe o PIB dessa cidade: \n");
scanf(" %f",&pib1);
printf("Informe a quantidade de pontos turísticos: \n");
scanf("%d", &pontos1);


densidade1 = (float) (populacao1 / area1);
pibper1 = (float) (pib1 / populacao1);

/*printf("Estado: %c\n",estado1);
printf("Código: %s\n",codigo1);
printf("Cidade: %s\n",cidade1);
printf("População: %d\n",populacao1);
printf("Área: %.1f\n",area1);
printf("PIB: %.2f\n",pib1);
printf("Densidade populacional: %.2f\n",densidade1);
printf("PIB per cápita: %.2f\n",pibper1);*/



printf("Informe a letra que representa o estado da SEGUNDA CARTA: \n");
scanf(" %c",&estado2);
printf("Informe o código do estado com tres caracteres: \n");
scanf(" %s", codigo2);
printf("Digite o nome da cidade: \n");
scanf(" %s",cidade2);
printf("Informe a população dessa cidade: \n");
scanf(" %lu",&populacao2);
printf("Informe a área dessa cidade em km²: \n");
scanf(" %f" ,&area2);
printf("Informe o PIB dessa cidade: \n");
scanf(" %f",&pib2);
printf("Informe a quantidade de pontos turísticos: \n");
scanf("%d", &pontos2);

densidade2 = (float) (populacao2 / area2);
pibper2 = (float) (pib2 / populacao2);

superpoder1 = (float) (populacao1 + area1 + pib1 + pibper1 + 1/densidade1);
superpoder2 = (float) (populacao2 + area2 + pib2 + pibper2 + 1/densidade2);

/*printf("Estado: %c\n",estado2);
printf("Código: %s\n",codigo2);
printf("Cidade: %s\n",cidade2);
printf("População: %d\n",populacao2);
printf("Área: %.1f\n",area2);
printf("PIB: %.2f\n",pib2);
printf("Densidade populacional: %.2f\n",densidade2);
printf("PIB per cápita: %.2f\n",pibper2);*/

printf("População: carta %c venceu %lu\n", estado1, (populacao1 > populacao2));
printf("População: carta %c venceu %u\n", estado1, (populacao1 > populacao2));
printf("Área: carta %c venceu %u\n", estado1, (area1 > area2));
printf("PIB: carta %c venceu %u\n", estado1, (pib1 > pib2));
printf("Pontos turísticos: carta %c venceu %d\n", estado1, (pontos1 > pontos2));
printf("Densidade populacional: carta %c venceu %u\n", estado2, (densidade1 < densidade2));
printf("PIB per cápita: carta %c venceu %u\n", estado1, (pibper1 > pibper2));
printf("Super poder: carta %c venceu %u\n", estado1, (superpoder1 > superpoder2));

return 0;
}
