// Implemente uma função que receba três listas estáticas (l1, l2, l3), sendo as duas últimas listas vazias. A função deverá colocar os itens pares da lista l1 na l2, e os ímpares, na l3.

// Input Format

// Enquanto -1 não for lido, ler números inteiros e colocá-los na lista l1.

// Constraints

// .

// Output Format

// Na primeira linha deve ser impresso o conteúdo da lista l2.

// Na linha linha deve ser impresso o conteúdo da lista l3.

// Caso uma das listas esteja vazia, imprimir -1 (menos um).

// Sample Input 0

// 1 2 3 4 5 6 7 -1
// Sample Output 0

// par: 2 4 6
// impar: 1 3 5 7

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LIST_MAX_SIZE 128

typedef struct
{
  int item[LIST_MAX_SIZE];
  int tam;
} Lista;

Lista *criar_lista();

int lista_vazia(Lista *l);

int lista_cheia(Lista *l);

int inserir(Lista *l, int item);

void imprimir_lista(Lista *l);

int liberar_lista(Lista *l);

void lista_par_impar(Lista *l, Lista *par, Lista *impar);

int main()
{
  int numero;
  Lista *numeros = criar_lista();
  Lista *pares = criar_lista();
  Lista *impares = criar_lista();

  while (1)
  {
    scanf("%d", &numero);
    if (numero == -1)
      break;

    inserir(numeros, numero);
  }

  lista_par_impar(numeros, pares, impares);

  printf("par: ");
  imprimir_lista(pares);

  printf("impar: ");
  imprimir_lista(impares);

  liberar_lista(numeros);
  liberar_lista(pares);
  liberar_lista(impares);

  return 0;
}

Lista *criar_lista()
{
  Lista *list = malloc(sizeof(Lista));

  list->tam = 0;

  return list;
}

int lista_vazia(Lista *l)
{
  return (l == NULL) || (l->tam == 0);
}

int lista_cheia(Lista *l)
{
  return (l != NULL) && (l->tam == LIST_MAX_SIZE);
}

int inserir(Lista *l, int item)
{
  if (!lista_cheia(l))
  {
    l->item[l->tam] = item;

    l->tam++;

    return 1;
  }

  return 0;
}

void imprimir_lista(Lista *l)
{
  if (!lista_vazia(l))
  {
    for (int i = 0; i < l->tam; i++)
      printf("%d ", l->item[i]);
  }
  else
  {
    printf("-1 ");
  }
  printf("\n");
}

int liberar_lista(Lista *l)
{
  if (l != NULL)
  {
    free(l);

    return 1;
  }

  return 0;
}

// Recebe 3 listas, sendo as duas ultimas o resultado da verificacao se os numeros da primeira eram pares ou impares
void lista_par_impar(Lista *l, Lista *par, Lista *impar)
{
  for (int i = 0; i < l->tam; i++)
  {
    if (l->item[i] % 2 == 0)
      inserir(par, l->item[i]);
    else
      inserir(impar, l->item[i]);
  }
}
