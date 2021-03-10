#include <stdlib.h>
#include <stdio.h>

int main()
{
//    Criar um programa que leia o peso (em kg) de uma pessoa e calcule e imprima:
// a) O peso da pessoa em gramas.
// b) O novo peso, em gramas, se a pessoa engordar 12%.
  float pesoKg, pesoG, peso12G, peso12Kg;

  printf("Peso de kg para gramas, e mais uns quilinhos...\n");

  printf("Informe o seu peso em kg:\n");
  scanf("%f", &pesoKg);

  pesoG = pesoKg * 1000;

  peso12G = pesoG + (pesoG * 0.12);

  peso12Kg = peso12G / 1000;

  printf("O seu peso em grama é: %1.1fg\n", pesoG);

  printf("Se voce der uma engordadinha de 12%% o seu novo peso sera de %1.1f\ng", peso12G);

  printf("Engordadinha de 12%% em quilogramas: %1.1fkg\n", peso12Kg);

  return 0;
}
