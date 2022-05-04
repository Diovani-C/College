#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Ler dois valores numéricos e apresentar a diferença entre eles. A diferença sempre é positiva, portanto, o menor é subtraído do maior não importando a ordem em que os números são informados.
  int numero1, numero2, diferenca;

  printf("Diferenca entre numeros!\n");

  printf("Digite o primeiro valor:\n");
  scanf("%d", &numero1);

  printf("Digite o segundo valor:\n");
  scanf("%d", &numero2);

  diferenca = numero1 - numero2;

  if (diferenca < 0)
  {
    diferenca = -diferenca;
  }

  printf("A diferenca entre %d e %d é de: %d\n", numero1, numero2, diferenca);

  return 0;
}
