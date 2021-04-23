#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Uma revendedora de carros usados paga aos seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por eles efetuadas.
  // Escrever um programa que receba os seguintes dados de um vendedor:
  // - Número de carros vendidos;
  // - Valor total das vendas realizadas;
  // - Valor do salário fixo;
  // - Valor da comissão recebida por carro vendido.
  // Calcular e mostrar o salário mensal desse vendedor.

  float comissaoPorCarro, salarioFixo, valorTotalVendas, salarioFinalMensal;
  int carrosVendidos;

  printf("Calculando salario de um vendedor de uma revendedora de carros usados!\n");

  printf("Infome o numero de carros vendidos:\n");
  scanf("%d", &carrosVendidos);

  printf("Informe o valor total das vendas realizadas R$:\n");
  scanf("%f", &valorTotalVendas);

  printf("Informe o valor do salario mensal fixo R$:\n");
  scanf("%f", &salarioFixo);

  printf("Valor da comissão recebida por carro vendido R$:\n");
  scanf("%f", &comissaoPorCarro);

  salarioFinalMensal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (valorTotalVendas * 0.05);

  printf("O salario liquido é: R$%1.2f \n", salarioFinalMensal);

  return 0;
}