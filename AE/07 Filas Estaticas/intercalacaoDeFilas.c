// Implemente uma função que receba duas filas compostas por números naturais. A função deverá intercalar as duas filas. Em cada intercalação, o maior elemento deve ser enfileirado primeiro.

// Exemplo:

// Antes

// f1 = {1, 5, 3}

// f2 = {4, 2, 3, 4}

// f3 = {}

// Depois

// f1 = {}

// f2 = {}

// f3 = {4, 1, 5, 2, 3, 3, 4}

// Input Format

// Na primeira linha, enquanto "-1" não for lido, ler números inteiros. Na segunda linha, a mesma restrição da primeira linha deve ser aplicada.

// Constraints

// O acesso aos elementos da fila deve ser através da função desenfileirar.

// Output Format

// Imprimir a fila intercalada.

// Sample Input 0

// 1 5 3 -1
// 4 2 3 4 -1
// Sample Output 0

// 4 1 5 2 3 3 4
// Sample Input 1

// 1 2 3 4 5 -1
// 5 4 3 2 1 -1
// Sample Output 1

// 5 1 4 2 3 3 4 2 5 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define TAM_MAX 100

typedef struct
{
  int itens[TAM_MAX];
  int inicio;
  int fim;
  int tamanho;
} Fila;

Fila *criar_fila();
int fila_cheia(Fila *f);
int fila_vazia(Fila *f);
int enfileirar(Fila *f, int item);
int desinfileirar(Fila *f);
void liberar_fila(Fila *f);
void imprimir_filar(Fila *f);
Fila *intercalar_filas(Fila *f1, Fila *f2);

int main()
{
  int numero = 0;
  Fila *f1 = criar_fila();
  Fila *f2 = criar_fila();

  while (1)
  {
    scanf("%d", &numero);
    if (numero == -1)
      break;

    enfileirar(f1, numero);
  }

  while (1)
  {
    scanf("%d", &numero);
    if (numero == -1)
      break;

    enfileirar(f2, numero);
  }

  Fila *fila_intercalada = intercalar_filas(f1, f2);

  liberar_fila(f1);
  liberar_fila(f2);

  imprimir_filar(fila_intercalada);

  return 0;
}

Fila *criar_fila()
{
  Fila *f = malloc(sizeof(Fila));

  f->inicio = -1;
  f->fim = -1;
  f->tamanho = 0;

  return f;
}

int fila_cheia(Fila *f)
{
  if (f == NULL)
    return -1;

  if (f->tamanho == TAM_MAX)
    return 1;

  return 0;
}

int fila_vazia(Fila *f)
{
  if (f == NULL)
    return -1;

  if (f->tamanho == 0)
    return 1;

  return 0;
}

int enfileirar(Fila *f, int item)
{
  if (f == NULL)
    f = criar_fila();

  if (fila_cheia(f))
    return 0;

  if (fila_vazia(f))
    f->inicio = 0;

  f->fim = (f->fim + 1) % TAM_MAX;

  f->itens[f->fim] = item;

  f->tamanho++;

  return 1;
}

int desinfileirar(Fila *f)
{
  int item = INT_MIN;
  if (fila_vazia(f))
    return item;

  item = f->itens[f->inicio];

  f->inicio = (f->inicio + 1) % TAM_MAX;

  f->tamanho--;

  if (fila_vazia(f))
  {
    f->inicio = -1;
    f->fim = -1;
  }

  return item;
}

void liberar_fila(Fila *f)
{
  if (f != NULL)
    free(f);
}

void imprimir_filar(Fila *f)
{
  Fila copia = *f;

  while (!fila_vazia(&copia))
  {
    printf("%d ", desinfileirar(&copia));
  }
  printf("\n");
}

Fila *intercalar_filas(Fila *f1, Fila *f2)
{
  Fila *resultado = criar_fila();

  // Loop continuo ate as duas filas ficarem vazias
  while (!fila_vazia(f1) || !fila_vazia(f2))
  {
    // Se uma das filas for vazia enfileira a outra e continua o loop
    if (fila_vazia(f1))
    {
      enfileirar(resultado, desinfileirar(f2));
      continue;
    }

    if (fila_vazia(f2))
    {
      enfileirar(resultado, desinfileirar(f1));
      continue;
    }

    // Acha o maior e enfileira em ordem
    int a = desinfileirar(f1);
    int b = desinfileirar(f2);

    int maior = a > b ? a : b;
    int menor = a < b ? a : b;

    enfileirar(resultado, maior);
    enfileirar(resultado, menor);
  }

  return resultado;
}