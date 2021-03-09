#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de descontos.
  // Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no exemplo a seguir.
  float salario, aumento, desconto, salarioComAumento, salarioFinal;

  printf("Calculando salario com almentos e descontos!\n");

  printf("Informe o valor do salario R$:\n");
  scanf("%f", &salario);

  printf("Informe a porcentagem de aumento %%:\n");
  scanf("%f", &aumento);

  printf("Informe a porcentagem de descontos %%:\n");
  scanf("%f", &desconto);

  salarioComAumento = salario + (salario * (aumento / 100));

  salarioFinal = salarioComAumento - (salarioComAumento * (desconto / 100));

  printf("Salario com aumento: R$%1.2f\n", salarioComAumento);

  printf("Salario liquido: R$%1.2f\n", salarioFinal);

  return 0;
}