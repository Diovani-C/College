#include <stdio.h>
#include <ctype.h>

// 1) Fazer uma função para calcular o quadrado de um número. Usar essa função para:
// a) Mostrar o quadrado de um número informado pelo usuário.
// b) Apresentar o quadrado entre dois valores (limites de um intervalo) informado pelo usuário. Os valores para
// os limites devem estar 1 e 100:
// Exemplo: Se os limites informados forem 8 e 5, mostrar:

int quadrado(int numero)
{
  return numero * numero;
}

int trocarPosicao(int *numero1, int *numero2)
{
  int temporario = *numero1;

  *numero1 = *numero2;
  *numero2 = temporario;
}

int main()
{
  int numero, limiteInferior, limiteSuperior, entre1e100, i;
  char continuar;

  printf("A forma mais poderosa... o quadrado!\n");

  printf("Informe um numero:");
  scanf("%d", &numero);

  printf("O quadrado de %d eh: %d\n", numero, quadrado(numero));

  while (1)
  {
    entre1e100 = 0;

    printf("Informe o valor para um limite do intervalo:");
    scanf("%d", &limiteInferior);

    printf("Informe o valor para outro limite do intervalo:");
    scanf("%d", &limiteSuperior);

    if (limiteInferior > limiteSuperior)
    {
      trocarPosicao(&limiteInferior, &limiteSuperior);
    }

    entre1e100 += limiteInferior < 1 || limiteInferior > 100;
    entre1e100 += limiteSuperior < 1 || limiteSuperior > 100;
    if (entre1e100 > 0)
    {
      printf("O intervalo do limite deve ser entre 1 e 100!\n");
      continue;
    }

    for (i = limiteInferior; i <= limiteSuperior; i++)
    {
      printf("%d ^ 2 : %d\n", i, quadrado(i));
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

    if (continuar == 'n')
    {
      break;
    }
  }

  return 0;
}
