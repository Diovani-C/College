// crie um tad para processamento de vetores com a seguinte estrutura e operações, onde v é o vetor e n é a quantidade de elementos contidos no vetor:

// typedef struct{
//     int *v; // Array (vetor) de tamanho n
//     int n; // tamanho do v
// }Vetor;

// Vetor * iniciar(int n);

// int inserir(Vetor *v, int x, int i); // inserir x na posição i. A função retorna 1 se a operação foi bem-sucedida

// Vetor * concatenar(Vetor *v1, Vetor *v2);

// Vetor * soma(Vetor *v1, Vetor *v2);
// Observação: não é necessário considerar o arquivo .h, já que no HackerRank não tem como "upar" arquivos .h e .c.

// Input Format

// Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v. Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o segundo vetor.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
  int *v; // Array (vetor) de tamanho n
  int n;  // tamanho do v
} Vetor;

Vetor *iniciar(int n);

Vetor *lerEntradasVetor(int n);

int inserir(Vetor *v, int x, int i); // inserir x na posição i. A função retorna 1 se a operação foi bem-sucedida

Vetor *soma(Vetor *v1, Vetor *v2);

Vetor *concatenar(Vetor *v1, Vetor *v2);

void imprimirResultado(Vetor *v);

int main()
{
  int n;
  scanf("%d", &n);
  Vetor *v1 = lerEntradasVetor(n);

  scanf("%d", &n);
  Vetor *v2 = lerEntradasVetor(n);

  Vetor *resultado_concatenacao = concatenar(v1, v2);
  Vetor *resultado_soma = soma(v1, v2);

  imprimirResultado(resultado_concatenacao);
  imprimirResultado(resultado_soma);
  return 0;
}

Vetor *iniciar(int n)
{
  Vetor *v = malloc(sizeof(*v));
  v->v = malloc(sizeof(int) * n);
  v->n = n;
  return v;
}

Vetor *lerEntradasVetor(int n)
{
  Vetor *v = iniciar(n);
  for (int i = 0; i < v->n; i++)
  {
    int j;
    scanf("%d", &j);
    inserir(v, j, i);
  }
  return v;
}

int inserir(Vetor *v, int x, int i)
{
  if (i < 0)
  {
    return 0;
  }
  if (i < v->n)
  {
    v->v[i] = x;
  }
  else
  {
    v->v = realloc(v->v, sizeof(int) * (i + 1));
    v->n = i + 1;
    v->v[i] = x;
  }
  return 1;
} // inserir x na posição i. A função retorna 1 se a operação foi bem-sucedida

Vetor *copiar(Vetor *v)
{
  Vetor *copia = iniciar(v->n);
  for (int i = 0; i < v->n; i++)
  {
    inserir(copia, v->v[i], i);
  }
  return copia;
}

Vetor *concatenar(Vetor *v1, Vetor *v2)
{
  if (v1->n == 0)
  {
    return copiar(v2);
  }
  if (v2->n == 0)
  {
    return copiar(v1);
  }

  Vetor *concatenado = iniciar(v1->n + v2->n);
  for (int i = 0; i < v1->n; i++)
  {
    inserir(concatenado, v1->v[i], i);
  }
  for (int i = 0; i < v2->n; i++)
  {
    inserir(concatenado, v2->v[i], (v1->n + i));
  }
  return concatenado;
}

Vetor *soma(Vetor *v1, Vetor *v2)
{
  Vetor *resultado = iniciar(v1->n >= v2->n ? v1->n : v2->n);
  for (int i = 0; i < resultado->n; i++)
  {
    int soma = 0;
    soma += v1->n > i ? v1->v[i] : 0;
    soma += v2->n > i ? v2->v[i] : 0;
    inserir(resultado, soma, i);
  }

  return resultado;
}

void imprimirResultado(Vetor *v)
{
  for (int i = 0; i < v->n; i++)
  {
    printf("%d ", v->v[i]);
  }
  printf("\n");
}