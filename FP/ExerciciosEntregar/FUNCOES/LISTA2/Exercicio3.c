#include <stdio.h>
#include <math.h>
#include <ctype.h>

// 3) Fazer uma função que verifica se um número é um quadrado perfeito. Um número é quadrado perfeito se
// possui como raiz quadrada um valor inteiro. A função para obter a raiz quadrada é sqrt() e está na biblioteca math.h. Por exemplo, 25 é um quadrado perfeito porque raiz quadrada de 25 é 5. Utilizar essa função para:
// a) Verificar se um número, informado pelo usuário, é um quadrado perfeito.
// b) Mostrar quais números de um intervalo são quadrados perfeitos.
// Use menu de opções (com switch-case) e implemente a repetição de programa.

int quadradoPerfeito(int numero)
{
  int raizInteiro;
  float raiz;

  raiz = sqrt((float)numero);
  raizInteiro = raiz;

  return (raizInteiro - raiz == 0);
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
  char continuar;
  int opcao, numero, limiteInferior, limiteSuperior, i;

  while (1)
  {
    printf("1- Verificar se um número, informado pelo usuário, é um quadrado perfeito.\n2- Mostrar quais números de um intervalo são quadrados perfeitos.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Informe um numero: ");
      scanf("%d", &numero);

      if (quadradoPerfeito(numero))
      {
        printf("%d eh um quadrado perfeito => raiz quadrada de %d eh %1.0f\n", numero, numero, sqrt((float)numero));
      }
      else
      {
        printf("O numero informado nao eh um quadrado perfeito!\n");
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
        if (quadradoPerfeito(i))
        {
          printf("%2d eh um quadrado perfeito => raiz quadrada de %2d eh %1.0f\n", i, i, sqrt((float)i));
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
