#include <stdio.h>

// - Ler uma string e contar quantos espaços sucessivos ela contém. Armazenar esses valores em um vetor. Mostrar esse vetor. Verificar se nesse vetor há três valores em sequência que estão em ordem crescente. Se houver, mostrar. Em seguida ordenar o vetor e mostrá-lo novamente. Em uma matriz, armazenar na primeira coluna (sem repetição) os elementos do vetor ordenado e na segunda coluna o número de vezes que esse elemento ocorre no vetor.
// Exemplo: ---Curso-de--Engenharia---de----Computacao-----da-UTFPR--

int main()
{
  int i = 0, j = 0, espacosBrancos[128], sequenciaPosicao, temp;
  char frase[256];
  char sequencia[3];

  printf("Informe uma frase: ");
  fgets(frase, 256, stdin);

  espacosBrancos[0] = 0;

  while (1)
  {
    if (frase[i] == ' ')
    {
      espacosBrancos[j] += 1;

      if (frase[i + 1] != ' ')
      {
        j++;
        espacosBrancos[j] = 0;
      }
    }
    if (frase[i] == '\n')
    {
      break;
    }
    i++;
  }

  j = 0;
  while (1)
  {
    printf("%d  ", espacosBrancos[j]);
    j++;
    if (espacosBrancos[j] == 0)
    {
      break;
    }
  }
  printf("\n");

  j = 0;

  printf("===SEQUENCIAS===\n");
  while (1)
  {
    if (espacosBrancos[j] < espacosBrancos[j + 1])
    {
      if (espacosBrancos[j + 1] < espacosBrancos[j + 2])
      {
        printf("%d %d %d    ", espacosBrancos[j], espacosBrancos[j + 1], espacosBrancos[j + 2]);
        j += 3;
      }
      else
      {
        j += 2;
      }
    }
    else
    {
      j++;
    }

    if (espacosBrancos[j] == 0)
    {
      break;
    }
  }
  printf("\n");

  printf("=== VETOR ORDENADO===\n");

  int tamanhoDoArr = sizeof(espacosBrancos) / sizeof(espacosBrancos[0]);

  for (i = 0; i < tamanhoDoArr; i++)
  {
    for (j = i + 1; j < tamanhoDoArr; j++)
    {
      if (espacosBrancos[i] > espacosBrancos[j])
      {
        temp = espacosBrancos[i];
        espacosBrancos[i] = espacosBrancos[j];
        espacosBrancos[j] = temp;
        printf("%d ", espacosBrancos[j]);
      }
    }

    printf("\n");

    printf("===Matriz===\n");
    printf("VALOR     OCORRENCIAS\n");

    return 0;
  }
