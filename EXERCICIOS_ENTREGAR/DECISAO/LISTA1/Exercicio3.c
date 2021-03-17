#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
  // Faça um programa que leia o gênero, e caso o mesmo seja 'f', 'F', 'm' ou 'M' leia também a idade e o tempo de trabalho de uma pessoa e determine se ela pode ou não se aposentar. Assuma que homens se aposentam com 45 anos de trabalho ou idade superior a 70 anos e mulheres se aposentam com 40 anos de trabalho ou idade superior a 65 anos.
  // Declaracao de variaveis
  char genero;
  int idade, tempoTrabalho, aposentado;

  // Piada inicial
  printf("Bem vindo ao, sera que voce vai se aposentar antes de morrer?\n");

  // Entrada de dados
  printf("Digite seu genero [m/f]:\n");
  scanf("%c", &genero);

  printf("Digite sua idade:\n");
  scanf("%d", &idade);

  printf("Digite quanto tempo de trabalho voce tem [anos]:\n");
  scanf("%d", &tempoTrabalho);

  // Processamento de dados
  aposentado = 0;

  genero = tolower(genero);

  if (genero == 'm')
  {
    aposentado += tempoTrabalho >= 45;
    aposentado += idade > 70;
  }
  else if (genero == 'f')
  {
    aposentado += tempoTrabalho >= 40;
    aposentado += idade > 65;
  }

  // Apresentacao dos dado processados

  if (aposentado > 0)
  {
    printf("Parabens voce esta aposentado/a :D !!!!!!!!!!\n");
  }
  else
  {
    printf("Infelismente voce vai ter que trabalhar mais um poquinho! -_-\n");
  }

  return 0;
}
