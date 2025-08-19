#include <stdio.h>
int main () {

/* 
soma = +
subtração = -
multiplicação = *
divisão = /

*/
int numero1, numero2;
int soma, multiplicacao, divisao, subtracao;

// operação soma 
printf("Digite o primeiro número: \n");
scanf("%d",&numero1);
printf("Digite o segundo numero: \n");
scanf("%d",numero2);
soma = numero1 + numero2;


// operação subtração
subtracao = numero1 - numero2;

// operação multiplicação
multiplicacao = numero1 * numero2;

// operação divsão
divisao = numero1 / numero2;

printf("A soma dos dois numeros é igual a: \n", soma);
printf("A subtração dos dois numeros é igual a: \n", subtracao);
printf("A multiplicação dos dois numeros é igual a: \n", multiplicacao);
printf("A divisão dos dois numeros é igual a: \n", divisao);

}