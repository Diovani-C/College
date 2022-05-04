#include <stdlib.h>
#include <stdio.h>

// 2) Elaborar um programa para mostrar, em ordem decrescente, os números divisíveis por 3 entre 200 e 100.

int main()
{
  int i;

  printf("Numeros divisiveis por 3 entre 200 e 100 em ordem decrescente!\n");

  for (i = 200; i >= 100; i--)
  {
    if (i % 3 == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
