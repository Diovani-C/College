#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  //   Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente separadamente os reais (parte inteira) e os centavos (parte decimal).
  // Observação: Apresentar os centavos como inteiro de dois dígitos (exemplo: 40 em vez de 0.40)
  double salario;
  int reais, centavos;

  printf("Separando reais de centavos!\n");

  printf("Informe o salario R$:\n");
  scanf("%lf", &salario);

  reais = salario;

  centavos = ceil((salario - reais) * 100);

  printf("Reais: %d\n", reais);

  printf("Centavos: %d\n", centavos);

  return 0;
}