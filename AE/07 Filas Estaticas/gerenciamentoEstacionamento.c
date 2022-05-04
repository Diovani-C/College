// O Sr. Pupunha, um grande investidor, comprou um terreno e decidiu fazê-lo um estacionamento, o qual tem capacidade para 10 carros. Ao estacionar o automóvel, o cliente recebe um ticket representando por um número inteiro. No entanto, o terreno é muito estreito e, consequentemente, os carros devem ser colocados em fila. Nesse terreno, a entrada é pelos fundos e a saída é pela frente. Caso um cliente precisar sair com o seu carro, os outros automóveis deverão ser retirados e estacionados novamente. Por exemplo, considere a seguinte fila de carros: {1, 2, 3, 4, 5, 6, 7, 8}, onde o primeiro elemento é o veículo que está mais próximo à saída e o último é mais próximo da entrada. Caso o carro 4 for retirado, os veículos 1, 2 e 3 devem estacionados novamente pela entrada do estacionamento. Desse modo, após a remoção do veículo 4, o estacionamento ficaria na seguinte forma: {5, 6, 7, 8, 1, 2, 3}.

// Implemente uma função que receba uma fila estática (representação do estacionamento) e um número inteiro (ticket ou id do carro) como parâmetros e faça o gerenciamento de veículos no estacionamento do Pupunha. Enquanto o ticket não for encontrado, o primeiro elemento da fila deverá ser removido e recolocado no final da da fila. Também, deve ser tratado o caso em que o elemento não é encontrado na fila. A função deverá retornar um número inteiro representado a quantidade de veículos que precisaram ser estacionados novamente para que o cliente pudesse retirar o seu carro.

// Input Format

// Na primeira linha, enquanto -1 não for lido, ler números inteiros. Na segunda linha deve ser lido um número inteiro que será o ticket a ser procurado na fila.

// Constraints

// O acesso aos elementos da fila deve ser através da função desenfileirar.

// Output Format

// Na primeira linha, o conteúdo da fila, após a operação de busca, deve ser impresso.

// Na segunda linha impresso a quantidade de movimentações que foram necessárias para procurar o ticket.

// Na terceira linha deve ser impressa a string "sucesso" caso o ticket for encontrado, ou "falha", caso contrário.

// Sample Input 0

// 1 2 3 4 5 6 7 8 -1
// 4
// Sample Output 0

// 5 6 7 8 1 2 3
// 3
// sucesso
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define TAM_MAX 10

typedef struct
{
  int itens[TAM_MAX];
  int inicio;
  int fim;
} Fila;

Fila *criar_fila();
int fila_cheia(Fila *f);
int fila_vazia(Fila *f);
int enfileirar(Fila *f, int item);
int desinfileirar(Fila *f);
void liberar_fila(Fila *f);
void imprimir_filar(Fila *f);
int tamanho_fila(Fila *f);
int estacionamento_do_pupunha(Fila *f, int carro);

int main()
{
  int numero, numero_movimentacoes, tamanho_fila_antes;

  Fila *carros_pupunha = criar_fila();

  while (1)
  {
    scanf("%d", &numero);

    if (numero == -1)
      break;

    enfileirar(carros_pupunha, numero);
  }

  scanf("%d", &numero);

  tamanho_fila_antes = tamanho_fila(carros_pupunha);

  numero_movimentacoes = estacionamento_do_pupunha(carros_pupunha, numero);

  imprimir_filar(carros_pupunha);

  printf("%d\n", numero_movimentacoes);

  if (numero_movimentacoes < tamanho_fila_antes)
    printf("sucesso\n");
  else
    printf("falha\n");

  return 0;
}

Fila *criar_fila()
{
  Fila *f = malloc(sizeof(Fila));

  f->inicio = 0;
  f->fim = -1;

  return f;
}

int fila_cheia(Fila *f)
{
  if (f == NULL)
    return -1;

  if (tamanho_fila(f) == TAM_MAX)
    return 1;

  return 0;
}

int fila_vazia(Fila *f)
{
  if (f == NULL)
    return -1;

  if (f->fim == -1)
    return 1;

  return 0;
}

int enfileirar(Fila *f, int item)
{
  if (f == NULL)
    f = criar_fila();

  if (fila_cheia(f))
    return 0;

  f->fim = (f->fim + 1) % TAM_MAX;
  f->itens[f->fim] = item;

  return 1;
}

int desinfileirar(Fila *f)
{
  int item = INT_MIN;

  if (fila_vazia(f))
    return item;

  item = f->itens[f->inicio];

  if (f->inicio == f->fim)
  {
    f->inicio = 0;
    f->fim = -1;
  }
  else
  {
    f->inicio = (f->inicio + 1) % TAM_MAX;
  }
  return item;
}

int tamanho_fila(Fila *f)
{
  if (f == NULL)
    return -1;

  if (fila_vazia(f))
    return 0;

  if (f->fim >= f->inicio)
    return (f->fim - f->inicio) + 1;
  // 0 inicio 2 3 4 5 fim 7 8
  // 6 - 1 = 5; 5 + 1 = 6;

  return TAM_MAX - (f->inicio - f->fim) + 1;
  // 0 1 2 fim 4 5 inicio 7 8
  // 6 - 3 = 3; 9 - 3 + 1 = 7;
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

int estacionamento_do_pupunha(Fila *f, int carro)
{
  if (fila_vazia(f))
    return -1;

  int num_carro = 0;
  int contador = 0;

  for (int i = 0; i < tamanho_fila(f); i++)
  {
    num_carro = desinfileirar(f);

    if (num_carro == carro)
      return contador;

    contador++;

    enfileirar(f, num_carro);
  }

  return contador;
}