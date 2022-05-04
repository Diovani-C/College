#include <stdio.h>

// 2 - Ler um número e um dígito positivos. Contar quantos dígitos o número possui, que corresponde àquele dado como entrada. Repetir a leitura do número e do dígito enquanto forem informados valores negativos. Repetir a execução do programa de acordo com a resposta do usuário

int main()
{
  int numero, digito, contadorDigitos, resto, divisor;
  char continuar;

  while (1)
  {
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
      printf("Numero invalido, o numero deve ser positivo!!\n");
      continue;
    }

    printf("Informe um digito: ");
    scanf("%d", &digito);

    if (digito < 0)
    {
      printf("Digito invalido, o numero deve ser positivo!!\n");
      continue;
    }

    contadorDigitos = 0;
    divisor = numero;

    while (divisor > 0)
    {
      resto = divisor % 10;
      divisor = divisor / 10;

      if (resto == digito)
      {
        contadorDigitos += 1;
      }
    }

    printf("O numero %d possui %d digito(s) %d;\n", numero, contadorDigitos, digito);

    while (1)
    {
      printf("Deseja repetir o programa: (S ou N)? ");
      scanf(" %c", &continuar);

      if (continuar == 's' || continuar == 'S')
      {
        break;
      }
      else if (continuar == 'n' || continuar == 'N')
      {
        break;
      }
      else
      {
        printf("Opcao informada invalida!\n");
      }
    }

    if (continuar == 'n' || continuar == 'N')
    {
      break;
    }
  }

  return 0;
}
