#include <stdlib.h>
#include <stdio.h>

int main()
{
  // O que faz o algoritmo a seguir representado em fluxograma? Implemente-o utilizando a linguagem C
  // *Grafico mostrando um programa que aumenta o salario em porcentagem baseado em um valor dado pelo usuario
  float salarioAtual, percentualReajuste, salarioReajustado;

  printf("Reajustando o seu salario!\n");

  printf("Informe o valor do salario R$:\n");
  scanf("%f", &salarioAtual);

  printf("Informe o percentual de reajuste %%: \n");
  scanf("%f", &percentualReajuste);

  salarioReajustado = salarioAtual + (salarioAtual * percentualReajuste / 100); 

  printf("Salario reajustado: R$%1.2f\n", salarioReajustado);

  return 0;
}
