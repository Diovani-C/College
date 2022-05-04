#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Escreva um algoritmo que leia o raio de um círculo e calcule a sua circunferência (C = 2. π. r)
  float raio, circunferencia;

  printf("Calculando a circuferencia de um circulo!\n");

  printf("Informe o raio:\n");
  scanf("%f", &raio);

  circunferencia = 2 * 3.1415 * raio;

  printf("A circuferencia de um circulo com raio %1.1f é de %1.1f\n", raio, circunferencia);

  return 0;
}
