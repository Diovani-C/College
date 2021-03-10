#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de renda e de INSS
  float salarioBruto, inss, ir, salarioLiquido;

  printf("Calculando o salario liquido!\n");

  printf("Informe o valor do salario bruto R$:\n");
  scanf("%f", &salarioBruto);

  printf("Informe o percentual INSS %%:\n");
  scanf("%f", &inss);

  printf("Informe o percentual IR %%:\n");
  scanf("%f", &ir);

  inss /= 100;

  ir /= 100;

  salarioLiquido = salarioBruto - (salarioBruto * inss) -  (salarioBruto * ir);

  printf("O salario liquido sera de: R$%1.2f\n", salarioLiquido);

  return 0;
}
