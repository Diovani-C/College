#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Ler um número que representa a quantidade de dias. Informe os anos (considere-os com 360 dias), meses (considere-os com 30 dias) e os dias contidos nesse valor
  int dias, meses, anos, diasRestantes;

  printf("Dias para anos, meses e dias novamente!\n");

  printf("Informe a quantidade de dias:\n");
  scanf("%d", &dias);

  diasRestantes = dias % 30;

  meses = dias / 30;

  anos = meses / 12;

  meses %= 12;

  printf("%d dias equivalem a: %d anos, %d meses e %d dias\n", dias, anos, meses, diasRestantes);

  return 0;
}
