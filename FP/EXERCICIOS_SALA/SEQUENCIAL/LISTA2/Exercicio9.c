#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Escreva um programa que o leia o número de horas trabalhadas por um funcionário, o valor por hora, o número de filhos com idade menor do que 14 anos, o valor do salário família por filho e calcule e mostre o salário desse funcionário.
  int horasTrabalhadas, filhosMenoresQue14;
  float valorHora, salarioFamilia, salarioFinal;

  printf("Calcula o salario de um funcionario com filhos e salario e filhos!\n");

  printf("Informe o numero de horas trabalhadas:\n");
  scanf("%d", &horasTrabalhadas);

  printf("Informe o valor da hora R$:\n");
  scanf("%f", &valorHora);

  printf("Iforme a quantidade de filhos menores de 14 anos:\n");
  scanf("%d", &filhosMenoresQue14);

  printf("Informe o valor do salario familia por filho: R$\n");
  scanf("%f", &salarioFamilia);

  salarioFinal = (horasTrabalhadas * valorHora) + (salarioFamilia * filhosMenoresQue14);

  printf("Salario: R$%1.2f\n", salarioFinal);

  return 0;
}