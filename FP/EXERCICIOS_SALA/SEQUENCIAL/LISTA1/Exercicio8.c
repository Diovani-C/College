#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Faça um algoritmo que calcule e mostre a tabuada de 0 a 10 de um número inteiro digitado pelo usuário.
  int numero;

  printf("Calculando a taubada!\n");

  printf("Informe um numero:\n");
  scanf("%d", &numero);

  printf("%d * 0 = %d\n", numero, numero * 0);
  printf("%d * 1 = %d\n", numero, numero * 1);
  printf("%d * 2 = %d\n", numero, numero * 2);
  printf("%d * 3 = %d\n", numero, numero * 3);
  printf("%d * 4 = %d\n", numero, numero * 4);
  printf("%d * 5 = %d\n", numero, numero * 5);
  printf("%d * 6 = %d\n", numero, numero * 6);
  printf("%d * 7 = %d\n", numero, numero * 7);
  printf("%d * 8 = %d\n", numero, numero * 8);
  printf("%d * 9 = %d\n", numero, numero * 9);
  printf("%d * 10 = %d\n", numero, numero * 10);

  return 0;
}
