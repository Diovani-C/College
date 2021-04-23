#include <stdio.h>
#include <ctype.h>

// 4) Fazer uma função que apresenta o resultado da multiplicação de dois números. Usar essa função para:
// a) Apresentar a multiplicação de dois números informados pelo usuário.
// b) Apresentar a tabuada (0 a 10) de um número informado pelo usuário.

int multiplicacao(int numero1, int numero2)
{
  if (numero1 == 0 || numero2 == 0)
  {
    return 0;
  }
  return numero1 * numero2;
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
  int numero1, numero2, taubada, i;
  char continuar;

  printf("Multiplicaivoais!\n");

  while (1)
  {
    printf("Informe um numero: ");
    scanf("%d", &numero1);

    printf("Informe outro numero: ");
    scanf("%d", &numero2);

    printf("%d X %d = %d\n", numero1, numero2, multiplicacao(numero1, numero2));

    printf("Informe um numero para a tabuada: ");
    scanf("%d", &taubada);

    for (i = 0; i <= 10; i++)
    {
      printf("%d X %2d = %2d\n", taubada, i, multiplicacao(taubada, i));
    }

    printf("Deseja continuar? [S/N]: ");
    continuar = lerEntreDoisChar('s', 'n');

    if (continuar == 'n')
    {
      break;
    }
  }

  return 0;
}
