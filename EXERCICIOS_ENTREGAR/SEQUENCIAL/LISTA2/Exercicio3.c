#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Escreva um programa que calcule o valor da conversão para dólares de um valor lido em reais
  float valorDolar, quantiaReais;

  printf("Conversor de dolar para reais!\n");

  printf("Informe o valor do dolar R$:\n");
  scanf("%f", &valorDolar);

  printf("Informe a quantia em reais a ser convertida para dolar R$: \n");
  scanf("%f", &quantiaReais);

  printf("R$%1.2f convertem para $%1.2f.\n", quantiaReais, quantiaReais / valorDolar);

  return 0;
}