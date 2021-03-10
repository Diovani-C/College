#include <stdlib.h>
#include <stdio.h>

int main()
{
  //   Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
  // Também calcular e mostrar a soma dos dígitos.
  int i, numero, digitoAtual, numeroAnterior, somaDigitos;

  printf("Separando os digitos de um numero(de até 5 digitos)!\n");

  printf("Digite um numero de até 5 digitos:\n");
  scanf("%d", &numero);

  numeroAnterior = numero;

  somaDigitos = 0;

  for (i = 0; i < 5; i++)
  {
    digitoAtual = numeroAnterior % 10;

    printf("O digito na posicao %d é: %d\n", 5 - i, digitoAtual);

    somaDigitos += digitoAtual;

    numeroAnterior /= 10;
  }

  printf("A soma dos digitos é: %d\n", somaDigitos);

  return 0;
}