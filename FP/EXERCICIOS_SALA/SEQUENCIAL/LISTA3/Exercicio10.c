#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador de resto
  int divisaoInteira, resto, restoComparacao, numero1, numero2;

  printf("O restante é oque nos resta!\n");

  printf("Informe o primero numero:\n");
  scanf("%d", &numero1);

  printf("Informe o segundo numero:\n");
  scanf("%d", &numero2);

  restoComparacao = numero1 % numero2;

  divisaoInteira = numero1 / numero2;

  resto = (((float)numero1 / numero2) - divisaoInteira) * numero2;

  printf("%d = %d\n", restoComparacao, resto);

  return 0;
}
