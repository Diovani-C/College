#include <stdio.h>
#include <ctype.h>

// 1) Fazer uma função que verifica se um número é triangular. Um número natural é triangular quando o produto de três números naturais consecutivos for igual ao próprio número. Por exemplo: 120 é triangular, pois 4 * 5 * 6 = 120. Use essa função para:
// a) Verificar se um número, informado pelo usuário, é triangular.
// b) Mostrar quais números de um intervalo são triangulares.
// Use menu de opções (com switch-case) e implemente a repetição de programa.
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

int trocarPosicao(int *numero1, int *numero2)
{
  int temporario = *numero1;

  *numero1 = *numero2;
  *numero2 = temporario;
}

int triangular(int numero)
{
  int i;
  for (i = 2; i <= numero / 3; i++)
  {
    if (((i - 1) * i * (i + 1)) == numero)
    {
      printf(" %d * %d * %d = %d\n", (i - 1), i, (i + 1), numero);
      return 1;
    }
  }
  return 0;
}

int main()
{
  int numero, limiteInferior, limiteSuperior, i, opcoes;
  char continuar;

  printf("Triangulos!\n");

  while (1)
  {

    printf("1- Verificar se um numero eh triangular;\n2- Mostar os numero triangulares que pertencem a um intervalo\n");
    scanf("%d", &opcoes);

    switch (opcoes)
    {
    case 1:
      printf("Informe um numero: ");
      scanf("%d", &numero);

      if (triangular(numero))
      {
        printf("O numero informado eh triangular\n");
      }
      else
      {
        printf("O numero informado nao eh triangular\n");
      }
      break;

    case 2:
      printf("Informe o valor para um limite do intervalo:");
      scanf("%d", &limiteInferior);

      printf("Informe o valor para outro limite do intervalo:");
      scanf("%d", &limiteSuperior);

      if (limiteInferior > limiteSuperior)
      {
        trocarPosicao(&limiteInferior, &limiteSuperior);
      }

      for (i = limiteInferior; i <= limiteSuperior; i++)
      {
        if (triangular(i))
        {
          printf("O numero %d e triangular!\n", i);
        }
      }

      break;

    default:
      printf("Valor informado invalido!\n");
      continue;
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
