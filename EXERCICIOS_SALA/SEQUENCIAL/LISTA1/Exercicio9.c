#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
  // Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.
  int a, b, c;

  printf("Troca troca de variaveis!\n");

  printf("Informe o valor de A(int):\n");
  scanf("%d", &a);

  printf("Informe o valor de B(int):\n");
  scanf("%d", &b);

  printf("A:%d , B:%d \n", a, b);

  c = a;
  a = b;
  b = c;

  printf("A:%d , B:%d \n", a, b);

  return 0;
}
