#include <stdlib.h>
#include <stdio.h>

void ex01()
{
  //   1) Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
  // e calcule o seu volume (cm3), cuja fórmula é:
  // Volume = Comprimento * Largura * Altura
  int comp, larg, alt, vol;

  printf("Exercicio 01:\n");
  printf("Calculando o volume de uma caixa!\n");

  printf("Comprimento da caixa:\n");
  scanf("%d", &comp);

  printf("Largura da caixa:\n");
  scanf("%d", &larg);

  printf("Altura da caixa:\n");
  scanf("%d", &alt);

  vol = comp * larg * alt;

  printf("O volume da caixa é %d \n", vol);
}

void ex02() {
  
}

int main(void)
{
  char continuar = "s";
  int exercicio;

  while (continuar == "s")
  {
    printf("Escolha o exercicio que voce deseja rodar:\n");
    printf("1, 2, 3 \n");
    scanf("%d", &exercicio);
    switch (exercicio)
    {
    case 1:
      ex01();
      break;

    default:
      printf("Exercicio inexistente!");
      break;
    }

    printf("Deseja continuar? s/n \n");
    scanf("%c", &continuar);
  }

  return 0;
}
