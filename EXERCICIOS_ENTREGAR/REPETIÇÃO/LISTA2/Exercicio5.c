#include <stdio.h>
#include <math.h>

// Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
// a) Quantos valores positivos foram informados.
// b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um número negativo que é par.
// c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar para não fazer divisão por zero no cálculo da média.

int main()
{
  int numero, prositivos = 0, negativosPar = 0, div3 = 0;
  float media3 = 0;

  while (1)
  {
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
      break;
    }

    if (numero % 3 == 0)
    {
      div3 += 1;
      if (numero > 0)
      {
        media3 += numero;
      }
      else
      {
        media3 += fabs(numero);
      }
    }

    if (numero > 0)
    {
      prositivos += 1;
    }
    else
    {
      if (numero % 2 == 0)
      {
        negativosPar += 1;
      }
    }
  }

  if(div3 != 0) {
      media3 /= div3;
  }

  printf("a) Valores positivos: %d\n", prositivos);
  printf("b) Valores negativos pares: %d\n", negativosPar);
  printf("c) A media dos valores divisíveis por 3 informados: %1.2f\n", media3);

  return 0;
}
