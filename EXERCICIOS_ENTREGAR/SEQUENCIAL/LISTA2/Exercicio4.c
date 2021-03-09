#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  // Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea.
  // Esse índice mede a relação entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em metros). Use a função pow() da biblioteca math.h para calcular a potência.
  float peso, altura, imc;

  printf("Calculando o IMC!\n");

  printf("Informe o peso kg:\n");
  scanf("%f", &peso);

  printf("Informe a altura m:\n");
  scanf("%f", &altura);

  imc = peso / pow(altura, 2);

  printf("O IMC é %1.1f.\n", imc);

  return 0;
}