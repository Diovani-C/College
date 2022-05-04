// Implemente uma função que receba uma string que represente uma expressão matemática na notação posfixa. A função deverá retornar o resultado da expressão.

// Para a implementação da solução, considere que cada operando tenha valor entre 0 e 9.

// Input Format

// Deve ser lida uma string que represente uma expressão posfixa.

// Constraints

// Para a solução do problema, deve ser utilizada uma pilha estática para armazenar os números inteiros.

// As pilhas devem ser manipuladas apenas por funções. Por exemplo, o acesso a elementos deve ser feito apenas através da função desempilhar ou que retorne o valor que está no topo.

// Output Format

// Resultado da expressão.

// Sample Input 0

// 762+4/-3+
// Sample Output 0

// 8

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

int liberar_pilha(Pilha *p);

int posfixa(char *equacao);

int main()
{
  char input[MAX_SIZE];
  scanf("%s", input);

  printf("%d", posfixa(input));

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

int liberar_pilha(Pilha *p)
{
  if (p != NULL)
  {
    free(p);
    return 1;
  }
  return 0;
}

int posfixa(char *equacao)
{
  int i = 0;
  Pilha *numeros = criar_pilha();

  while (equacao[i] != '\0')
  {
    if (equacao[i] >= '0' && equacao[i] <= '9')
      empilhar(numeros, (equacao[i] - 48));
    else if (equacao[i] >= '*' && equacao[i] <= '/')
    {
      int a = desempilhar(numeros);
      int b = desempilhar(numeros);

      if (equacao[i] == '+')
        empilhar(numeros, b + a);

      if (equacao[i] == '-')
        empilhar(numeros, b - a);

      if (equacao[i] == '/')
        empilhar(numeros, b / a);

      if (equacao[i] == '*')
        empilhar(numeros, b * a);
    }
    i++;
  }

  int resultado = desempilhar(numeros);
  liberar_pilha(numeros);
  return resultado;
}