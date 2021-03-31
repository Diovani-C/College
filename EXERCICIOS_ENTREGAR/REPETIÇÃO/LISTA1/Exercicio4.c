#include <stdlib.h>
#include <stdio.h>

// 4) Elaborar um programa que permita ao usuário fornecer 30 números quaisquer e apresente:
// a) A soma dos 10 primeiros números.
// b) A soma do 11º número até o 20º número.
// c) A soma do 21º número até o 30º número.
// d) A soma de todos os números.

int main()
{
  int i, soma10 = 0, soma11ate20 = 0, soma21ate30 = 0, somaGeral = 0, numero = 0;

  printf("Me forneca 30 numeros quaisquer!\n");

  for (i = 1; i <= 30; i++)
  {
    printf("Informe o %d numero: ", i);
    scanf("%d", &numero);

    somaGeral += numero;

    if (i <= 10)
    {
      soma10 += numero;
    }
    else if (i > 10 && i <= 20)
    {
      soma11ate20 += numero;
    }
  }

  soma21ate30 = somaGeral - (soma10 + soma11ate20);

  printf("a) A soma dos 10 primeiros números: %d\n", soma10);
  printf("b) A soma do 11 número até o 20 número: %d\n", soma11ate20);
  printf("c) A soma do 21 número até o 30º número: %d\n", soma21ate30);
  printf("d) A soma de todos os números: %d\n", somaGeral);

  return 0;
}
