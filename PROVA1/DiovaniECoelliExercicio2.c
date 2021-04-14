#include <stdio.h>

// Fazer um programa que receba a quantidade de caracteres (tamanho) do seu primeiro
// nome e use essa informação para a estrutura de repetição que lerá o nome caractere a caractere verificando se
// cada caractere é ou não um número primo (verificar pelo código correspondente da tabela ASCII, disponível em
// https://www.ricardoarrigoni.com/tabela-ascii-completa/). Exemplo: Quantidade de caracteres do nome Ana: 3
// Usar uma estrutura de repetição (sabe-se o tamanho do nome) para ler os caracteres do nome Ana:
// A – 65 na tabela ASCII não é primo
// n – 110 na tabela ASCII não é primo
// a – 97 na tabela ASCII é primo
// Para transformar um caractere no respectivo número da tabela ASCII:

int main()
{
  int quantidadeChar, i, j, divisivel, ascii;
  char letra, continuar;

  do
  {

    printf("Informe a quantidade de letras no seu nome");
    scanf(" %d", &quantidadeChar);

    // faz um loop no valor informado e pede pelas letras do nome
    for (i = 0; i < quantidadeChar; i++)
    {
      printf("Informe uma letra\n");
      scanf(" %c", &letra);

      // transforma letra em ascii
      ascii = letra;

      // inicia a variavel divisivel em cada loop
      divisivel = 0;

      // faz um loop por todos os numeros inteiros menores que o valor de ascii e se for divisivel incremente a variavel divisivel
      for (j = 1; j < ascii; j++)
      {
        if (ascii % j == 0)
        {
          divisivel += 1;
        }
      }

      printf("%c - %d na tabela ASCII ", letra, ascii);

      // verifica se o numero e ou nao primo
      if (divisivel <= 1)
      {
        printf("eh primo\n");
      }
      else
      {
        printf("nao e primo\n");
      }
    }

    printf("Deseja continuar S/N");
    scanf(" %c", &continuar);

  } while (continuar == 'S');
  return 0;
}
