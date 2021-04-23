#include <stdio.h>
#include <ctype.h>

// 4) Elaborar uma função que verifica se um número é palíndromo. Um número é palíndromo quando ele não muda se lido da esquerda para a direita ou da direita para a esquerda. Por exemplo, 2112 é palíndromo.
// Elaborar uma função que verifica se um número, que contenha entre 2 e 9 dígitos, é palíndromo. Utilizar essa função para:
// a) Verificar se um número informado pelo usuário é palíndromo.
// b) Apresentar os números palíndromos que pertencem a um intervalo informado pelo usuário.
// Use menu de opções (com switch-case) e implemente a repetição de programa.

int palindrome(int numero)
{
  int reverso = 0, digito, copia = numero;
  // cira um numero reverso e compara
  do
  {
    digito = copia % 10;
    reverso = (reverso * 10) + digito;
    copia /= 10;
  } while (copia != 0);

  return reverso == numero;
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
  int option, numero, limiteInferior, limiteSuperior, i;
  char continuar;

  while (1)
  {
    printf("1- Verificar se um número é palíndromo.\n2- Apresentar os números palíndromos que pertencem a um intervalo.\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      printf("Informe um numero: ");
      scanf("%d", &numero);

      if(palindrome(numero)) {
        printf("O numero %d e um palindromoe!\n", numero);
      } else {
        printf ("O numero %d nao eh um palindrome!\n", numero);
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
        if (palindrome(i))
        {
          printf("%d\n", i);
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
