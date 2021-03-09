#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  //   Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
  // Esse programa deve calcular e mostrar:
  // a) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo.
  // b) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo e ainda obter um lucro
  // de 25%.
  float custoEspetaculo, precoConvite;
  int bilheteVendidosParaCobrirOCustoDoEspetaculo, bilhetesParaLucro25Porcento;

  printf("Calculo quantidade de blihetes vendidos para pagar espetaculo e dar lucro!\n");

  printf("Informe o custo do espetaculo R$:\n");
  scanf("%f", &custoEspetaculo);

  printf("Informe o preco do convite R$:\n");
  scanf("%f", &precoConvite);

  bilheteVendidosParaCobrirOCustoDoEspetaculo = ceil(custoEspetaculo / precoConvite);

  bilhetesParaLucro25Porcento = ceil((custoEspetaculo * 0.25) / precoConvite) + bilheteVendidosParaCobrirOCustoDoEspetaculo;

  printf("É nescessario vender %d bilhetes para cobrir o valor do espetaculo!\n", bilheteVendidosParaCobrirOCustoDoEspetaculo);

  printf("Para cobrir o valor do espetaculo e obter um lucro de 25%% é nescessario vender %d bilhetes.\n", bilhetesParaLucro25Porcento);

  return 0;
}