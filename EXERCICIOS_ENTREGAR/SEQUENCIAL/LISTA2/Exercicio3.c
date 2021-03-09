#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  //    Cada degrau de uma escada tem uma altura X. Faça um programa para ler essa altura e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir o seu objetivo
  float alturaDegrau, alturaFinal;
  int numeroDeDegraus;

  printf("A escada da vida lhe chama!\n");

  printf("Informe a altura do degrau cm:\n");
  scanf("%f", &alturaDegrau);

  printf("Informe a altura que voce almeja alcancar cm:\n");
  scanf("%f", &alturaFinal);

  numeroDeDegraus = ceil(alturaFinal / alturaDegrau);

  printf("Para alcancar altura de %1.1fcm voce precisara subir %d degraus.\n", alturaFinal, numeroDeDegraus);

}