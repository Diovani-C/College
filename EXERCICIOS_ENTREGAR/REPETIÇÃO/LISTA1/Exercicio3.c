#include <stdlib.h>
#include <stdio.h>

// 3) Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.5.

int main()
{
  float i;

  printf("Numeros entre 10 e 0 decrescente com intervalo de 0.5!\n");

  for (i = 10; i >= 0; i -= 0.5)
  {
    printf("%1.1f\n", i);
  }

  return 0;
}
