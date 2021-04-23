#include <stdio.h>

// Ler dois valores que representam os limites de um intervalo. Mostrar os números pares e divisíveis por 3 desse intervalo em ordem crescente. Por exemplo: informados 2 e 30 como limites, mostrar: 6, 12, 18, 24, 30.
// O usuário pode informar os valores em qualquer ordem.

int main()
{
  int inicio, fim, i;

  printf("Valores, intervalo, div2 e div3!\n");

  printf("Informe o primeiro valor do intervalo:");
  scanf("%d", &inicio);

  printf("Informe o segundo valor do intervalo:");
  scanf("%d", &fim);

  if (inicio > fim)
  {
    i = fim;
    fim = inicio;
    inicio = i;
  }

  for (i = inicio; i <= fim; i++)
  {
    if (i % 2 == 0)
    {
      if (i % 3 == 0)
      {
        printf("%d\n", i);
      }
    }
  }

  return 0;
}
