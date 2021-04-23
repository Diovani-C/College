#include <stdio.h>
#include <ctype.h>

// Sabendo-se que 1cm = 0,393701 polegadas, fazer uma função que converte de centímetros para polegadas. Usar essa função para:
// a) Mostrar o valor em polegadas de um determinado valor informado pelo usuário.
// b) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20

float cmParaPol(int centimetro)
{
  return (float)centimetro * 0.393701;
}

int main()
{
  int i, centimetros;
  char continuar;

  printf("O pequeno polegar!\n");

  do
  {

    printf("Informe um valor em centimetro:");
    scanf("%d", &centimetros);

    printf("%d centimetro(s) equivalem em %1.2f polegadas\n", centimetros, cmParaPol(centimetros));

    printf("==TABELA DE CONVERSAO==\n");
    printf("CENTIMETROS       POLEGADAS\n");
    for (i = 1; i <= 20; i++)
    {
      printf("%2d                  %1.2f\n", i, cmParaPol(i));
    }
    while (1)
    {
      printf("Deseja continuar? [S/N]:");
      scanf(" %c", &continuar);

      continuar = tolower(continuar);

      if (continuar != 's' && continuar != 'n')
      {
        printf("Valor informado invalido!\n");
        continue;
      }
      break;
    }

  } while (continuar == 's');

  return 0;
}
