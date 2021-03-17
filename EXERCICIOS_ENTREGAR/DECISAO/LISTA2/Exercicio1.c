#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   A contribuição para o INSS é calculada da seguinte forma:
  // a) Salário bruto até três salários mínimos = INSS 8%.
  // b) Salário bruto acima de três salários mínimos = INSS 10%.
  // c) Para as contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
  // Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do salário bruto, calcule o INSS e o salário líquido restante e informe-os
  float salarioMinimo, salarioBruto, salarioLiquido, inss;

  printf("Chegou a hora de pagar o seu INSS!\n");

  printf("Infome o valor do salario minimo R$:\n");
  scanf("%f", &salarioMinimo);

  printf("Informe o valor do salario bruto R$:\n");
  scanf("%f", &salarioBruto);

  if (salarioBruto <= (salarioMinimo * 3))
  {
    inss = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - inss;
  }
  else
  {
    inss = salarioBruto * 0.1;
    salarioLiquido = salarioBruto - inss;
  }

  printf("O valor do INSS fica de R$%1.2f, e o salario liquido fica de R$%1.2f \n", inss, salarioLiquido);

  return 0;
}
