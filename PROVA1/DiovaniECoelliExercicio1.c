#include <stdio.h>

// – Faça um programa que apresente um menu de opções e implemente as seguintes
// funcionalidades, detalhadas a seguir:
// a) Apresentar divisores do número.
// b) Verificar se o número é perfeito.
// c) Soma dos divisores.
// d) Verificar se os números são múltiplos.
// a) Ler números até ser informado o valor 0 (zero) que irá parar a leitura. O valor 0 (zero) não deve ser processado.
// Para cada número lido, apresentar a quantidade de divisores que ele possui. Exemplo:
// Informado Apresentado
// 10 10 possui 4 divisor(es)
// 2 2 possui 2 divisor(es)
// 1 1 possui 1 divisor(es)
// Data: 14/04/2021
// Horário: 12:30 às 15:30
// Página 2 de 2
// b) Verificar se um número é ou não perfeito e imprimir na tela. Um número é perfeito quando a soma de todos
// os seus divisores (excluindo ele mesmo) é igual ao próprio número. Exemplo: 28 é perfeito porque 1 + 2 + 4 + 7
// + 14 é igual a 28.
// c) No intervalo de 1 a 100, apresentar os números cuja soma dos seus divisores (exceto o próprio número) é
// maior que 1 mas menor que o próprio número. Exemplo: A soma dos divisores de 4 (excluindo ele próprio) é 3
// (1 + 2), de 8 é 7 (1 + 2 + 4), de 9 é 4 (1 + 3), de 10 é 8 (1+2+5) e assim por diante.
// d) Ler dois valores que representam os limites positivos de um intervalo (sendo que o limite superior deve ser
// maior que o limite inferior) e apresentar se eles são múltiplos. Apresentar a saída como no exemplo a seguir:
// Exemplo para os valores 1 e 6 como limites

int main()
{
  int numero, i, divisores = 0, limiteSuperior, limiteInferior;
  char opcaoMenu;

  // mostra um menu com opcoes
  printf("Menu [a,b,c,d]\n");
  printf("a) Apresentar divisores do número;\n");
  printf("b) Verificar se o número é perfeito;\n");
  printf("c) Soma dos divisores;\n");
  printf("d) Verificar se os números são múltiplos;\n");
  printf("d) Verificar se os números são múltiplos;\n");
  scanf(" %c", &opcaoMenu);

  // usando o switch porque a condicao depende da mesma variavel em todos os casos
  switch (opcaoMenu)
  {
  case 'a':
    // loop infinito ate ser quebrado
    while (1)
    {
      printf("Informe um numero:");
      scanf("%d", &numero);

      if (numero == 0)
      {
        // Se o numero for 0 sai do loop
        break;
      }

      for (i = 1; i <= numero; i++)
      {
        // a variavel i e usado como divisor, se o numero for divisivel por i, entao aumenta o contador de divisores
        if (numero % i == 0)
        {
          divisores += 1;
        }
      }
      printf("%d possui %d divisor(es)\n", numero, divisores);
      // reseta o numero de divisores
      divisores = 0;
    }

    break;

  case 'b':
    printf("Informe um numero:");
    scanf("%d", &numero);

    for (i = 1; i < numero; i++)
    {
      // soma todos os divisores do numero
      if (numero % i == 0)
      {
        divisores += i;
      }
    }

    // verifica se o numeor e igual a soma de seus divisores
    if (numero == divisores)
    {
      printf("O numero %d e perfeito!\n", numero);
    }
    else
    {
      printf("O numero %d nao e perfeito!\n", numero);
    }

    break;

  case 'c':
    for (numero = 1; numero <= 100; numero++)
    {
      for (i = 1; i < numero; i++)
      {
        // soma todos os divisores do numero
        if (numero % i == 0)
        {
          divisores += i;
        }
      }
      // se a soma de seus divisore for maior que 1 e menor que o numeor
      if (divisores > 1 && divisores < numero)
      {
        printf("%d\n", numero);
      }

      divisores = 0;
      // reseta a variavel divisores para o proximo loop
    }
    break;

  case 'd':
    // loop infinito
    while (1)
    {
      printf("Informe o limite inferior:");
      scanf("%d", &limiteInferior);

      printf("Informe o limite superior:");
      scanf("%d", &limiteSuperior);

      // verificando se os limite sao positivos e se o inferio e menor que o superior
      if (limiteSuperior <= 0 || limiteInferior <= 0)
      {
        printf("Ambos os limites precisam ser positivo!\n");
      }
      else if (limiteInferior > limiteSuperior)
      {
        printf("O limite superior tem que ser maior que o inferior!\n");
      }
      else
      {
        break;
      }
    }

    // fazendo o cabecalho da tabela
    printf("  ");
    for (i = limiteInferior; i <= limiteSuperior; i++){
      printf("%d ", i);
    }
    printf("\n");
    // loop nos limites
    for (i = limiteInferior; i <= limiteSuperior; i++)
    {
      // lateral da tabela
      printf("%d ", i);

      // fazendo outro loop entre os limites e verificando se sao divisiveis
      for (divisores = limiteInferior; divisores <= limiteSuperior; divisores++)
      {
          // se divisivel escreve x senao um espaco em branco
        if (divisores % i == 0 || i % divisores == 0)
        {
          printf("X ");
        }
        else
        {
          printf("  ");
        }
      }
      printf("\n");
    }

  default:
    printf("Opcao invalida!\n");
    break;
  }

  return 0;
}
