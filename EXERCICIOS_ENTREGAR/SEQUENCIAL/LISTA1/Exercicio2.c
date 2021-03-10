#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Ler a quantidade de kilowatts de energia elétrica consumidos por uma residência. Calcular e mostrar o valor em reais de cada kilowatts, o valor total a ser pago e valor a ser pago por essa residência quando há desconto de 10%. Considere que 100 kilowatts custam 1/7 do salário mínimo. Ler o valor do salário mínimo. Armazene em variáveis apenas o valor do salário mínimo, a quantidade de kilowatts gastos pela residência e o valor de um kilowatt.
  float salarioMinimo, kilowattsGastos, valorPorKilowatt;

  printf("Calculando o valor gasto em energia para reais baseado no salario minimo, com e sem 10%% de desconto!\n");

  printf("Informe o valor do salario minimo R$:\n");
  scanf("%f", &salarioMinimo);

  printf("Informe a quantidade de enegia gasta em kilowatts  kw:\n");
  scanf("%f", &kilowattsGastos);

  valorPorKilowatt = salarioMinimo / 700;

  printf("O valor do killowat é: R$%1.2f \n", valorPorKilowatt);

  printf("O valor total a ser pago é: R$%1.2f\n", valorPorKilowatt * kilowattsGastos);

  printf("O valor total a ser pago com 10%% de desconto é: R$%1.2f\n", (valorPorKilowatt * kilowattsGastos) - (valorPorKilowatt * kilowattsGastos * 0.1));

  return 0;
}