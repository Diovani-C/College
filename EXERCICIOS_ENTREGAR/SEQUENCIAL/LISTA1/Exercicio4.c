#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  //    Escreva um programa que leia dois valores que são o raio e a altura de um cilindro e calcule o seu volume,
  // cuja fórmula é: Volume = 3.1415 * Raio² * Altura.
  float raio, altura, volume;

  printf("Calculando o volume de um cilindro!\n");

  printf("Informe o valor do raio cm:\n");
  scanf("%f", &raio);

  printf("Informe o valor da altura cm:\n");
  scanf("%f", &altura);

  volume = 3.1415 * pow(raio, 2) * altura;

  printf("O volume do cilidro é: %1.2fcm3\n", volume);

  return 0;
}