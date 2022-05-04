#include <stdio.h>
#include "diversos.h"

// 5) Copiar todas as funções criadas nos exercícios anteriores para dentro de uma biblioteca chamada "diversos.h". Fazer um programa que use essa biblioteca e tenha o seguinte menu de opções (use switchcase):
// 1 - Calcula o quadrado de um numero
// 2 - Converte centímetros para polegadas
// 3 - Converte um valor para dólar ou real
// 4 - Multiplica dois números

int main()
{
  int opcao, numero1, numero2;
  float dinheiro, cotacao;
  char tipo, continuar;

  printf("Selecione um andar:\n");

  while (1)
  {

    printf("1 - Calcula o quadrado de um numero\n2 - Converte centímetros para polegadas\n3 - Converte um valor para dólar ou real\n4 - Multiplica dois numeros\n");

    while (1)
    {
      scanf("%d", &opcao);
      if (opcao > 4 || opcao < 1)
      {
        printf("Opcao invalida!\n");
        printf("O valor deve ser de 1 a 4: ");
        continue;
      }
      break;
    }

    switch (opcao)
    {
    case 1:
      printf("Informe um numero para quadricular: ");
      scanf("%d", &numero1);
      printf("%d ^ 2 = %d\n", numero1, quadrado(numero1));
      break;

    case 2:
      printf("Informe um valor em cm: ");
      scanf("%d", &numero1);
      printf("%d centimetro(s) equivalem em %1.2f polegadas\n", numero1, cmParaPol(numero1));
      break;

    case 3:
      printf("Informe o valor a ser convertido: ");
      scanf("%f", &dinheiro);

      printf("Informe o valor da cotacao: ");
      scanf("%f", &cotacao);

      printf("Informe o tipo de conversao (D: real -> dolar || R: dolar -> real): ");
      tipo = lerEntreDoisChar('r', 'd');

      printf("O valor convertido: %1.2f\n", converterMoedas(dinheiro, cotacao, tipo));
      break;

    case 4:
      printf("Informe um numero: ");
      scanf("%d", &numero1);

      printf("Informe outro numero: ");
      scanf("%d", &numero2);

      printf("%d X %d = %d\n", numero1, numero2, multiplicacao(numero1, numero2));
      break;
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
