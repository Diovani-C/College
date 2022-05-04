#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da prestação. Calcule o valor a ser pago por meio da fórmula:
  // Valor com juros = Prestação + (Prestação * Taxa /100)
  float prestacao, juros, prestacaoComJuros;

  printf("Calculando taxa de juros!\n");

  printf("Informe o valor da prestacao R$:\n");
  scanf("%f", &prestacao);

  printf("Informe a taxa de juros %%:\n");
  scanf("%f", &juros);

  prestacaoComJuros = prestacao + (prestacao * (juros / 100));

  printf("A prestacao com juros ficara de R$%1.2f\n", prestacaoComJuros);

  return 0;
}
