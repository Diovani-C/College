#include <stdio.h>

// Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente. Obter a média dos pares e divisíveis por 3 desse intervalo

int main()
{
  int i, divPar3 = 0;
  float mediaPar3 = 0;

  printf("Numeros impares e divisíveis por 7 entre 500 e 0 em ordem decrescente\n");

  for (i = 500; i > 0; i--)
  {
    if (i % 2 == 0)
    {
      if (i % 3 == 0)
      {
        mediaPar3 += i;
        divPar3 += 1;
      }
    }
    else
    {
      if (i % 7 == 0)
      {
        printf("%d\n", i);
      }
    }
  }

  mediaPar3 /= (float)divPar3;

  printf("A media dos pares e divisíveis por 3 desse intervalo: %1.2f\n", mediaPar3);

  return 0;
}
