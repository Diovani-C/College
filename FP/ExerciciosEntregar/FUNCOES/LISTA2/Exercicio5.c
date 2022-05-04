#include <stdio.h>
#include <ctype.h>

// 5) Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e desenha um quadrado ou retângulo na tela utilizando o caractere.

void tabela(int linhas, int colunas, char caractere)
{
  int l, c;
  for (l = 0; l < linhas; l++)
  {
    for (c = 0; c < colunas; c++)
    {
      printf("%c ", caractere);
    }
    printf("\n");
  }
}
char lerEntreDoisChar(char valor1, char valor2)
{
  char valorLido;
  valor1 = tolower(valor1);
  valor2 = tolower(valor2);
  while (1)
  {
    scanf(" %c", &valorLido);
    valorLido = tolower(valorLido);

    if (valorLido != valor1 && valorLido != valor2)
    {
      printf("Valor informado invalido!\n");
      printf("O valor deve ser %c ou %c : ", valor1, valor2);
      continue;
    }
    break;
  }
  return valorLido;
}

int main()
{
  int colunas, linhas;
  char continuar, caractere;

  while (1)
  {
    printf("Informe o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Informe o numero de colunas: ");
    scanf("%d", &colunas);

    printf("Informe o caractere: ");
    scanf(" %c", &caractere);

    tabela(linhas, colunas, caractere);

    printf("Deseja continuar? [S/N]: ");
    continuar = lerEntreDoisChar('s', 'n');

    if (continuar == 'n')
    {
      break;
    }
  }

  return 0;
}
