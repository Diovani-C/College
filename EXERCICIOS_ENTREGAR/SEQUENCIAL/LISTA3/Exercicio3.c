#include <stdlib.h>
#include <stdio.h>

int main()
{
  //  Ler um número inteiro com até 4 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
  int numero, primeiroDigito, segundoDigito, terceiroDigito, quartoDigito, digitosAnteriores;

  printf("Separando um numero em seus digitos!\n");

  printf("Digite um numero de ate 4 digitos, ex: 1234:\n");
  scanf("%d", &numero);

  primeiroDigito = numero / 1000;

  digitosAnteriores = primeiroDigito * 10;

  segundoDigito = (numero / 100) - digitosAnteriores;

  digitosAnteriores = digitosAnteriores * 10 + segundoDigito * 10;

  terceiroDigito = (numero / 10) - digitosAnteriores;

  digitosAnteriores = digitosAnteriores * 10 + terceiroDigito * 10;

  quartoDigito = numero - digitosAnteriores;


  printf("Primeiro digito: %d\n", primeiroDigito);

  printf("Segundo digito: %d\n", segundoDigito);

  printf("Terceiro digito: %d\n", terceiroDigito);

  printf("Quarto digito: %d\n", quartoDigito);

  return 0;
}