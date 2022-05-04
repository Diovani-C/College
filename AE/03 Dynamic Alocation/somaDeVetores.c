// Implemente uma função que receba dois vetores de números inteiros. A função deverá retornar um vetor resultante da soma dos vetores entrada.

// Cabeçalho da solução proposta, onde v1 e v2 são vetores, n1 é o comprimento de v1 e v2 é o comprimento de v2:

// int* soma(int *v1, int n1, int *v2, int n2);

// Input Format

// Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v. Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o segundo vetor.// // // //

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int *soma(int *v1, int n1, int *v2, int n2);
void readArr(int *arr, int arr_size);

int main()
{
  int arr_size1, arr_size2;

  scanf("%d", &arr_size1);
  int arr1[arr_size1];
  readArr(arr1, arr_size1);

  scanf("%d", &arr_size2);
  int arr2[arr_size2];
  readArr(arr2, arr_size2);

  int *result = soma(arr1, arr_size1, arr2, arr_size2);

  int arr_size = arr_size1 >= arr_size2 ? arr_size1 : arr_size2;

  for (int i = 0; i < arr_size; i++)
  {
    printf("%d ", result[i]);
  }

  return 0;
}

int *soma(int *v1, int n1, int *v2, int n2)
{
  int arr_size = n1 >= n2 ? n1 : n2;

  int *out_arr = malloc(sizeof(int) * arr_size);

  for (int i = 0; i < arr_size; i++)
  {
    out_arr[i] = 0;
    if (n1 > i)
    {
      out_arr[i] += v1[i];
    }
    if (n2 > i)
    {
      out_arr[i] += v2[i];
    }
  }

  return out_arr;
}

void readArr(int *arr, int arr_size)
{
  for (int i = 0; i < arr_size; i++)
  {
    scanf("%d", &arr[i]);
  }
}