// Dada uma função que receba uma lista estática de contatos e uma string. Essa função deverá imprimir os contatos que contêm essa string no nome. Por exemplo, para a string "son", podem ser encontrados nomes como: Son**ia, Ander**son, Jeffer**son**.

// Input Format

// A primeira linha a ser lida deve ser a string que deve ser procurada. Em seguida, deve ser lida um número inteiro referente à quantidade de nomes que devem ser incluídos na lista.

// Output Format

// Imprimir os nomes que contêm a string procurada.
// Sample Input 0

// son
// 8
// ana
// anderson
// tiago
// sonia
// enzo
// chimonstrufia
// jefferson
// rosana
// Sample Output 0

// anderson
// sonia
// jefferson

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LIST_MAX_SIZE 128
#define CONTACT_MAX_SIZE 128

typedef struct Lista Lista;

Lista *criar_lista();

int lista_vazia(Lista *l);

int lista_cheia(Lista *l);

int inserir(Lista *l, char *chave);

void imprimir_lista(Lista *l);

int liberar_lista(Lista *l);

int contem(char *item, char *comparador);

Lista *contem_comparador_lista(Lista *l, char *comparador);

void imprimir_contatos_que_contem_comparador(Lista *l, char *comparador);

struct Lista
{
  char *contato[LIST_MAX_SIZE];
  int tam;
};

int main()
{
  int numero_contatos;
  char comparador[CONTACT_MAX_SIZE];
  Lista *lista_contatos = criar_lista();

  fgets(comparador, sizeof(comparador), stdin);
  scanf("%d", &numero_contatos);

  for (int i = 0; i < numero_contatos; i++)
  {
    char contato[CONTACT_MAX_SIZE];

    fgets(contato, sizeof(contato), stdin);

    inserir(lista_contatos, contato);
  }

  imprimir_contatos_que_contem_comparador(lista_contatos, comparador);

  liberar_lista(lista_contatos);

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

// Retorna uma nova lista com todos os valores que contem o comparador
Lista *contem_comparador_lista(Lista *l, char *comparador)
{
  Lista *lista_contem_comparador = criar_lista();

  for (int i = 0; i < l->tam; i++)
  {
    if (contem(l->contato[i], comparador))
      inserir(lista_contem_comparador, l->contato[i]);
  }

  return lista_contem_comparador;
}

// Verifica se contem o comparador dentro do item, retorna 1 com sucesso e 0 senao
int contem(char *item, char *comparador)
{
  int contador_string = 0;
  int contador_comparador = 0;

  while (1)
  {
    // O comparador chegou ao final, entao o elemento contem o comparador
    if (comparador[contador_comparador] == '\n')
      return 1;

    // O item chegou ao final entao o loop termina
    if (item[contador_string] == '\n')
      break;

    // Se o item conter o mesmo charactere que o comparador avanca o contador do comparador em 1, senao zera o contador
    contador_comparador = item[contador_string] == comparador[contador_comparador] ? contador_comparador + 1 : 0;

    // Avanca uma casa na string do item
    contador_string++;
  }

  // Se chegou ate aqui falhou na comparacao
  return 0;
}

int inserir(Lista *l, char *chave)
{
  if (!lista_cheia(l))
  {
    l->contato[l->tam] = malloc(sizeof(char) * strlen(chave));

    strcpy(l->contato[l->tam], chave);

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
      printf("%s", l->contato[i]);
  }
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

void imprimir_contatos_que_contem_comparador(Lista *l, char *comparador)
{
  Lista *contem_comparador = contem_comparador_lista(l, comparador);
  imprimir_lista(contem_comparador);
  liberar_lista(contem_comparador);
}
