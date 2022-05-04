// Crie um TAD para números reais, onde i é a parte inteira e f é a parte fracionária, que pode ter valores entre 0 e 99, ou seja, o número real possui apenas duas casas decimais.

// Para isso, considere a estrutura e os protótipos de funções abaixo.

// Observação: não é necessário considerar o arquivo .h, já que no HackerRank não tem como "upar" arquivos .h e .c.

// Input Format

// Na primeira linha, devem ser lidos dois números inteiros, sendo um a parte inteira e a outra, a fracionária, respectivamente.

// Na segunda linha, devem ser lidos dois números inteiros, sendo um a parte inteira e a outra, a fracionária, respectivamente.

// Constraints

// Output Format

// Na primeira linha, imprimir o primeiro número real.

// Na segunda linha, imprimir o segundo número real.

// Na terceira linha, imprimir o resultado da soma entre os dois números reais.

// Na quarta linha, imprimir o resultado da subtração entre os dois números reais.

// Na quinta linha, imprimir o arredondamento do primeiro e do segundo número real.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
  int i;
  int f;
} Real;

Real *criar(int i, int f);

Real *soma(Real *r1, Real *r2);

Real *subtracao(Real *r1, Real *r2);

int arredondar(Real *r1);

void imprimir(Real *r1);

int main(int argc, char const *argv[])
{
  int inteiro, fracao;
  scanf("%d", &inteiro);
  scanf("%d", &fracao);

  Real *n1 = criar(inteiro, fracao);

  scanf("%d", &inteiro);
  scanf("%d", &fracao);

  Real *n2 = criar(inteiro, fracao);

  imprimir(n1);
  imprimir(n2);
  imprimir(soma(n1, n2));
  imprimir(subtracao(n1, n2));
  printf("%d %d \n", arredondar(n1), arredondar(n2));

  return 0;
}

Real *criar(int i, int f)
{
  Real *numero = malloc(sizeof(*numero));
  numero->f = abs(f % 100);
  numero->i = i + (int)(f / 100.0);

  return numero;
}

Real *soma(Real *r1, Real *r2)
{
  int inteiro, fracao;
  fracao = r1->f + r2->f;
  inteiro = r1->i + r2->i;

  return criar(inteiro, fracao);
}

Real *subtracao(Real *r1, Real *r2)
{
  int inteiro, fracao;
  fracao = r1->f - r2->f;
  inteiro = r1->i - r2->i;

  return criar(inteiro, fracao);
}

int arredondar(Real *r1)
{
  return r1->i + (r1->f >= 50);
}

void imprimir(Real *r1)
{
  if (r1->f == 0)
  {
    printf("%d \n", r1->i);
  }
  else
  {
    printf("%d.%02d \n", r1->i, r1->f);
  }
}