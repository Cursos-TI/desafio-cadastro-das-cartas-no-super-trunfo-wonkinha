#include <stdio.h>

int main() {

    char c1[20];
    char c2[20];
    int p1;
    int p2;
    int pt1;
    int pt2;
    float a1;
    float a2;
    float pib2;
    float pib1;


printf("Digite o nome da PRIMEIRA cidade:\n");
scanf("%s",c1);
printf("Digite a população dessa cidade:\n");
scanf("%i", &p1);
printf("Digite o tamanho em área do território da cidade:\n");
scanf("%f",&a1);
printf("Qual é o valor do PIB dessa cidade?:\n");
scanf("%f", &pib1);
printf("Quantidade de pontos turísticos dessa cidade:\n");
scanf("%i", &pt1);

printf("Digite o nome da SEGUNDA cidade:\n");
scanf("%s",c2);
printf("Digite a população dessa cidade:\n");
scanf("%i", &p2);
printf("Digite o tamanho em área do território da cidade:\n");
scanf("%f",&a2);
printf("Qual é o valor do PIB dessa cidade?:\n");
scanf("%f", &pib2);
printf("Quantidade de pontos turísticos dessa cidade:\n");
scanf("%i", &pt2);

printf("A cidade: %s\n",c1);
printf("Tem o numero de habitantes igual a: %i\n",p1);
printf("Área equivalente a: %f\n", a1);
printf("Com o PIB de: %f\n", pib1);
printf("E tem essa quantidade de pontos turísticos: %i\n",pt1);

printf("A cidade: %s\n",c2);
printf("Tem o numero de habitantes igual a: %i\n",p2);
printf("Área equivalente a: %f\n", a2);
printf("Com o PIB de: %f\n", pib2);
printf("E tem essa quantidade de pontos turísticos: %i\n",pt2);
        return 0;
}
