#include <stdlib.h>
#include <stdio.h>

// 1) Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dos valores desse intervalo que são divisíveis por 5.

int main()
{
  int i, media, divPor5;

  media = 0;
  divPor5 = 0;

  printf("Numeros pares entre 20 e 100\n");

  for (i = 20; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d \n", i);

      if (i % 5 == 0)
      {
        divPor5 += 1;
        media += i;
      }
    }
  }

  media /= divPor5;

  printf("A media dos numeros pares entre 20 e 100 e: %d \n", media);

  return 0;
}
