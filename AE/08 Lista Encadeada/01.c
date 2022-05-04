#include <stdlib.h>

typedef struct
{
  int numero;
  Celula *cabeca;
} ListaEncadeada;

typedef struct
{
  int item;
  Celula *proximo;
} Celula;

int main(int argc, char const *argv[])
{

  return 0;
}

ListaEncadeada *criar_lista()
{
  ListaEncadeada *l = malloc(sizeof(ListaEncadeada));
  l->cabeca = NULL;

  return l;
}

Celula *criar_celula(int item)
{
  Celula *c = malloc(sizeof(Celula));

  c->item = item;
  c->proximo = NULL;

  return c;
}

int lista_vazia(ListaEncadeada *l)
{
  if (l == NULL)
    return -1;

  if (l->cabeca == NULL)
    return 1;

  return 0;
}

void inserir_fim(ListaEncadeada *l, int item)
{
  if (l == NULL)
    l = criar_lista();

  Celula *nova_celula = criar_elemento(item);

  if (lista_vazia(l))
  {
    l->cabeca = nova_celula;
    return;
  }

  Celula *aux = l->cabeca;
  while (aux->proximo != NULL)
  {
    aux = aux->proximo;
  }

  aux->proximo = nova_celula;
}

void inserir_inicio(ListaEncadeada *l, int item)
{
  if (l == NULL)
    l = criar_lista();

  Celula *c = criar_elemento(item);

  if (!lista_vazia(l))
    c->proximo = l->cabeca;

  l->cabeca = c;
}
