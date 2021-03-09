#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor
  // e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a
  // partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.
  float custoFabrica, percentagemImpostos, percentagemDistribuidor, custoFinal;

  printf("Calcula o valor final de um carro baseado no valor da fabricacao, porcentagem de impostos e porcentagem do distribuidor\n");

  printf("Informe o custo de fabricacao R$: \n");
  scanf("%f", &custoFabrica);

  printf("Informe a percentagem de impostos %%:\n");
  scanf("%f", &percentagemImpostos);

  printf("Informe a percentagem do distribuidor %%:\n");
  scanf("%f", &percentagemDistribuidor);

  percentagemImpostos /= 100;
  percentagemDistribuidor /= 100;

  custoFinal = custoFabrica + (custoFabrica * percentagemImpostos) + (custoFabrica * percentagemDistribuidor);

  printf("O custo final do veiculo fica de: R$%1.2f\n", custoFinal);

  return 0;
}