#include <stdlib.h>
#include <stdio.h>

int main(void)
{
   //   1) Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular e calcule o seu volume (cm3), cuja fórmula é:
  // Volume = Comprimento * Largura * Altura
  int comp, larg, alt, vol;

  printf("Calculando o volume de uma caixa!\n");

  printf("Comprimento da caixa:\n");
  scanf("%d", &comp);

  printf("Largura da caixa:\n");
  scanf("%d", &larg);

  printf("Altura da caixa:\n");
  scanf("%d", &alt);

  vol = comp * larg * alt;

  printf("O volume da caixa é %d \n", vol);

  return 0;
}
