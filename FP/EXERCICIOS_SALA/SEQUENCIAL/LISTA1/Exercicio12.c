#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Calcule e mostre a média de idade de três pessoas
  int idade1, idade2, idade3;
  float media;

  printf("Calculando a media de idade de 3 pessoas!\n");

  printf("Informe a idade da primeira pessoa:\n");
  scanf("%d", &idade1);

  printf("Informe a idade da segunda pessoa:\n");
  scanf("%d", &idade2);

  printf("Informe a idade da terceira pessoa:\n");
  scanf("%d", &idade3);

  media = (idade1 + idade2 + idade3) / 3.0;

  printf("A media de idade entre as tres pessoas é de: %1.1f\n", media);

  return 0;
}
