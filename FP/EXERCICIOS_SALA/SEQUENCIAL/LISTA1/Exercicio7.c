#include <stdlib.h>
#include <stdio.h>

int main()
{
  // Faça um algoritmo que receba uma temperatura em grau Celsius, e calcule e mostre essa temperatura em grau Fahrenheit. Sabe-se que F = (1.8 * C) + 32.
  float celsius, fahrenheit;

  printf("Celsius para Fahrenheit\n");

  printf("Informe a temperatura em Celsius: \n");
  scanf("%f", &celsius);

  fahrenheit = (1.8 * celsius) + 32;

  printf("%1.1fc = %1.1ff\n", celsius, fahrenheit);

  return 0;
}
