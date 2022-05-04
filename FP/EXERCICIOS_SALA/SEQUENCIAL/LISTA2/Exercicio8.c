#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Faça um programa que leia o salário bruto mensal de um funcionário, calcule e mostre os valores conforme o exemplo a seguir. Observação: É possível fazer esse programa utilizando somente três variáveis: uma para ler o salário bruto, outra para os descontos e outra para o salário líquido.
  float salarioBruto, salarioLiquido;

  printf("Descontando impostos do salario bruto!\n");

  printf("Informe o valor do salario R$:\n");
  scanf("%f", &salarioBruto);

  printf("Salario bruto: R$%1.2f\n", salarioBruto);

  printf("IR (15%%): R$%1.2f\n", salarioBruto * 0.15);

  printf("INSS (11%%): R$%1.2f\n", salarioBruto * 0.11);

  printf("Sindicato (3%%): R$%1.2f\n", salarioBruto * 0.03);

  salarioLiquido = salarioBruto - ((salarioBruto * 0.03) + (salarioBruto * 0.11) + (salarioBruto * 0.15));

  printf("Salario liquido: R$%1.2f\n", salarioLiquido);

  return 0;
}