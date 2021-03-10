#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.
  float avaliacao1, avaliacao2, avaliacao3, mediaPonderada;

  printf("Tirando a media de 3 avaliacoes!\n");

  printf("Digite o valor da primeria avaliacao:\n");
  scanf("%f", &avaliacao1);

  printf("Digite o valor da segunda avaliacao:\n");
  scanf("%f", &avaliacao2);

  printf("Digite o valor da terceira avaliacao:\n");
  scanf("%f", &avaliacao3);

  mediaPonderada = (avaliacao1 + (avaliacao2 * 2) + (avaliacao3 * 3)) / (1 + 2 + 3);

  printf("A media ponderada das avaliacoes é: %1.2f\n", mediaPonderada);

  return 0;
}
