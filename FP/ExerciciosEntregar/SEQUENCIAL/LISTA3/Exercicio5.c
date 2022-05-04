#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  // Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
  // Na sequência calcular e mostrar o inverso do número.
  int numero, numeroInverso, numeroAnterior, digitoAtual, i;
  int digitos[3] = {0};

  printf("Separando um numero e mostrando seu inverso!\n");

  printf("Digite um numero:\n");
  scanf("%d", &numero);

  numeroAnterior = numero;

  numeroInverso = 0;

  for(i=0; i < 3; i++){
    digitoAtual = numeroAnterior % 10;

    digitos[i] = digitoAtual;

    numeroAnterior /= 10;

    numeroInverso += digitoAtual * (pow(10, 3 - i) / 10);
  }

  printf("O primeiro digito é: %d\n", digitos[2]);
  printf("O segundo digito é: %d\n", digitos[1]);
  printf("O terceiro digito é: %d\n", digitos[0]);

  printf("O numero inverso è : %d\n", numeroInverso);

  return 0;
}