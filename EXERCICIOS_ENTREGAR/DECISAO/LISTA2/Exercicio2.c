#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Faça um programa que apresente o menu a seguir e permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado.
  // Menu de opções:
  // 1 – Mostra os números em ordem crescente
  // 2 – Mostra os números em ordem decrescente
  // 3 - Mostra os números que são múltiplos de 2
  // Digite a opção desejada:
  // Observações: Ler um conjunto de 4 valores inteiros: opcao, a, b e c. A seguir:
  // a) Se opcao = 1 escrever os três valores a, b e c em ordem crescente.
  // b) Se opcao = 2 escrever os três valores a, b e c em ordem decrescente.
  // c) Se opcao = 3 escrever se os valores a, b e c são múltiplos de 2.
  int numero1, numero2, numero3, opcao, maior, medio, menor;

  printf("Numero e opcoes, a vida!\n");

  printf("Informe o primeiro numero:\n");
  scanf("%d", &numero1);

  printf("Informe o segundo numero:\n");
  scanf("%d", &numero2);

  printf("Informe o terceiro numero:\n");
  scanf("%d", &numero3);

  printf("Agora escolha uma das opcoes a seguir\n");

  printf("a) Se opcao = 1 escrever os três valores a, b e c em ordem crescente.\nb)Se opcao = 2 escrever os três valores a, b e c em ordem decrescente\nc)Se opcao = 3 escrever se os valores a, b e c são múltiplos de 2.\n");
  scanf("%d", &opcao);

  if (opcao == 1 || opcao == 2)
  {
    medio = (numero1 + numero2 + (numero1 - numero2)) / 2;
    maior = (maior + numero3 + (maior - numero3)) / 2;

    if (maior - medio != 0)
    {
      menor = (numero1 + numero2) - medio;
    }
    else
    {
      menor = (numero1 + numero2) - maior;
      medio = (menor + numero3 - (menor - numero3)) / 2;
      menor = (menor + numero3) - medio;
    }
  }

  switch (opcao)
  {
  case 1:
    printf("Os numeros em ordem crescente: %d, %d, %d\n", menor, medio, maior);
    break;
  case 2:
    printf("Os numeros em ordem decrescente: %d, %d, %d\n", maior, medio, menor);
    break;
  case 3:
    if (numero1 % 2 == 0)
    {
      if (numero2 % 2 == 0)
      {
        if (numero3 % 2 == 0)
        {
          printf("Todos os numeros sao divisiveis por 2: %d, %d, %d\n", numero1, numero2, numero3);
        }
        else
        {
          printf("Apenas os numeros %d e %d sao divisiveis por 2\n", numero1, numero2);
        }
      }
      else if (numero3 % 2 == 0)
      {
        printf("Somente os numeros %d e %d sao divisiveis por 2\n", numero1, numero3);
      }
      else
      {
        printf("Somente o numero %d e divisivel por 2\n", numero1);
      }
    }
    else if (numero2 % 2 == 0)
    {
      if (numero3 % 2 == 0)
      {
        printf("Meramente dois numeros %d, %d sao divisiveis por 2\n", numero2, numero3);
      }
      else
      {
        printf("Tao so o numero %d e divisivel por 2\n", numero2);
      }
    }
    else if (numero3 % 2 == 0)
    {
      printf("Somente e apenas o numero %d e divisivel por 2\n", numero3);
    }
    else
    {
      printf("Infelismente nenhum numero e divisivel por 2\n");
    }
    break;
  default:
    printf("Opcao invalida!\n");
    break;
  }

  return 0;
}
