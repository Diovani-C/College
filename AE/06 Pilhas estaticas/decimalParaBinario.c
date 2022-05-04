// Utilizando uma pilha estática, escreva uma função que receba um número inteiro positivo no formato decimal e o converta para o formato binário. A função deverá retornar a pilha com os dígitos do número binário.

// Input Format

// Na primeira linha, um número inteiro deve ser lido.

// Constraints

// As pilhas devem ser manipuladas apenas por funções. Por exemplo, o acesso a elementos deve ser feito apenas através da função desempilhar ou que retorne o valor que está no topo.

// Output Format

// Imprimir o número binário.

// Sample Input 0

// 150
// Sample Output 0

// 10010110
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 64

typedef struct
{
  int itens[MAX_SIZE];
  int topo;
} Pilha;

Pilha *criar_pilha();

int pilha_vazia(Pilha *p);

int pilha_cheia(Pilha *p);

int empilhar(Pilha *p, int item);

int desempilhar(Pilha *p);

void imprimir_pilha(Pilha *p);

int liberar_pilha(Pilha *p);

Pilha *pilha_decimal_binario(int decimal);

int main()
{
  int decimal;
  scanf("%d", &decimal);

  Pilha *binario = pilha_decimal_binario(decimal);
  imprimir_pilha(binario);
  return 0;
}

Pilha *criar_pilha()
{
  Pilha *p = malloc(sizeof(Pilha));
  p->topo = -1;
  return p;
}

int pilha_vazia(Pilha *p)
{
  if (p == NULL)
    return -1;
  else if (p->topo == -1)
    return 1;

  return 0;
}

int pilha_cheia(Pilha *p)
{
  if (p == NULL)
    return -1;
  else if (p->topo == (MAX_SIZE - 1))
    return 1;

  return 0;
}

int empilhar(Pilha *p, int item)
{
  if (p == NULL)
    p = criar_pilha();

  if (!pilha_cheia(p))
  {
    p->topo++;

    p->itens[p->topo] = item;
    return 1;
  }

  return 0;
}

int desempilhar(Pilha *p)
{
  int item = INT_MIN;

  if (!pilha_vazia(p))
  {
    item = p->itens[p->topo];

    p->topo--;
  }

  return item;
}

void imprimir_pilha(Pilha *p)
{
  Pilha copia = *p;

  while (!pilha_vazia(&copia))
  {
    printf("%d", desempilhar(&copia));
  }
  printf("\n");
}

int liberar_pilha(Pilha *p)
{
  if (p != NULL)
  {
    free(p);
    return 1;
  }
  return 0;
}

// retorna uma pilha com os digitos do numero binario convertido a partir do input
Pilha *pilha_decimal_binario(int decimal)
{
  Pilha *binarios = criar_pilha();
  int aux = decimal, binario;

  while (aux != 0)
  {
    binario = aux % 2;
    aux /= 2;
    empilhar(binarios, binario);
  }

  return binarios;
}