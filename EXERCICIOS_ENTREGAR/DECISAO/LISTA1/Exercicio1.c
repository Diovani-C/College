#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Ler um número inteiro e calcular e apresentar o seu módulo ou valor absoluto (número sem sinal), isto é, se o número é negativo apresentá-lo como positivo
  int numero, moduloNumero;

  printf("Apresentando o modulo de um numero!\n");

  printf("Informe um numero:\n");
  scanf("%d", &numero);

  moduloNumero = numero;

  if (numero < 0)
  {
    moduloNumero = -numero;
  }

  printf("O modulo de %d é %d.\n", numero, moduloNumero);

  return 0;
}
