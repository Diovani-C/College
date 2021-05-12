#include <stdio.h>
#include <stdlib.h>

// Questão 2 (3,3 pontos) - Gerar um vetor que não contenha números repetidos com 10 elementos aleatórios entre 0 e 50. Utilizar uma função para verificar se cada elemento do vetor é ou não um número primo. Essa função retorna 0 para indicar que o número é primo ou 1 para indicar que o número não é primo. Criar uma matriz 10x3
// onde a primeira coluna vai armazenar o índice do vetor, a segunda coluna vai armazenar o elemento do vetor e a
// terceira coluna vai armazenar 0 se o elemento do vetor for um número primo ou 1 caso o elemento do vetor não
// seja um número primo. Fazer a média dos números primos encontrados no vetor. A saída do programa deve ser
// apresentada como no exemplo a seguir:

int naoRepetirArray(int arr[], int valor);
int naoPrimo(int numero);

int main()
{
  int i = 0, somaPrimos = 0, quantidadePrimos = 0;
  int numerosALeatorios10[10];

  while (i < 10)
  {
    // Gera 10 valores aleatorios diferentes
    int valorAleatorio = rand() % 51;

    printf("%d\n", valorAleatorio);
    // se o valor se repete gera um novo valor
    if (naoRepetirArray(numerosALeatorios10, valorAleatorio))
    {
      numerosALeatorios10[i] = valorAleatorio;
      i++;
    }
  }

  printf("===Vetor===\n");

  for (i = 0; i < 10; i++)
  {
    printf("%d  ", numerosALeatorios10[i]);
  }

  printf("\n");

  printf("INDICE   NUMERO   PRIMO\n");
  for (i = 0; i < 10; i++)
  {
    printf("%2d        %2d         %d\n", i, numerosALeatorios10[i], naoPrimo(numerosALeatorios10[i]));
    if (!naoPrimo(numerosALeatorios10[i]))
    {
      somaPrimos += numerosALeatorios10[i];
      quantidadePrimos += 1;
    }
  }

  printf("Media dos numeros primos: %1.2f\n", somaPrimos / (float)quantidadePrimos);

  return 0;
}

int naoRepetirArray(int arr[], int valor)
{
  // verifica se o valor ja esta no array
  int j;
  for (j = 0; j < 10; j++)
  {
    if (arr[j] == valor)
      return 0;
  }
  return 1;
}

int naoPrimo(int numero)
{
  int i;
  // verifica se e primo
  for (i = 2; i <= numero / 2; ++i)
  {
    if (numero % i == 0)
    {
      return 1;
    }
  }
  return 0;
}