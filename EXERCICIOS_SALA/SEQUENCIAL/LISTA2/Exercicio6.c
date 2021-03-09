#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Faça um programa que leia o preço de uma mercadoria com diferença de um mês (ler o valor da mercadoria no mês passado e no mês atual) e calcule a taxa de inflação mensal dessa mercadoria.
  // A inflação é o percentual da diferença de preços (atual menos o anterior) sobre o preço anterior.
  float precoMesAnterio, precoAtual, inflacao;

  printf("Calculando a inflacao de uma mercadoria em um mes!\n");

  printf("Informe o valor da mercadoria no mes anterior R$:\n");
  scanf("%f", &precoMesAnterio);

  printf("Informe o atual valor da mercadoria R$:\n");
  scanf("%f", &precoAtual);

  inflacao = ((precoAtual - precoMesAnterio) / precoMesAnterio) * 100;

  printf("A taxa de inflacao da mercadoria é de %1.1f%%\n", inflacao);

  return 0;
}