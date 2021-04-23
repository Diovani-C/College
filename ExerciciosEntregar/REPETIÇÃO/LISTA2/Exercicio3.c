#include <stdio.h>

//  Ler caracteres. Contar quantas vogais minúsculas são informadas. O caractere zero '0' indica o final da leitura, ou seja, finalizar a leitura quando informado esse caractere. O programa deverá informar também quantos caracteres foram digitados ao todo.

int main()
{
  int vogaisQuantidade = 0, i, total = 0;
  char caractere, vogais[] = {'a', 'e', 'i', 'o', 'u'};

  printf("Valendo R$500 uma letra!\n");

  while (1)
  {

    printf("Informe um caractere:");
    scanf(" %c", &caractere);

    if (caractere == '0')
    {
      break;
    }

    total += 1;

    for (i = 0; i < 5; i++)
    {
      if (caractere == vogais[i])
      {
        vogaisQuantidade += 1;
      }
    }
  }

  printf("Foram informados um total de %d caracteres, e entre esses %d sao vogais minusculas!\n", total, vogaisQuantidade);

  return 0;
}
