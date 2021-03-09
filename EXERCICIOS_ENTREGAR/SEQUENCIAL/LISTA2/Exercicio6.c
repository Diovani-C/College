#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  //   Uma pessoa resolveu fazer uma aplicação em uma poupança programada.
  //  Para calcular seu rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa de juros (%) e o prazo da aplicação (em meses). Sabendo-se que a fórmula usada para este cálculo é: vm * (pow((1 + i), n) - 1) / i
  // Onde: i = taxa de juros, vm = valor mensal da aplicação e n = número de meses.
  // Obs.: Para calcular a potência pode ser utilizada a função pow() da biblioteca math.h.
  float valorAplicacao, taxaRendimento, valorFinal;
  int numeroDeMeses;

  printf("Calculo de rendimento de uma poupanca programamda!\n");

  printf("Informe o valor da aplicacao R$:\n");
  scanf("%f", &valorAplicacao);

  printf("Informe a taxa de rendimento (entre 0 e 1):\n");
  scanf("%f", &taxaRendimento);

  printf("Informe o numero de meses da aplicacao:\n");
  scanf("%d", &numeroDeMeses);

  valorFinal = (valorAplicacao * (pow((1 + taxaRendimento), numeroDeMeses) - 1)) / taxaRendimento;

  printf("O valor final é: R$%1.2f\n", valorFinal);

  return 0;
}