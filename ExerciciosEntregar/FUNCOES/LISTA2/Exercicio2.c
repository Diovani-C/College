#include <stdio.h>
#include <ctype.h>

// 2) Fazer uma função que verifica se um número é retangular. Um número é retangular se ele pode ser obtido a partir da soma de uma sequência de números pares, iniciando em 2. Por exemplo: 30 é retangular porque
// resulta da soma de 2 + 4 + 6 + 8 + 10. Utilizar essa função para:
// a) Verificar se um número, informado pelo usuário, é retangular.
// b) Mostrar quais números de um intervalo são retangulares.
// Use menu de opções (com switch-case) e implemente a repetição de programa.

int retangular(int numero)
{
  int i, retangulo = 0;

  for (i = 2; i <= numero; i += 2)
  {
    retangulo += i;
    if (retangulo == numero)
    {
      return 1;
    }
    else if (retangulo > numero)
    {
      return 0;
    }
  }
  return 0;
}

void printSequencia(int numero)
{
  int i, retangulo = 0;

  for (i = 2; i <= numero; i += 2)
  {
    retangulo += i;

    printf("%d", i);

    if (retangulo == numero)
    {
      break;
    }
    printf(" + ");
  }
  printf(" = %d\n", numero);
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

int trocarPosicao(int *numero1, int *numero2)
{
  int temporario = *numero1;

  *numero1 = *numero2;
  *numero2 = temporario;
}

int main()
{
  int opcao, numero, limiteInferior, limiteSuperior, i;
  char continuar;

  while (1)
  {

    printf("1- Verificar se um número é retangular;\n2- Mostrar quais números de um intervalo são retangulares\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Informe um numero: ");
      scanf("%d", &numero);
      if (retangular(numero))
      {
        printf("O numero %d eh retangular ==> ", numero);
        printSequencia(numero);
      } else {
        printf("O numero informado nao e retangular!\n");
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
        if (retangular(i))
        {
          printf("O numero %2d e retangular ==> ", i);
          printSequencia(i);
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
